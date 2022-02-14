
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct kcov_info {scalar_t__ state; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (void**) ;

__attribute__((used)) static int
FUNC_2(struct cdev *VAR_2, int VAR_3, int VAR_4, struct thread *VAR_5)
{
 struct kcov_info *VAR_6;
 int VAR_7;


 if ((VAR_7 = FUNC_1((void **)&VAR_6)) != 0)
  return (VAR_7);

 FUNC_0(VAR_6 != ((void*)0), ("kcov_close with no kcov_info structure"));


 if (VAR_6->state == VAR_1)
  return (VAR_0);

 return (0);
}
