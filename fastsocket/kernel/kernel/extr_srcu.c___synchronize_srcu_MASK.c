
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srcu_struct {int completed; int mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct srcu_struct*,int) ;

void FUNC_4(struct srcu_struct *VAR_0, void (*VAR_1)(void))
{
 int VAR_2;

 VAR_2 = VAR_0->completed;
 FUNC_0(&VAR_0->mutex);
 if ((VAR_0->completed - VAR_2) >= 2) {
  FUNC_1(&VAR_0->mutex);
  return;
 }

 VAR_1();
 VAR_2 = VAR_0->completed & 0x1;
 VAR_0->completed++;

 VAR_1();
 while (FUNC_3(VAR_0, VAR_2))
  FUNC_2(1);

 VAR_1();
 FUNC_1(&VAR_0->mutex);
}
