
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* sockets; } ;
typedef TYPE_1__ ifconfig_handle_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,int) ;

ifconfig_handle_t *
FUNC_1(void)
{
 ifconfig_handle_t *VAR_1;

 VAR_1 = FUNC_0(1, sizeof(*VAR_1));

 if (VAR_1 == ((void*)0)) {
  return (((void*)0));
 }
 for (int VAR_2 = 0; VAR_2 <= VAR_0; VAR_2++) {
  VAR_1->sockets[VAR_2] = -1;
 }

 return (VAR_1);
}
