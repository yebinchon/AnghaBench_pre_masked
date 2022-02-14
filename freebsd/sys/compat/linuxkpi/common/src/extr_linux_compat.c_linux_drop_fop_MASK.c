
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linux_cdev {int siref; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*,int ) ;

__attribute__((used)) static void
FUNC_2(struct linux_cdev *VAR_2)
{

 if (VAR_2 == ((void*)0))
  return;
 FUNC_0((VAR_2->siref & ~VAR_0) != 0);
 FUNC_1(&VAR_2->siref, VAR_1);
}
