
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;

int
FUNC_2(int VAR_4)
{
 int VAR_5, VAR_6;

 VAR_5 = VAR_3;
 VAR_3 = 0;
 VAR_6 = FUNC_0(VAR_2, 0);
 if (VAR_6 == -1 && VAR_3 != 0)
  return (-1);
 if (FUNC_1(VAR_2, 0, VAR_6 + VAR_4) == -1) {
  if (VAR_3 == VAR_0)
   VAR_3 = VAR_1;
  return (-1);
 }
 VAR_3 = VAR_5;
 return (0);
}
