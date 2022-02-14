
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int pb; int lp; int lc; } ;
typedef TYPE_1__ lzma_options_lzma ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__ const*) ;

extern bool
FUNC_2(const lzma_options_lzma *VAR_0, uint8_t *VAR_1)
{
 if (!FUNC_1(VAR_0))
  return 1;

 *VAR_1 = (VAR_0->pb * 5 + VAR_0->lp) * 9 + VAR_0->lc;
 FUNC_0(*VAR_1 <= (4 * 5 + 4) * 9 + 8);

 return 0;
}
