
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int16_t ;
typedef int u_char ;
typedef int token_t ;


 int FUNC_0 (int *,char*,scalar_t__) ;
 int FUNC_1 (int *,char) ;
 int FUNC_2 (int *,scalar_t__) ;
 char VAR_0 ;
 int FUNC_3 (int *,int *,scalar_t__) ;
 scalar_t__ FUNC_4 (char*) ;

token_t *
FUNC_5(char VAR_1, char *VAR_2)
{
 u_int16_t VAR_3;
 u_char *VAR_4;
 token_t *VAR_5;

 VAR_3 = FUNC_4(VAR_2) + 1;
 FUNC_3(VAR_5, VAR_4, sizeof(u_char) + sizeof(u_char) +
     sizeof(u_int16_t) + VAR_3);
 if (VAR_5 == ((void*)0))
  return (((void*)0));
 FUNC_1(VAR_4, VAR_0);
 FUNC_1(VAR_4, VAR_1);
 FUNC_2(VAR_4, VAR_3);
 FUNC_0(VAR_4, VAR_2, VAR_3);
 return (VAR_5);
}
