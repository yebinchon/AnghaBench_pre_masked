
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct passwd {char* pw_name; char* pw_passwd; int pw_uid; int pw_gid; int pw_fields; scalar_t__ pw_expire; int pw_shell; int pw_dir; int pw_gecos; int pw_class; scalar_t__ pw_change; } ;


 int FUNC_0 (char*,size_t,char*,char*,char*,int,int,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct passwd *VAR_0, char *VAR_1, size_t VAR_2)
{
 FUNC_0(VAR_1, VAR_2, "%s:%s:%d:%d:%jd:%s:%s:%s:%s:%jd:%d",
     VAR_0->pw_name, VAR_0->pw_passwd, VAR_0->pw_uid, VAR_0->pw_gid,
     (uintmax_t)VAR_0->pw_change, VAR_0->pw_class, VAR_0->pw_gecos,
     VAR_0->pw_dir, VAR_0->pw_shell, (uintmax_t)VAR_0->pw_expire,
     VAR_0->pw_fields);
}
