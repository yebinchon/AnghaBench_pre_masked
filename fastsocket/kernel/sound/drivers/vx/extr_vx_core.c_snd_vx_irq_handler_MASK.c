
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_core {int chip_status; int tq; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct vx_core*) ;

irqreturn_t FUNC_2(int VAR_4, void *VAR_5)
{
 struct vx_core *VAR_6 = VAR_5;

 if (! (VAR_6->chip_status & VAR_2) ||
     (VAR_6->chip_status & VAR_3))
  return VAR_1;
 if (! FUNC_1(VAR_6))
  FUNC_0(&VAR_6->tq);
 return VAR_0;
}
