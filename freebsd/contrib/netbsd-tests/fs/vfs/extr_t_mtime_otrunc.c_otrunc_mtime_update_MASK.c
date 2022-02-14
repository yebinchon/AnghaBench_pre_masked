
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
typedef int atf_tc_t ;


 int FUNC_0 (int,char*,int,unsigned long,unsigned long) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char*,long) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(const atf_tc_t *VAR_0, const char *VAR_1)
{
 time_t VAR_2 = 0;
 int VAR_3;



 VAR_3 = FUNC_4(VAR_1);
 if (VAR_3 == -1)
  FUNC_1("chdir failed");

 for (int VAR_4 = 0; VAR_4 < 5; VAR_4++) {
  time_t VAR_5 = FUNC_2();
  FUNC_3("last lock: %ld\n", (long)VAR_5);
  FUNC_0(VAR_4 == 0 || VAR_5 > VAR_2,
      "iteration %d: lock time did not increase, old time %lu, "
      "new time %lu", VAR_4,
      (unsigned long)VAR_2, (unsigned long)VAR_5);
  VAR_2 = VAR_5;
  FUNC_5(2);
 }
 FUNC_4("/");
}
