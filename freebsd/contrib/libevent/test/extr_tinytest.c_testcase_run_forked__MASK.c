
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct testgroup_t {char* prefix; } ;
struct testcase_t {int name; } ;
typedef int si ;
typedef int pid_t ;
typedef int info ;
typedef enum outcome { ____Placeholder_outcome } outcome ;
typedef int buffer ;
struct TYPE_6__ {int cb; int hThread; int hProcess; } ;
typedef TYPE_1__ STARTUPINFOA ;
typedef TYPE_1__ PROCESS_INFORMATION ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int *,int *,int ,int ,int *,int *,TYPE_1__*,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (int ,scalar_t__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 char* VAR_6 ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 int VAR_7 ;
 int FUNC_9 (TYPE_1__*,int ,int) ;
 scalar_t__ VAR_8 ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (int*) ;
 int FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (int,char*,int) ;
 int FUNC_14 (char*,int,char*,char*,char*,char*,int ) ;
 int FUNC_15 (struct testcase_t const*) ;
 char* VAR_9 ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,int*,int ) ;
 scalar_t__ FUNC_18 (int,char*,int) ;

__attribute__((used)) static enum outcome
FUNC_19(const struct testgroup_t *VAR_10,
       const struct testcase_t *VAR_11)
{
 int VAR_12[2];
 pid_t VAR_13;
 (void)VAR_10;

 if (FUNC_11(VAR_12))
  FUNC_10("opening pipe");

 if (VAR_8>0)
  FUNC_12("[forking] ");
 VAR_13 = FUNC_8();



 if (!VAR_13) {

  int VAR_14, VAR_15;
  char VAR_16[1];
  FUNC_6(VAR_12[0]);
  VAR_14 = FUNC_15(VAR_11);
  FUNC_5(0<=(int)VAR_14 && (int)VAR_14<=2);
  VAR_16[0] = "NYS"[VAR_14];
  VAR_15 = (int)FUNC_18(VAR_12[1], VAR_16, 1);
  if (VAR_15 != 1) {
   FUNC_10("write outcome to pipe");
   FUNC_7(1);
  }
  FUNC_7(0);
  return VAR_0;
 } else {

  int VAR_17, VAR_18;
  char VAR_19[1];


  FUNC_6(VAR_12[1]);
  VAR_18 = (int)FUNC_13(VAR_12[0], VAR_19, 1);
  if (VAR_18 == 0) {
   FUNC_12("[Lost connection!] ");
   return 0;
  } else if (VAR_18 != 1) {
   FUNC_10("read outcome from pipe");
  }
  FUNC_17(VAR_13, &VAR_17, 0);
  FUNC_6(VAR_12[0]);
  return VAR_19[0]=='Y' ? VAR_4 : (VAR_19[0]=='S' ? VAR_5 : VAR_0);
 }

}
