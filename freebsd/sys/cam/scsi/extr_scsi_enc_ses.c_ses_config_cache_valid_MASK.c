
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_7__ {TYPE_2__* cfg_page; } ;
typedef TYPE_3__ ses_cache_t ;
struct TYPE_5__ {int const* gen_code; } ;
struct TYPE_6__ {TYPE_1__ hdr; } ;


 scalar_t__ FUNC_0 (int const*) ;

__attribute__((used)) static int
FUNC_1(ses_cache_t *VAR_0, const uint8_t *VAR_1)
{
 uint32_t VAR_2;
 uint32_t VAR_3;

 if (VAR_0->cfg_page == ((void*)0))
  return (0);

 VAR_2 = FUNC_0(VAR_0->cfg_page->hdr.gen_code);
 VAR_3 = FUNC_0(VAR_1);
 return (VAR_2 == VAR_3);
}
