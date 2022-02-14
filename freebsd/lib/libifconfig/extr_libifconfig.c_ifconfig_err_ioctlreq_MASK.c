
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned long ioctl_request; } ;
struct TYPE_5__ {TYPE_1__ error; } ;
typedef TYPE_2__ ifconfig_handle_t ;



unsigned long
FUNC_0(ifconfig_handle_t *VAR_0)
{

 return (VAR_0->error.ioctl_request);
}
