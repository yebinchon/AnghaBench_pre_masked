
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int socklen_t ;
typedef int len ;


 int FUNC_0 (int,int *,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int ,int ,int*,int*) ;
 int * FUNC_3 (int) ;

int
FUNC_4(int VAR_2, u_char **VAR_3, char *VAR_4)
{
 int VAR_5;
 socklen_t VAR_6;

 VAR_6 = sizeof(VAR_5);
 if (FUNC_2(VAR_2, VAR_0, VAR_1, &VAR_5, &VAR_6) == -1 ||
     (*VAR_3 = FUNC_3(VAR_5)) == ((void*)0))
  return (-1);
 if ((VAR_5 = FUNC_0(VAR_2, *VAR_3, VAR_5, VAR_4)) < 0)
  FUNC_1(*VAR_3);
 return (VAR_5);
}
