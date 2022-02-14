
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int VAR_4 ;

int
FUNC_5(void)
{
 int VAR_5;

 if (FUNC_0(VAR_4, 0644) != 0)
  return (-1);

 if (FUNC_4(VAR_4, VAR_3) != 0)
  return (-1);





 if ((VAR_5 = FUNC_3(VAR_2, VAR_1|VAR_0)) == -1)
  return (-1);

 if (FUNC_2(VAR_5) != 0) {
  FUNC_1(VAR_5);
  return (-1);
 }

 FUNC_1(VAR_5);
 return(0);
}
