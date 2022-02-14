
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;
typedef int time_t ;
typedef int int64_t ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*) ;

__attribute__((used)) static u_int64_t
FUNC_2(const char *VAR_0, time_t VAR_1)
{
 int64_t VAR_2, VAR_3;

 VAR_2 = *VAR_0 == '-' ? -1 : 1;

 if ((VAR_3 = FUNC_0(VAR_0 + 1)) == -1)
  FUNC_1("Invalid relative certificate time %s", VAR_0);
 if (VAR_2 == -1 && VAR_3 > VAR_1)
  FUNC_1("Certificate time %s cannot be represented", VAR_0);
 return VAR_1 + (u_int64_t)(VAR_3 * VAR_2);
}
