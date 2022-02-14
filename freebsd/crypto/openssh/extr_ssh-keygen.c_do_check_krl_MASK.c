
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshkey {int dummy; } ;
struct ssh_krl {int dummy; } ;
struct passwd {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 char* VAR_0 ;
 int FUNC_3 (char*,struct ssh_krl**) ;
 int FUNC_4 (char*,char*,char*,char*,char*,char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct ssh_krl*,struct sshkey*) ;
 int FUNC_7 (struct ssh_krl*) ;
 int FUNC_8 (struct sshkey*) ;
 int FUNC_9 (char*,struct sshkey**,char**) ;

__attribute__((used)) static void
FUNC_10(struct passwd *VAR_1, int VAR_2, char **VAR_3)
{
 int VAR_4, VAR_5, VAR_6 = 0;
 char *VAR_7;
 struct ssh_krl *VAR_8;
 struct sshkey *VAR_9;

 if (*VAR_0 == '\0')
  FUNC_1("KRL checking requires an input file");
 FUNC_3(VAR_0, &VAR_8);
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  if ((VAR_5 = FUNC_9(VAR_3[VAR_4], &VAR_9, &VAR_7)) != 0)
   FUNC_1("Cannot load public key %s: %s",
       VAR_3[VAR_4], FUNC_5(VAR_5));
  VAR_5 = FUNC_6(VAR_8, VAR_9);
  FUNC_4("%s%s%s%s: %s\n", VAR_3[VAR_4],
      *VAR_7 ? " (" : "", VAR_7, *VAR_7 ? ")" : "",
      VAR_5 == 0 ? "ok" : "REVOKED");
  if (VAR_5 != 0)
   VAR_6 = 1;
  FUNC_8(VAR_9);
  FUNC_2(VAR_7);
 }
 FUNC_7(VAR_8);
 FUNC_0(VAR_6);
}
