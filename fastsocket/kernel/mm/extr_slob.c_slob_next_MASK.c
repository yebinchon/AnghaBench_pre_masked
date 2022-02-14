
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int slobidx_t ;
struct TYPE_4__ {int units; } ;
typedef TYPE_1__ slob_t ;


 unsigned long VAR_0 ;

__attribute__((used)) static slob_t *FUNC_0(slob_t *VAR_1)
{
 slob_t *VAR_2 = (slob_t *)((unsigned long)VAR_1 & VAR_0);
 slobidx_t VAR_3;

 if (VAR_1[0].units < 0)
  VAR_3 = -VAR_1[0].units;
 else
  VAR_3 = VAR_1[1].units;
 return VAR_2+VAR_3;
}
