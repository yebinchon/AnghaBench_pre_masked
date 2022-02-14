
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct thread*,int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_3(struct cdev *VAR_5, int VAR_6, struct thread *VAR_7)
{
 int VAR_8 = 0;

 FUNC_0(&VAR_4);
 if (VAR_6 & (VAR_0|VAR_1)) {
  if (VAR_3 > 0)
   VAR_8 = VAR_6 & (VAR_0|VAR_1);
  else
   FUNC_2(VAR_7, &VAR_2);
 }
 FUNC_1(&VAR_4);

 return (VAR_8);
}
