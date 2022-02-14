
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 size_t FUNC_3 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char const*,int ,char* const*) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int * VAR_3 ;
 int FUNC_7 (int ,int*,int ) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char*,char const*,...) ;

__attribute__((used)) static int
FUNC_10(const char *VAR_4, const char *VAR_5, char *const VAR_6[])
{
 pid_t VAR_7;
 int VAR_8;

 switch (VAR_7 = FUNC_6()) {
 case -1:
  FUNC_8("fork");
  FUNC_5 (1);
 case 0:

  FUNC_4(VAR_5, VAR_1, VAR_6);
  if (VAR_2 == VAR_0) {
   FUNC_8("exec %s not found", VAR_5);
   if (VAR_5[0] != '/') {
    FUNC_9("in path: %s", VAR_1);
   }
  }
  FUNC_5(1);
 default:
  if (FUNC_7(VAR_7, &VAR_8, 0) < 0) {
   FUNC_8("waitpid");
   return (1);
  }

  if (FUNC_1(VAR_8)) {
   if (FUNC_0(VAR_8) != 0)
    return (FUNC_0(VAR_8));
  } else if (FUNC_2(VAR_8)) {
   FUNC_9("%s: %s", VAR_4, VAR_3[FUNC_3(VAR_8)]);
   return (1);
  }
  break;
 }

 return (0);
}
