
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshbuf {int dummy; } ;
struct passwd {char* pw_name; char* pw_gecos; char* pw_class; char* pw_dir; char* pw_shell; int pw_fields; int pw_expire; int pw_change; int pw_gid; int pw_uid; } ;


 int FUNC_0 (struct sshbuf*,char*) ;
 int FUNC_1 (struct sshbuf*,int ) ;
 int FUNC_2 (struct sshbuf*,int ) ;
 scalar_t__ FUNC_3 (struct sshbuf*,int) ;

int
FUNC_4(struct sshbuf *VAR_0, const struct passwd *VAR_1)
{
 int VAR_2;






 if ((VAR_2 = FUNC_3(VAR_0, sizeof(*VAR_1)) != 0) ||
     (VAR_2 = FUNC_0(VAR_0, VAR_1->pw_name)) != 0 ||
     (VAR_2 = FUNC_0(VAR_0, "*")) != 0 ||
     (VAR_2 = FUNC_2(VAR_0, VAR_1->pw_uid)) != 0 ||
     (VAR_2 = FUNC_2(VAR_0, VAR_1->pw_gid)) != 0 ||
     (VAR_2 = FUNC_0(VAR_0, VAR_1->pw_dir)) != 0 ||
     (VAR_2 = FUNC_0(VAR_0, VAR_1->pw_shell)) != 0 ||



     (VAR_2 = FUNC_2(VAR_0, VAR_1->pw_fields)) != 0) {
  return VAR_2;
 }
 return 0;
}
