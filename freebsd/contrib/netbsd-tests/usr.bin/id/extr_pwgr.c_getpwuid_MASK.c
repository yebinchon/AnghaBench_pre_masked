
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct passwd {int pw_uid; int pw_gid; void* pw_name; } ;


 struct passwd VAR_0 ;
 void* FUNC_0 (char*) ;
 int FUNC_1 (struct passwd*,int ,int) ;

struct passwd *
FUNC_2(uid_t VAR_1)
{
 struct passwd *VAR_2 = &VAR_0;

 FUNC_1(VAR_2, 0, sizeof(*VAR_2));
 if (VAR_1 == 0) {
  VAR_2->pw_name = FUNC_0("root");
  VAR_2->pw_uid = 0;
  VAR_2->pw_gid = 0;
 } else if (VAR_1 == 100) {
  VAR_2->pw_name = FUNC_0("test");
  VAR_2->pw_uid = 100;
  VAR_2->pw_gid = 100;
 } else
  VAR_2 = ((void*)0);

 return VAR_2;
}
