
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stat {int dummy; } ;
struct sshkey {int dummy; } ;
struct TYPE_5__ {int number_of_password_prompts; int batch_mode; } ;
struct TYPE_4__ {char* filename; int agent_fd; scalar_t__ isprivate; scalar_t__ key; scalar_t__ userprovided; } ;
typedef TYPE_1__ Identity ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,char*,int ) ;
 int VAR_2 ;
 int FUNC_2 (char*,char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,char*,int ) ;
 int FUNC_6 (char*,struct sshkey*,char*,char*) ;
 TYPE_2__ VAR_3 ;
 char* FUNC_7 (char*,int ) ;
 int FUNC_8 (char*,int,char*,char*) ;
 char* FUNC_9 (int) ;
 int FUNC_10 (int ,char*,char*,struct sshkey**,char**,int*) ;
 scalar_t__ FUNC_11 (char*,struct stat*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*,char*,int ) ;

__attribute__((used)) static struct sshkey *
FUNC_15(Identity *VAR_4)
{
 struct sshkey *VAR_5 = ((void*)0);
 char VAR_6[300], *VAR_7, *VAR_8;
 int VAR_9, VAR_10 = 0, VAR_11 = 0, VAR_12;
 struct stat VAR_13;

 if (FUNC_11(VAR_4->filename, &VAR_13) < 0) {
  (VAR_4->userprovided ? FUNC_5 : FUNC_1)("no such identity: %s: %s",
      VAR_4->filename, FUNC_12(VAR_2));
  return ((void*)0);
 }
 FUNC_8(VAR_6, sizeof VAR_6,
     "Enter passphrase for key '%.100s': ", VAR_4->filename);
 for (VAR_12 = 0; VAR_12 <= VAR_3.number_of_password_prompts; VAR_12++) {
  if (VAR_12 == 0)
   VAR_7 = "";
  else {
   VAR_7 = FUNC_7(VAR_6, 0);
   if (*VAR_7 == '\0') {
    FUNC_0("no passphrase given, try next key");
    FUNC_3(VAR_7);
    break;
   }
  }
  switch ((VAR_9 = FUNC_10(VAR_1, VAR_4->filename,
      VAR_7, &VAR_5, &VAR_8, &VAR_10))) {
  case 0:
   break;
  case 129:
   if (VAR_3.batch_mode) {
    VAR_11 = 1;
    break;
   }
   if (VAR_12 != 0)
    FUNC_0("bad passphrase given, try again...");
   break;
  case 128:
   if (VAR_2 == VAR_0) {
    FUNC_0("Load key \"%s\": %s",
        VAR_4->filename, FUNC_9(VAR_9));
    VAR_11 = 1;
    break;
   }

  default:
   FUNC_2("Load key \"%s\": %s", VAR_4->filename, FUNC_9(VAR_9));
   VAR_11 = 1;
   break;
  }
  if (!VAR_11 && VAR_5 != ((void*)0) && VAR_4->agent_fd == -1 &&
      !(VAR_4->key && VAR_4->isprivate))
   FUNC_6(VAR_4->filename, VAR_5, VAR_8,
       VAR_7);
  if (VAR_12 > 0)
   FUNC_4(VAR_7, FUNC_13(VAR_7));
  FUNC_3(VAR_8);
  if (VAR_5 != ((void*)0) || VAR_11)
   break;
 }
 return VAR_5;
}
