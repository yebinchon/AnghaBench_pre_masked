
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linux_cdev {int siref; int * cdev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (char*,int) ;

void
FUNC_5(struct linux_cdev *VAR_2)
{

 if (VAR_2->cdev == ((void*)0))
  return;

 FUNC_0((VAR_2->siref & VAR_0) == 0);
 FUNC_2(&VAR_2->siref, VAR_0);
 while ((FUNC_1(&VAR_2->siref) & ~VAR_0) != 0)
  FUNC_4("ldevdtr", VAR_1 / 4);

 FUNC_3(VAR_2->cdev);
 VAR_2->cdev = ((void*)0);
}
