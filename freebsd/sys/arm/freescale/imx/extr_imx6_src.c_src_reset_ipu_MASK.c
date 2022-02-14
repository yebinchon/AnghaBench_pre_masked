
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int ,int) ;
 int * VAR_2 ;

int
FUNC_3(void)
{
 uint32_t VAR_3;
 int VAR_4 = 10000;

 if (VAR_2 == ((void*)0))
  return (-1);

 VAR_3 = FUNC_1(VAR_2, VAR_0);
 VAR_3 |= VAR_1;
 FUNC_2(VAR_2, VAR_0, VAR_3);

 while (VAR_4-- > 0) {
  VAR_3 = FUNC_1(VAR_2, VAR_0);
  if (VAR_3 & VAR_1)
   FUNC_0(1);
  else
   break;
 }

 if (VAR_4 < 0)
  return (-1);
 else
  return (0);
}
