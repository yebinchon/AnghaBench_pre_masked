
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct cdev) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct cdev*) ;
 int FUNC_4 (struct cdev*,int,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct cdev *VAR_4, int VAR_5, int VAR_6, struct thread *VAR_7)
{
 int VAR_8 = 0;







 if (VAR_5 & VAR_0) {
  FUNC_1(&VAR_3);
  VAR_8 = FUNC_3(VAR_4);
  FUNC_2(&VAR_3);
 }

 return (VAR_8);
}
