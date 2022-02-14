
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {void* pw_shell; void* pw_dir; void* pw_class; int pw_change; int pw_expire; int pw_gid; int pw_uid; void* pw_gecos; void* pw_passwd; void* pw_name; } ;


 struct passwd* FUNC_0 (int,int) ;
 void* FUNC_1 (void*) ;

struct passwd *
FUNC_2(struct passwd *VAR_0)
{
 struct passwd *VAR_1 = FUNC_0(1, sizeof(*VAR_1));

 VAR_1->pw_name = FUNC_1(VAR_0->pw_name);
 VAR_1->pw_passwd = FUNC_1(VAR_0->pw_passwd);



 VAR_1->pw_uid = VAR_0->pw_uid;
 VAR_1->pw_gid = VAR_0->pw_gid;
 VAR_1->pw_dir = FUNC_1(VAR_0->pw_dir);
 VAR_1->pw_shell = FUNC_1(VAR_0->pw_shell);
 return VAR_1;
}
