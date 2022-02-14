
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;

int
FUNC_1(int VAR_5)
{
 if (VAR_5 < 0 || VAR_5 >= VAR_2)
  return VAR_1;

 if (VAR_4 & (1 << VAR_5)) {
  FUNC_0(VAR_5);
  VAR_3[VAR_5] = 0;
  VAR_4 &= ~(1 << VAR_5);
  return 0;
 }
 return VAR_0;
}
