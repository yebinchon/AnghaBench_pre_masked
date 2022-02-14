
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int16_t ;
typedef int u_char ;
typedef int token_t ;


 int FUNC_0 (int *,char const*,scalar_t__) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,scalar_t__) ;
 int VAR_0 ;
 int FUNC_3 (int *,int *,scalar_t__) ;

token_t *
FUNC_4(const char *VAR_1, u_int16_t VAR_2)
{
 token_t *VAR_3;
 u_char *VAR_4 = ((void*)0);

 FUNC_3(VAR_3, VAR_4, sizeof(u_char) + sizeof(u_int16_t) + VAR_2);
 if (VAR_3 == ((void*)0))
  return (((void*)0));

 FUNC_1(VAR_4, VAR_0);
 FUNC_2(VAR_4, VAR_2);
 FUNC_0(VAR_4, VAR_1, VAR_2);

 return (VAR_3);
}
