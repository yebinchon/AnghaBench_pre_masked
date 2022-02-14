
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uid_t ;
struct user_namespace {TYPE_1__* creator; } ;
struct cred {TYPE_1__* user; } ;
struct TYPE_2__ {struct user_namespace* user_ns; } ;


 struct user_namespace VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;

uid_t FUNC_1(struct user_namespace *VAR_2, const struct cred *VAR_3, uid_t VAR_4)
{
 struct user_namespace *VAR_5;

 if (FUNC_0(VAR_2 == VAR_3->user->user_ns))
  return VAR_4;





 for ( VAR_5 = VAR_2; VAR_5 != &VAR_0;
       VAR_5 = VAR_5->creator->user_ns ) {
  if (VAR_3->user == VAR_5->creator) {
   return (uid_t)0;
  }
 }


 return VAR_1;
}
