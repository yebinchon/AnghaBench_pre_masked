
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct cdev {int dummy; } ;
typedef int drv_t ;


 int FUNC_0 (int *,char*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int ** VAR_3 ;
 size_t FUNC_1 (struct cdev*) ;

__attribute__((used)) static int FUNC_2 (struct cdev *VAR_4, int VAR_5, int VAR_6, struct thread *VAR_7)
{
 drv_t *VAR_8;

 if (FUNC_1(VAR_4) >= VAR_2*VAR_1 || ! (VAR_8 = VAR_3[FUNC_1(VAR_4)]))
  return VAR_0;

 FUNC_0 (VAR_8, ("ct_open\n"));
 return 0;
}
