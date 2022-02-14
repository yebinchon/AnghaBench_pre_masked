
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct passwd {int pw_gid; int pw_uid; } ;
struct TYPE_2__ {int adh_directory; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ) ;
 struct passwd* FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(void)
{
 struct passwd *VAR_6;






 VAR_5 = 0;
 VAR_6 = FUNC_2(VAR_0);
 if (VAR_6 == ((void*)0)) {
  if (VAR_5 != 0) {
   FUNC_5(VAR_1,
       "Unable to find info about '%s' user", VAR_0);
  } else {
   FUNC_6(VAR_1, "User '%s' doesn't exist.",
       VAR_0);
  }
 }

 if (FUNC_3(VAR_4->adh_directory, 0700) == -1) {
  FUNC_5(VAR_2, "Unable to create directory \"%s\"",
      VAR_4->adh_directory);
 }
 if (FUNC_0(VAR_4->adh_directory, VAR_6->pw_uid, VAR_6->pw_gid) == -1) {
  FUNC_4(VAR_3,
      "Unable to change owner of the directory \"%s\"",
      VAR_4->adh_directory);
  (void)FUNC_7(VAR_4->adh_directory);
  FUNC_1(VAR_2);
 }
}
