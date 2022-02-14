
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
typedef void* time_t ;
struct passwd {int pw_fields; void* pw_expire; int pw_shell; int pw_dir; int pw_gecos; int pw_class; int pw_passwd; void* pw_change; scalar_t__ pw_gid; scalar_t__ pw_uid; int pw_name; } ;
typedef int nvlist_t ;
typedef scalar_t__ gid_t ;


 int VAR_0 ;
 int FUNC_0 (struct passwd*,int) ;
 int FUNC_1 (int const*,char*) ;
 scalar_t__ FUNC_2 (int const*,char*) ;
 int FUNC_3 (int const*,char*,int *,char**,size_t*) ;

__attribute__((used)) static int
FUNC_4(const nvlist_t *VAR_1, struct passwd *VAR_2, char *VAR_3,
    size_t VAR_4)
{
 int VAR_5;

 if (!FUNC_1(VAR_1, "pw_name"))
  return (VAR_0);

 FUNC_0(VAR_2, sizeof(*VAR_2));

 VAR_5 = FUNC_3(VAR_1, "pw_name", &VAR_2->pw_name, &VAR_3,
     &VAR_4);
 if (VAR_5 != 0)
  return (VAR_5);
 VAR_2->pw_uid = (uid_t)FUNC_2(VAR_1, "pw_uid");
 VAR_2->pw_gid = (gid_t)FUNC_2(VAR_1, "pw_gid");
 VAR_2->pw_change = (time_t)FUNC_2(VAR_1, "pw_change");
 VAR_5 = FUNC_3(VAR_1, "pw_passwd", &VAR_2->pw_passwd, &VAR_3,
     &VAR_4);
 if (VAR_5 != 0)
  return (VAR_5);
 VAR_5 = FUNC_3(VAR_1, "pw_class", &VAR_2->pw_class, &VAR_3,
     &VAR_4);
 if (VAR_5 != 0)
  return (VAR_5);
 VAR_5 = FUNC_3(VAR_1, "pw_gecos", &VAR_2->pw_gecos, &VAR_3,
     &VAR_4);
 if (VAR_5 != 0)
  return (VAR_5);
 VAR_5 = FUNC_3(VAR_1, "pw_dir", &VAR_2->pw_dir, &VAR_3,
     &VAR_4);
 if (VAR_5 != 0)
  return (VAR_5);
 VAR_5 = FUNC_3(VAR_1, "pw_shell", &VAR_2->pw_shell, &VAR_3,
     &VAR_4);
 if (VAR_5 != 0)
  return (VAR_5);
 VAR_2->pw_expire = (time_t)FUNC_2(VAR_1, "pw_expire");
 VAR_2->pw_fields = (int)FUNC_2(VAR_1, "pw_fields");

 return (0);
}
