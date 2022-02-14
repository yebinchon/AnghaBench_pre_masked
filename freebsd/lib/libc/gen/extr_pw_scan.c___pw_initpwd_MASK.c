
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct passwd {char* pw_name; char* pw_passwd; char* pw_class; char* pw_gecos; char* pw_dir; char* pw_shell; scalar_t__ pw_gid; scalar_t__ pw_uid; } ;
typedef scalar_t__ gid_t ;


 int FUNC_0 (struct passwd*,int ,int) ;

void
FUNC_1(struct passwd *VAR_0)
{
 static char VAR_1[] = "";

 FUNC_0(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->pw_uid = (uid_t)-1;
 VAR_0->pw_gid = (gid_t)-1;
 VAR_0->pw_name = VAR_1;
 VAR_0->pw_passwd = VAR_1;
 VAR_0->pw_class = VAR_1;
 VAR_0->pw_gecos = VAR_1;
 VAR_0->pw_dir = VAR_1;
 VAR_0->pw_shell = VAR_1;
}
