
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int,long*,size_t*,int *,int ) ;

long
FUNC_1(void)
{
 int VAR_2[2];
 size_t VAR_3;
 long VAR_4;

 VAR_2[0] = VAR_0;
 VAR_2[1] = VAR_1;
 VAR_3 = sizeof VAR_4;
 if (FUNC_0(VAR_2, 2, &VAR_4, &VAR_3, ((void*)0), 0) == -1)
  return (-1);
 return (VAR_4);
}
