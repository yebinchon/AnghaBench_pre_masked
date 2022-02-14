
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int username2uid_t ;
typedef int uid2home_t ;
struct passwd {char* pw_dir; int pw_name; int pw_uid; } ;


 scalar_t__ FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 struct passwd* FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (char*,int ,int,int ) ;
 char* VAR_4 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,char*,int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 char* FUNC_10 (char*) ;

void
FUNC_11(void)
{
  struct passwd *VAR_7;

  if (FUNC_6() < 0)
    return;

  FUNC_5(VAR_0, "reading password map");

  FUNC_4();
  while ((VAR_7 = FUNC_3()) != (struct passwd *) ((void*)0)) {
    FUNC_9(VAR_7->pw_uid, VAR_7->pw_dir, VAR_7->pw_name);
    if (FUNC_0("root", VAR_7->pw_name)) {
      int VAR_8;
      if (VAR_4)
 FUNC_1(VAR_4);
      VAR_4 = FUNC_10(VAR_7->pw_dir);
      VAR_8 = FUNC_8(VAR_4);

      while (VAR_8 > 0 && VAR_4[VAR_8 - 1] == '/') {
 VAR_8--;
 VAR_4[VAR_8] = '\0';
      }
    }
  }
  FUNC_2();

  FUNC_7((char *) VAR_3, VAR_1, sizeof(uid2home_t),
 VAR_2);
  FUNC_7((char *) VAR_6, VAR_1, sizeof(username2uid_t),
 VAR_5);

  if (!VAR_4)
    VAR_4 = FUNC_10("");

  FUNC_5(VAR_0, "password map read and sorted");
}
