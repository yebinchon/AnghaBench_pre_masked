
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ren ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (char*,int,int ) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 int FUNC_5 (char*,int,char*,char const*,int) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static int
FUNC_7(const char *VAR_8)
{
 char VAR_9[VAR_6];
 int VAR_10;

 for (;;) {
  int VAR_11;

  VAR_10 = FUNC_5(VAR_9, sizeof(VAR_9), "%s.bad.%08x",
      VAR_8, FUNC_0());
  if (VAR_10 >= sizeof(VAR_9)) {
   FUNC_2(VAR_2, "[priv] new name too long");
   return (1);
  }


  VAR_11 = FUNC_3(VAR_9, VAR_4|VAR_5, 0);
  if (VAR_11 >= 0) {
   FUNC_1(VAR_11);
   break;
  }

  if (VAR_7 != VAR_0 && VAR_7 != VAR_1) {
   FUNC_2(VAR_2, "[priv] failed to create new name: %s",
       FUNC_6(VAR_7));
   return (1);
  }
 }

 if (FUNC_4(VAR_8, VAR_9)) {
  FUNC_2(VAR_2, "[priv] failed to rename %s to %s: %s",
      VAR_8, VAR_9, FUNC_6(VAR_7));
  return (1);
 }

 FUNC_2(VAR_3,
        "[priv]: log file %s moved to %s", VAR_8, VAR_9);

 return (0);
}
