
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct sshkey {int dummy; } ;


 int FUNC_0 (char*,char const*,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,char const*,...) ;
 int FUNC_2 (struct sshkey*,char*) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct sshkey*) ;
 int FUNC_6 (char const*,int *,struct sshkey**,char**) ;
 int FUNC_7 (char const*,struct sshkey**,char**) ;
 scalar_t__ FUNC_8 (int ,struct stat*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(const char *VAR_2)
{
 struct stat VAR_3;
 char *VAR_4 = ((void*)0);
 struct sshkey *VAR_5 = ((void*)0);
 int VAR_6;

 if (FUNC_8(VAR_1, &VAR_3) < 0)
  FUNC_1("%s: %s", VAR_2, FUNC_9(VAR_0));
 if ((VAR_6 = FUNC_7(VAR_2, &VAR_5, &VAR_4)) != 0) {
  FUNC_0("load public \"%s\": %s", VAR_2, FUNC_4(VAR_6));
  if ((VAR_6 = FUNC_6(VAR_2, ((void*)0),
      &VAR_5, &VAR_4)) != 0) {
   FUNC_0("load private \"%s\": %s", VAR_2, FUNC_4(VAR_6));
   FUNC_1("%s is not a key file.", VAR_2);
  }
 }

 FUNC_2(VAR_5, VAR_4);
 FUNC_5(VAR_5);
 FUNC_3(VAR_4);
}
