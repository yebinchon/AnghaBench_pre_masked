
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__,int ,int*) ;

int
FUNC_1(int *VAR_5, int VAR_6)
{
 int VAR_7;

 if (VAR_4 < 0)
  return (VAR_0);

 *VAR_5 = (VAR_6 & VAR_2);

 VAR_7 = FUNC_0(VAR_4, VAR_3, VAR_5);
 if (VAR_7)
  return (VAR_1);

 return (0);

}
