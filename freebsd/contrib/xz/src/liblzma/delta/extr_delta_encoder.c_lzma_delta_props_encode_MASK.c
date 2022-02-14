
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int lzma_ret ;
struct TYPE_2__ {scalar_t__ dist; } ;
typedef TYPE_1__ lzma_options_delta ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (void const*) ;

extern lzma_ret
FUNC_1(const void *VAR_4, uint8_t *VAR_5)
{


 if (FUNC_0(VAR_4) == VAR_3)
  return VAR_2;

 const lzma_options_delta *VAR_6 = VAR_4;
 VAR_5[0] = VAR_6->dist - VAR_0;

 return VAR_1;
}
