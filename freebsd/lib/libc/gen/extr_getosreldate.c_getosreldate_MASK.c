
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int*,int,int*,size_t*,int *,int ) ;

int
FUNC_3(void)
{
 int VAR_2[2];
 size_t VAR_3;
 int VAR_4;
 char *VAR_5;

 if ((VAR_5 = FUNC_1("OSVERSION"))) {
  VAR_4 = FUNC_0(VAR_5);
  return (VAR_4);
 }

 VAR_2[0] = VAR_0;
 VAR_2[1] = VAR_1;
 VAR_3 = sizeof VAR_4;
 if (FUNC_2(VAR_2, 2, &VAR_4, &VAR_3, ((void*)0), 0) == -1)
  return (-1);
 return (VAR_4);
}
