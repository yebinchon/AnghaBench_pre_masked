
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Akind ;


 int VAR_0 ;
 char* VAR_1 ;
 scalar_t__ FUNC_0 (char*,...) ;

__attribute__((used)) static Akind *
FUNC_1()
{
 union {
  double d;
  long L;
  } VAR_2;
 long VAR_3;


 VAR_3 = FUNC_0(VAR_1) < 0 ? 0 : 4617762;
 if (FUNC_0(VAR_1, VAR_3) >= 0)
  VAR_3 = 1000000*VAR_3 + 693716;
 if (FUNC_0(VAR_1, VAR_3) >= 0)
  VAR_3 = 1000000*VAR_3 + 115456;
 VAR_2.d = 1e13;
 if (VAR_2.L == VAR_3)
  return &VAR_0;
 return 0;
 }
