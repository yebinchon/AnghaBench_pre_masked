
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ u_long ;


 int VAR_0 ;
 scalar_t__* VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,...) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(void)
{
 int VAR_4;
 uint64_t VAR_5;
 u_long *VAR_6;
 char *VAR_7;

 VAR_6 = VAR_1;
 VAR_7 = VAR_2;
 VAR_5 = 0;
 VAR_4 = VAR_3 / sizeof(u_long);

 FUNC_3("interrupt                   total\n");
 while (--VAR_4 >= 0) {
  if (*VAR_6)
   FUNC_3("%-12s %20lu\n", VAR_7, *VAR_6);
  VAR_7 += FUNC_4(VAR_7) + 1;
  VAR_5 += *VAR_6++;
 }
 FUNC_3("Total        %20ju\n", (uintmax_t)VAR_5);





 FUNC_2("watchdog timeout");

}
