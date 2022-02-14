
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ev_int64_t ;


 scalar_t__ FUNC_0 (char const*,char**,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0)
{
 const char *VAR_1;
 char *VAR_2;

 FUNC_1(FUNC_0("5000000000", ((void*)0), 10) ==
  ((ev_int64_t)5000000)*1000);
 FUNC_1(FUNC_0("-5000000000", ((void*)0), 10) ==
  ((ev_int64_t)5000000)*-1000);
 VAR_1 = " 99999stuff";
 FUNC_1(FUNC_0(VAR_1, &VAR_2, 10) == (ev_int64_t)99999);
 FUNC_1(VAR_2 == VAR_1+6);
 FUNC_1(FUNC_0("foo", ((void*)0), 10) == 0);
 }
