
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* range; int lock; } ;


 unsigned int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,unsigned int) ;
 TYPE_1__ VAR_0 ;

void FUNC_2(int *VAR_1, int *VAR_2)
{
 unsigned VAR_3;
 do {
  VAR_3 = FUNC_0(&VAR_0.lock);

  *VAR_1 = VAR_0.range[0];
  *VAR_2 = VAR_0.range[1];
 } while (FUNC_1(&VAR_0.lock, VAR_3));
}
