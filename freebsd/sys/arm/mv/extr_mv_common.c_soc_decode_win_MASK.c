
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int *,int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_7 () ;

int
FUNC_8(void)
{
 uint32_t VAR_5, VAR_6;
 int VAR_7, VAR_8;

 VAR_7 = 0;
 FUNC_0("hw.pm-disable-mask", &VAR_7);

 if (VAR_7 != 0)
  FUNC_4(VAR_7);


 if ((VAR_8 = FUNC_7()) != 0)
  return (VAR_8);


 FUNC_6(&VAR_5, &VAR_6);

 if (VAR_3 == VAR_1)
  if ((VAR_8 = FUNC_2()) != 0)
   return(VAR_8);


 FUNC_1();
 if (VAR_0)
  FUNC_5();

 VAR_2 = 0;
 VAR_4 = 0;
 if ((VAR_8 = FUNC_3()) != 0)
  return (VAR_8);

 return (0);
}
