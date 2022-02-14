
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int ,unsigned char*,int) ;
 int VAR_0 ;
 int VAR_1 ;

int
FUNC_1()
{
 unsigned char VAR_2;

 if (VAR_0 != -1)
  return 1;

 if (FUNC_0(VAR_1, &VAR_2, 1) > 0) {
  VAR_0 = VAR_2;
  return 1;
 }

 return 0;
}
