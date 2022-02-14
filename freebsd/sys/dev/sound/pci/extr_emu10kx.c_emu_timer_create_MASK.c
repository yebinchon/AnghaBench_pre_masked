
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct emu_sc_info {int* timer; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int
FUNC_2(struct emu_sc_info *VAR_1)
{
 int VAR_2, VAR_3;

 VAR_3 = -1;

 FUNC_0(&VAR_1->lock);
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  if (VAR_1->timer[VAR_2] == 0) {
   VAR_1->timer[VAR_2] = -1;
   VAR_3 = VAR_2;
   FUNC_1(&VAR_1->lock);
   return (VAR_3);
  }
 FUNC_1(&VAR_1->lock);

 return (-1);
}
