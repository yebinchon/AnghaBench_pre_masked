
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nfds ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,int,int*,size_t*,int *,int ) ;

int
FUNC_1(void)
{
 int VAR_3[4];
 int VAR_4;
 int VAR_5;
 size_t VAR_6;

 VAR_6 = sizeof(VAR_5);
 VAR_3[0] = VAR_0;
 VAR_3[1] = VAR_1;
 VAR_3[2] = VAR_2;
 VAR_3[3] = 0;

 VAR_4 = FUNC_0(VAR_3, 4, &VAR_5, &VAR_6, ((void*)0), 0);
 if (VAR_4)
  return (-1);
 return (VAR_5);
}
