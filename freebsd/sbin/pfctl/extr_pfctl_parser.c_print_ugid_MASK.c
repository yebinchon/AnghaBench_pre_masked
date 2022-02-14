
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int8_t ;
typedef int a2 ;
typedef int a1 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,char*,char*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*,int,char*,unsigned int) ;

void
FUNC_3(u_int8_t VAR_2, unsigned VAR_3, unsigned VAR_4, const char *VAR_5, unsigned VAR_6)
{
 char VAR_7[11], VAR_8[11];

 FUNC_2(VAR_7, sizeof(VAR_7), "%u", VAR_3);
 FUNC_2(VAR_8, sizeof(VAR_8), "%u", VAR_4);
 FUNC_1(" %s", VAR_5);
 if (VAR_3 == VAR_6 && (VAR_2 == VAR_0 || VAR_2 == VAR_1))
  FUNC_0(VAR_2, "unknown", VAR_8);
 else
  FUNC_0(VAR_2, VAR_7, VAR_8);
}
