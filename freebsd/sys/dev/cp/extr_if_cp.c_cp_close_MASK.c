
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct cdev {int dummy; } ;
typedef int drv_t ;


 int FUNC_0 (int *,char*) ;
 int ** VAR_0 ;
 size_t FUNC_1 (struct cdev*) ;

__attribute__((used)) static int FUNC_2 (struct cdev *VAR_1, int VAR_2, int VAR_3, struct thread *VAR_4)
{
 drv_t *VAR_5 = VAR_0 [FUNC_1 (VAR_1)];

 FUNC_0 (VAR_5, ("cp_close\n"));
 return 0;
}
