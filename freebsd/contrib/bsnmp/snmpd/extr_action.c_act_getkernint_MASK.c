
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
typedef int u_long ;


 int VAR_0 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int ) ;
 scalar_t__ FUNC_2 (int*,int,int *,size_t*,int *,int ) ;

__attribute__((used)) static char *
FUNC_3(int VAR_1)
{
 int VAR_2[2];
 size_t VAR_3;
 u_long VAR_4;
 char *VAR_5;

 VAR_2[0] = VAR_0;
 VAR_2[1] = VAR_1;
 VAR_3 = sizeof(VAR_4);
 if (FUNC_2(VAR_2, 2, &VAR_4, &VAR_3, ((void*)0), 0) != 0)
  return (((void*)0));

 if ((VAR_5 = FUNC_0(20)) == ((void*)0))
  return (((void*)0));
 FUNC_1(VAR_5, "%lu", VAR_4);
 return (VAR_5);
}
