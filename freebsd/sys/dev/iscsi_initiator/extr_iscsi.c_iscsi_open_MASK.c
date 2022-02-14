
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,scalar_t__) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct cdev*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_3(struct cdev *VAR_2, int VAR_3, int VAR_4, struct thread *VAR_5)
{
     FUNC_1(8);

     FUNC_0(7, "dev=%d", FUNC_2(VAR_2));

     if(FUNC_2(VAR_2) > VAR_1) {

          return VAR_0;
     }
     return 0;
}
