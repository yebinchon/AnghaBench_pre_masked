
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int16_t ;
typedef int node_p ;
typedef int * hook_p ;


 int * FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (char const*,char**,int) ;

__attribute__((used)) static hook_p
FUNC_2(node_p VAR_0, const char *VAR_1)
{
 u_int16_t VAR_2;
 char *VAR_3;

 VAR_2 = (u_int16_t)FUNC_1(VAR_1, &VAR_3, 10);
 if (*VAR_3 != '\0')
  return ((void*)0);
 return FUNC_0(VAR_0, VAR_2);
}
