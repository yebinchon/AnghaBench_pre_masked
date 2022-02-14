
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 scalar_t__ VAR_0 ;

 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ,char*,char*,char*,char const*,char const*,...) ;
 scalar_t__ FUNC_5 (char const*,struct stat*) ;
 scalar_t__ FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (char const*) ;
 scalar_t__ VAR_4 ;
 int FUNC_8 () ;
 int FUNC_9 (int,int*,int ) ;
 int FUNC_10 (char*,char const*,...) ;
 int FUNC_11 (char*,int ,char const*,...) ;

__attribute__((used)) static int
FUNC_12(const char *VAR_5, const char *VAR_6)
{
 struct stat VAR_7;
 int VAR_8, VAR_9;

 if (FUNC_5(VAR_6, &VAR_7) == 0) {

  if (FUNC_0(VAR_7.st_mode)) {
   if (FUNC_6(VAR_6) != 0) {
    FUNC_10("rmdir %s", VAR_6);
    return (1);
   }
  } else {
   if (FUNC_7(VAR_6) != 0) {
    FUNC_10("unlink %s", VAR_6);
    return (1);
   }
  }
 } else if (VAR_3 != VAR_0) {
  FUNC_10("%s", VAR_6);
  return (1);
 }


 if (!(VAR_8 = FUNC_8())) {
  FUNC_4(VAR_1, "mv", VAR_4 ? "-PRpv" : "-PRp", "--", VAR_5, VAR_6,
      (char *)((void*)0));
  FUNC_3(128);
 }
 if (FUNC_9(VAR_8, &VAR_9, 0) == -1) {
  FUNC_10("%s %s %s: waitpid", VAR_1, VAR_5, VAR_6);
  return (1);
 }
 if (!FUNC_2(VAR_9)) {
  FUNC_11("%s %s %s: did not terminate normally",
      VAR_1, VAR_5, VAR_6);
  return (1);
 }
 switch (FUNC_1(VAR_9)) {
 case 0:
  break;
 case 128:
  FUNC_11("%s %s %s: exec failed", VAR_1, VAR_5, VAR_6);
  return (1);
 default:
  FUNC_11("%s %s %s: terminated with %d (non-zero) status",
      VAR_1, VAR_5, VAR_6, FUNC_1(VAR_9));
  return (1);
 }


 if (!(VAR_8 = FUNC_8())) {
  FUNC_4(VAR_2, "mv", "-rf", "--", VAR_5, (char *)((void*)0));
  FUNC_3(128);
 }
 if (FUNC_9(VAR_8, &VAR_9, 0) == -1) {
  FUNC_10("%s %s: waitpid", VAR_2, VAR_5);
  return (1);
 }
 if (!FUNC_2(VAR_9)) {
  FUNC_11("%s %s: did not terminate normally", VAR_2, VAR_5);
  return (1);
 }
 switch (FUNC_1(VAR_9)) {
 case 0:
  break;
 case 128:
  FUNC_11("%s %s: exec failed", VAR_2, VAR_5);
  return (1);
 default:
  FUNC_11("%s %s: terminated with %d (non-zero) status",
      VAR_2, VAR_5, FUNC_1(VAR_9));
  return (1);
 }
 return (0);
}
