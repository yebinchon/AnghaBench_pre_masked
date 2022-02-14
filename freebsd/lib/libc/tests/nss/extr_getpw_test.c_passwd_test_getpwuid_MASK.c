
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd_test_data {int dummy; } ;
struct passwd {int pw_uid; } ;


 scalar_t__ FUNC_0 (struct passwd*,struct passwd*,int *) ;
 int FUNC_1 (struct passwd*) ;
 struct passwd* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct passwd_test_data*,struct passwd*) ;
 scalar_t__ FUNC_4 (struct passwd*,int *) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int
FUNC_6(struct passwd *VAR_0, void *VAR_1)
{
 struct passwd *VAR_2;






 VAR_2 = FUNC_2(VAR_0->pw_uid);
 if ((FUNC_4(VAR_2, ((void*)0)) != 0) ||
     ((FUNC_0(VAR_2, VAR_0, ((void*)0)) != 0) &&
     (FUNC_3((struct passwd_test_data *)VAR_1, VAR_2)
     != 0))) {



  return (-1);
 } else {



  return (0);
 }
}
