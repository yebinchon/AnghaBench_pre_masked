
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int32_t ;
typedef int u_char ;
typedef int token_t ;
struct in6_addr {int dummy; } ;


 int FUNC_0 (int *,struct in6_addr*,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,int *,int) ;

token_t *
FUNC_4(struct in6_addr *VAR_2)
{
 token_t *VAR_3;
 u_char *VAR_4 = ((void*)0);
 u_int32_t VAR_5 = VAR_1;

 FUNC_3(VAR_3, VAR_4, sizeof(u_char) + 5 * sizeof(uint32_t));
 if (VAR_3 == ((void*)0))
  return (((void*)0));

 FUNC_1(VAR_4, VAR_0);
 FUNC_2(VAR_4, VAR_5);
 FUNC_0(VAR_4, VAR_2, 4 * sizeof(uint32_t));

 return (VAR_3);
}
