
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int slobidx_t ;
struct TYPE_4__ {int units; } ;
typedef TYPE_1__ slob_t ;


 unsigned long VAR_0 ;

__attribute__((used)) static void FUNC_0(slob_t *VAR_1, slobidx_t VAR_2, slob_t *VAR_3)
{
 slob_t *VAR_4 = (slob_t *)((unsigned long)VAR_1 & VAR_0);
 slobidx_t VAR_5 = VAR_3 - VAR_4;

 if (VAR_2 > 1) {
  VAR_1[0].units = VAR_2;
  VAR_1[1].units = VAR_5;
 } else
  VAR_1[0].units = -VAR_5;
}
