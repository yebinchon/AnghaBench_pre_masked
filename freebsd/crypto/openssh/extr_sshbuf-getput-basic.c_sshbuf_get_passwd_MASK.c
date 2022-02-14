
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;
struct sshbuf {int dummy; } ;
struct passwd {int pw_fields; int pw_expire; int pw_shell; int pw_dir; int pw_class; int pw_gecos; int pw_change; int pw_gid; int pw_uid; int pw_passwd; int pw_name; } ;


 int FUNC_0 (struct passwd*) ;
 scalar_t__ FUNC_1 (struct sshbuf*,int *,int *) ;
 scalar_t__ FUNC_2 (struct sshbuf*,int *) ;
 scalar_t__ FUNC_3 (struct sshbuf*,int *) ;
 int FUNC_4 (struct sshbuf*,int*) ;
 struct passwd* FUNC_5 (int,int) ;

struct passwd *
FUNC_6(struct sshbuf *VAR_0)
{
 struct passwd *VAR_1;
 u_int64_t VAR_2;
 int VAR_3;


 VAR_3 = FUNC_4(VAR_0, &VAR_2);
 if (VAR_3 != 0 || VAR_2 != sizeof(*VAR_1))
  return ((void*)0);

 VAR_1 = FUNC_5(1, sizeof(*VAR_1));
 if (FUNC_1(VAR_0, &VAR_1->pw_name, ((void*)0)) != 0 ||
     FUNC_1(VAR_0, &VAR_1->pw_passwd, ((void*)0)) != 0 ||
     FUNC_3(VAR_0, &VAR_1->pw_uid) != 0 ||
     FUNC_3(VAR_0, &VAR_1->pw_gid) != 0 ||
     FUNC_1(VAR_0, &VAR_1->pw_dir, ((void*)0)) != 0 ||
     FUNC_1(VAR_0, &VAR_1->pw_shell, ((void*)0)) != 0 ||



     FUNC_3(VAR_0, &VAR_1->pw_fields) != 0) {
  FUNC_0(VAR_1);
  return ((void*)0);
 }
 return VAR_1;
}
