
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct user_struct {int dummy; } ;
struct user_namespace {int dummy; } ;


 struct user_namespace* FUNC_0 () ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct user_struct* FUNC_3 (int ,int ) ;
 int VAR_0 ;
 int FUNC_4 (struct user_namespace*,int ) ;

struct user_struct *FUNC_5(uid_t VAR_1)
{
 struct user_struct *VAR_2;
 unsigned long VAR_3;
 struct user_namespace *VAR_4 = FUNC_0();

 FUNC_1(&VAR_0, VAR_3);
 VAR_2 = FUNC_3(VAR_1, FUNC_4(VAR_4, VAR_1));
 FUNC_2(&VAR_0, VAR_3);
 return VAR_2;
}
