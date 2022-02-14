
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct passwd {int pw_shell; int pw_dir; int pw_gecos; scalar_t__ pw_gid; scalar_t__ pw_uid; int pw_name; } ;


 int FUNC_0 (char**,char*,int ,int ,int ,int ,int ,int ) ;

char *
FUNC_1(const struct passwd *VAR_0)
{
 char *VAR_1;

 FUNC_0(&VAR_1, "%d:*:%jd:%jd:%d:%d:%d", VAR_0->pw_name,
     (uintmax_t)VAR_0->pw_uid, (uintmax_t)VAR_0->pw_gid,
     VAR_0->pw_gecos, VAR_0->pw_dir, VAR_0->pw_shell);
 return (VAR_1);
}
