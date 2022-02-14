
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshkey {int dummy; } ;
struct pam_ssh_key {char* comment; struct sshkey* key; } ;
typedef int fn ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 struct pam_ssh_key* FUNC_1 (int) ;
 int FUNC_2 (int ,char*,char*,...) ;
 int FUNC_3 (char*,int,char*,char const*,char const*) ;
 int FUNC_4 (struct sshkey*) ;
 int FUNC_5 (char*,char const*,struct sshkey**,char**) ;

__attribute__((used)) static struct pam_ssh_key *
FUNC_6(const char *VAR_2, const char *VAR_3, const char *VAR_4,
    int VAR_5)
{
 char VAR_6[VAR_1];
 struct pam_ssh_key *VAR_7;
 struct sshkey *VAR_8;
 char *VAR_9;
 int VAR_10;

 if (FUNC_3(VAR_6, sizeof(VAR_6), "%s/%s", VAR_2, VAR_3) > (int)sizeof(VAR_6))
  return (((void*)0));
 VAR_10 = FUNC_5(VAR_6, "", &VAR_8, &VAR_9);
 if (VAR_10 == 0 && !(*VAR_4 == '\0' && VAR_5)) {
  FUNC_4(VAR_8);
  return (((void*)0));
 }
 if (VAR_10 != 0)
  VAR_10 = FUNC_5(VAR_6, VAR_4, &VAR_8, &VAR_9);
 if (VAR_10 != 0) {
  FUNC_2(VAR_0, "failed to load key from %s", VAR_6);
  return (((void*)0));
 }

 FUNC_2(VAR_0, "loaded '%s' from %s", VAR_9, VAR_6);
 if ((VAR_7 = FUNC_1(sizeof(*VAR_7))) == ((void*)0)) {
  FUNC_4(VAR_8);
  FUNC_0(VAR_9);
  return (((void*)0));
 }
 VAR_7->key = VAR_8;
 VAR_7->comment = VAR_9;
 return (VAR_7);
}
