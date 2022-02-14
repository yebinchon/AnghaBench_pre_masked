
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int buf ;


 int FUNC_0 (char*,int,char*,double const) ;

__attribute__((used)) static const char *
FUNC_1(uint64_t VAR_0, uint64_t VAR_1)
{
 if (VAR_1 == 0)
  return "---";

 const double VAR_2 = (double)(VAR_0)
   / (double)(VAR_1);
 if (VAR_2 > 9.999)
  return "---";

 static char VAR_3[16];
 FUNC_0(VAR_3, sizeof(VAR_3), "%.3f", VAR_2);
 return VAR_3;
}
