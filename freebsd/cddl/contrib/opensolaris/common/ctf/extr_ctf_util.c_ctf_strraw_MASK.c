
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint_t ;
struct TYPE_4__ {char const* cts_strs; scalar_t__ cts_len; } ;
typedef TYPE_1__ ctf_strs_t ;
struct TYPE_5__ {TYPE_1__* ctf_str; } ;
typedef TYPE_2__ ctf_file_t ;


 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;

const char *
FUNC_2(ctf_file_t *VAR_0, uint_t VAR_1)
{
 ctf_strs_t *VAR_2 = &VAR_0->ctf_str[FUNC_1(VAR_1)];

 if (VAR_2->cts_strs != ((void*)0) && FUNC_0(VAR_1) < VAR_2->cts_len)
  return (VAR_2->cts_strs + FUNC_0(VAR_1));


 return (((void*)0));
}
