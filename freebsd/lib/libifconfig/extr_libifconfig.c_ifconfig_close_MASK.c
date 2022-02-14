
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* sockets; int ifap; } ;
typedef TYPE_1__ ifconfig_handle_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

void
FUNC_3(ifconfig_handle_t *VAR_1)
{

 for (int VAR_2 = 0; VAR_2 <= VAR_0; VAR_2++) {
  if (VAR_1->sockets[VAR_2] != -1) {
   (void)FUNC_0(VAR_1->sockets[VAR_2]);
  }
 }
 FUNC_2(VAR_1->ifap);
 FUNC_1(VAR_1);
}
