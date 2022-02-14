
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef int TS ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,...) ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,char**,int ,int ) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (int ,char*,int) ;
 char* VAR_6 ;
 scalar_t__ FUNC_10 (char*,char*,int ) ;
 char* FUNC_11 (char*,char) ;

__attribute__((used)) static int
FUNC_12(void)
{
 int VAR_7;
 char *VAR_8, *VAR_9;
 char VAR_10[VAR_3 + 1];
 time_t VAR_11;

 if (FUNC_9(VAR_11, VAR_10, sizeof(VAR_10)) != 0)
  return (-1);
 if (VAR_6 == ((void*)0)) {
  VAR_9 = ((void*)0);
 } else {
  VAR_9 = FUNC_11(VAR_6, '/');
  if (VAR_9 != ((void*)0))
   VAR_9++;
 }
 if (VAR_9 != ((void*)0) && FUNC_10(VAR_9, VAR_10, VAR_3) == 0) {
  FUNC_1("Not ready to terminate trail file yet.");
  return (0);
 }
 VAR_7 = FUNC_7(VAR_10, &VAR_8, VAR_4,
     VAR_5);
 if (VAR_7 != VAR_1) {
  FUNC_2("%s: %m", FUNC_6(VAR_7));
  if (VAR_7 != VAR_0)
   return (-1);
 }





 if (FUNC_0() == VAR_2)
  FUNC_8(VAR_10);






 FUNC_5(VAR_2);




 if (FUNC_4(VAR_8) != 0)
  FUNC_2("auditd_new_curlink(\"%s\") failed: %s: %m",
      VAR_8, FUNC_6(VAR_7));

 VAR_6 = VAR_8;
 FUNC_3("New audit file is %s", VAR_8);

 return (0);
}
