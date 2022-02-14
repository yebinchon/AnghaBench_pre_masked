
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int PortNumber; } ;
typedef TYPE_1__ MSG_PORT_ENABLE_REPLY ;
typedef int MSG_DEFAULT_REPLY ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static void
FUNC_2(MSG_PORT_ENABLE_REPLY *VAR_0)
{

 FUNC_0((MSG_DEFAULT_REPLY *)VAR_0);
 FUNC_1("\tPort:         %d\n", VAR_0->PortNumber);
}
