
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int port_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6 (port_t VAR_2)
{
 unsigned char VAR_3, VAR_4;
 int VAR_5;

 VAR_4 = FUNC_4 (FUNC_3(VAR_2));
 if ((VAR_4 & (VAR_0 | VAR_1)) != VAR_0 &&
     (VAR_4 & (VAR_0 | VAR_1)) != VAR_1)
  return (0);
 for (VAR_5=0; VAR_5<100; ++VAR_5) {
  VAR_3 = FUNC_4 (FUNC_3(VAR_2));
  if (((VAR_3 ^ VAR_4) & (VAR_0 | VAR_1)) !=
      (VAR_0 | VAR_1))
   return (0);
  VAR_4 = VAR_3;
 }

 FUNC_5 (FUNC_0(VAR_2), 0);
 FUNC_5 (FUNC_1(VAR_2), 0);
 FUNC_5 (FUNC_2(VAR_2), 0);
 return (1);
}
