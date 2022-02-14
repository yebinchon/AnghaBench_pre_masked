
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int*,int,char*,size_t*,int *,int ) ;

int
FUNC_1(char *VAR_5, size_t VAR_6)
{
 int VAR_7[2];

 VAR_7[0] = VAR_0;
 VAR_7[1] = VAR_3;
 if (FUNC_0(VAR_7, 2, VAR_5, &VAR_6, ((void*)0), 0) == -1) {
  if (VAR_4 == VAR_2)
   VAR_4 = VAR_1;
  return (-1);
 }
 return (0);
}
