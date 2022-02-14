
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int port_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3 (port_t VAR_1)
{
 int VAR_2;


 for (VAR_2=0; VAR_2<20000; ++VAR_2)
  if (FUNC_2(FUNC_0(VAR_1)) != 0)
   break;

 FUNC_1 (VAR_1, VAR_0);



 for (VAR_2=0; VAR_2<20000; ++VAR_2)
  if (FUNC_2(FUNC_0(VAR_1)) != 0)
   return (1);


 return (0);
}
