
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int int32_t ;


 int FUNC_0 (int *,int) ;
 int * FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(int VAR_0, u_char **VAR_1, int *VAR_2)
{
 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
  return -1;
 *VAR_1 = FUNC_1(sizeof(int32_t));
 FUNC_0(*VAR_1, VAR_0);
 *VAR_2 = sizeof(int32_t);
 return 0;
}
