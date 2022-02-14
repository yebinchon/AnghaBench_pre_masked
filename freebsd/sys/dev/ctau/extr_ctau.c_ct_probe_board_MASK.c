
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int port_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 unsigned char FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (int ,int ) ;
 int VAR_5 ;
 int FUNC_5 (int,int ) ;

int FUNC_6 (port_t VAR_6, int VAR_7, int VAR_8)
{
 unsigned char VAR_9, VAR_10;
 int VAR_11;

 if (! FUNC_5 (VAR_6, VAR_5))
  return 0;

 if ((VAR_7 > 0) && (!FUNC_5 (VAR_7, VAR_4)))
  return 0;

 if ((VAR_8 > 0) && (!FUNC_5 (VAR_8, VAR_3)))
  return 0;

 VAR_10 = FUNC_3 (FUNC_1(VAR_6));
 if ((VAR_10 & (VAR_0 | VAR_1)) != VAR_0 &&
     (VAR_10 & (VAR_0 | VAR_1)) != VAR_1)
  return (0);
 for (VAR_11=0; VAR_11<100; ++VAR_11) {
  VAR_9 = FUNC_3 (FUNC_1(VAR_6));
  if (((VAR_9 ^ VAR_10) & (VAR_0 | VAR_1 | VAR_2)) !=
      (VAR_0 | VAR_1))
   return FUNC_2 (VAR_6);
  VAR_10 = VAR_9;
 }

 FUNC_4 (FUNC_0(VAR_6), 0);
 return (1);
}
