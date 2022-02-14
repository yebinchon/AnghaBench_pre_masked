
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;
typedef scalar_t__ u_int16_t ;
typedef int u_char ;
typedef int token_t ;


 int FUNC_0 (int *,char const*,scalar_t__) ;
 int FUNC_1 (int *,char) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,int ) ;
 char VAR_0 ;
 int FUNC_4 (int *,int *,scalar_t__) ;
 scalar_t__ FUNC_5 (char const*) ;

token_t *
FUNC_6(char VAR_1, const char *VAR_2, u_int64_t VAR_3)
{
 token_t *VAR_4;
 u_char *VAR_5 = ((void*)0);
 u_int16_t VAR_6;

 VAR_6 = FUNC_5(VAR_2);
 VAR_6 += 1;

 FUNC_4(VAR_4, VAR_5, 2 * sizeof(u_char) + sizeof(u_int64_t) +
     sizeof(u_int16_t) + VAR_6);
 if (VAR_4 == ((void*)0))
  return (((void*)0));

 FUNC_1(VAR_5, VAR_0);
 FUNC_1(VAR_5, VAR_1);
 FUNC_3(VAR_5, VAR_3);
 FUNC_2(VAR_5, VAR_6);
 FUNC_0(VAR_5, VAR_2, VAR_6);

 return (VAR_4);
}
