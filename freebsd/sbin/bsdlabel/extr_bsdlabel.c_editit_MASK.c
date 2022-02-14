
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
typedef int gid_t ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*,...) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (char const*,char const*,int ,char*) ;
 int FUNC_2 () ;
 char* FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int VAR_7 ;
 int FUNC_12 (int*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*) ;

__attribute__((used)) static int
FUNC_15(void)
{
 int VAR_8, VAR_9;
 int VAR_10, VAR_11;
 const char *VAR_12;
 uid_t VAR_13;
 gid_t VAR_14;

 VAR_11 = FUNC_8(FUNC_9(VAR_4)|FUNC_9(VAR_5)|FUNC_9(VAR_3));
 while ((VAR_8 = FUNC_2()) < 0) {
  if (VAR_6 == VAR_2) {
   FUNC_14("you have too many processes");
   return(0);
  }
  if (VAR_6 != VAR_1) {
   FUNC_13("fork");
   return(0);
  }
  FUNC_11(1);
 }
 if (VAR_8 == 0) {
  FUNC_10(VAR_11);
  VAR_14 = FUNC_4();
  if (FUNC_6(VAR_14, VAR_14, VAR_14) == -1)
   FUNC_0(1, "setresgid");
  VAR_13 = FUNC_5();
  if (FUNC_7(VAR_13, VAR_13, VAR_13) == -1)
   FUNC_0(1, "setresuid");
  if ((VAR_12 = FUNC_3("EDITOR")) == (char *)0)
   VAR_12 = VAR_0;
  FUNC_1(VAR_12, VAR_12, VAR_7, (char *)0);
  FUNC_0(1, "%s", VAR_12);
 }
 while ((VAR_9 = FUNC_12(&VAR_10)) >= 0)
  if (VAR_9 == VAR_8)
   break;
 FUNC_10(VAR_11);
 return(!VAR_10);
}
