
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int port_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2 (port_t VAR_4)
{
 int VAR_5, VAR_6;


 VAR_5 = FUNC_1 (FUNC_0(VAR_4));
 if ((VAR_5 & VAR_1) != VAR_2 &&
     (VAR_5 & VAR_1) != VAR_3)
  return (0);

 for (VAR_6=2; VAR_6<0x10; VAR_6+=2)
  if ((FUNC_1 (FUNC_0(VAR_4)+VAR_6) & VAR_0) !=
      (VAR_5 & VAR_0))
   return (0);
 return (1);
}
