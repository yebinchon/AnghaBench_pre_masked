
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * ifap; } ;
typedef TYPE_1__ ifconfig_handle_t ;


 int FUNC_0 (int **) ;

int
FUNC_1(ifconfig_handle_t *VAR_0)
{
 int VAR_1;

 if (VAR_0->ifap == ((void*)0)) {
  VAR_1 = FUNC_0(&VAR_0->ifap);
  return (VAR_1);
 } else {
  return (0);
 }
}
