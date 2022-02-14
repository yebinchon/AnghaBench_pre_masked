
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int port_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

void FUNC_3 (port_t VAR_0, int VAR_1)
{
 port_t VAR_2 = FUNC_0(VAR_0);
 int VAR_3;


 for (VAR_3=0; FUNC_1(VAR_2) && VAR_3<20000; ++VAR_3)
  continue;


 FUNC_2 (VAR_2, VAR_1);


 for (VAR_3=0; FUNC_1(VAR_2) && VAR_3<20000; ++VAR_3)
  continue;
}
