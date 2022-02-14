
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef int TS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 () ;
 int VAR_4 ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ,char*,int) ;
 int * VAR_5 ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int
FUNC_12(void)
{
 int VAR_6 = 0;
 char VAR_7[VAR_3 + 1];
 int VAR_8;
 int VAR_9;
 time_t VAR_10;

 VAR_8 = FUNC_2(VAR_2, ((void*)0));
 if (VAR_8)
  FUNC_3("auditd_gen_record(AUE_audit_shutdown) %s: %m",
      FUNC_6(VAR_8));


 VAR_9 = VAR_0;
 VAR_6 = FUNC_0(&VAR_9);
 if (VAR_6 != 0) {
  FUNC_3("Disabling audit failed! : %s", FUNC_11(VAR_4));
  VAR_6 = 1;
 }




 FUNC_5(VAR_1);

 if (FUNC_10(VAR_10, VAR_7, sizeof(VAR_7)) == 0)
  FUNC_7(VAR_7);
 if (VAR_5 != ((void*)0))
  FUNC_9(VAR_5);

 VAR_6 += FUNC_8();

 if (VAR_6) {
  FUNC_3("Could not unregister");
  FUNC_1();
 }

 FUNC_4("Finished");
 return (VAR_6);
}
