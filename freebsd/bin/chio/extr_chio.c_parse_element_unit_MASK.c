
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;


 int FUNC_0 (int,char*,char*) ;
 scalar_t__ FUNC_1 (char*,char**,int) ;

__attribute__((used)) static u_int16_t
FUNC_2(char *VAR_0)
{
 int VAR_1;
 char *VAR_2;

 VAR_1 = (int)FUNC_1(VAR_0, &VAR_2, 10);
 if ((VAR_1 < 0) || (*VAR_2 != '\0'))
  FUNC_0(1, "invalid unit number `%s'", VAR_0);

 return ((u_int16_t)VAR_1);
}
