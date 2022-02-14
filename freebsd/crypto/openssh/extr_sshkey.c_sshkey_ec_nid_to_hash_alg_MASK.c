
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;

int
FUNC_1(int VAR_3)
{
 int VAR_4 = FUNC_0(VAR_3);

 if (VAR_4 <= 0)
  return -1;


 if (VAR_4 <= 256)
  return VAR_0;
 else if (VAR_4 <= 384)
  return VAR_1;
 else
  return VAR_2;
}
