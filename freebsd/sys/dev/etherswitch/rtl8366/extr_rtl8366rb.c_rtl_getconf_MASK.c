
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vlan_mode; int cmd; } ;
typedef TYPE_1__ etherswitch_conf_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(device_t VAR_2, etherswitch_conf_t *VAR_3)
{


 VAR_3->cmd = VAR_0;
 VAR_3->vlan_mode = VAR_1;

 return (0);
}
