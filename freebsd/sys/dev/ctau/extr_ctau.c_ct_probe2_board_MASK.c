
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int port_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_3 ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5 (port_t VAR_4)
{
 unsigned char VAR_5, VAR_6;
 int VAR_7;

 if (! FUNC_4 (VAR_4, VAR_3))
  return 0;

 VAR_6 = FUNC_2 (FUNC_1(VAR_4));
 if ((VAR_6 & (VAR_0 | VAR_1)) != VAR_0 &&
     (VAR_6 & (VAR_0 | VAR_1)) != VAR_1)
  return (0);
 for (VAR_7=0; VAR_7<100; ++VAR_7) {

  VAR_5 = FUNC_2 (FUNC_1(VAR_4));
  VAR_5 = FUNC_2 (FUNC_1(VAR_4));
  if (((VAR_5 ^ VAR_6) & (VAR_0 | VAR_1 | VAR_2)) !=
      (VAR_0 | VAR_1))
   return (0);
  VAR_6 = VAR_5;
 }

 FUNC_3 (FUNC_0(VAR_4), 0);
 return 1;
}
