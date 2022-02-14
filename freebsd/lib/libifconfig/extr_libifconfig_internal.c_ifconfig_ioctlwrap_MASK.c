
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned long ioctl_request; int errcode; int errtype; } ;
struct TYPE_6__ {TYPE_1__ error; } ;
typedef TYPE_2__ ifconfig_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int const,int*) ;
 scalar_t__ FUNC_1 (int,unsigned long,void*) ;

int
FUNC_2(ifconfig_handle_t *VAR_2, const int VAR_3,
    unsigned long VAR_4, void *VAR_5)
{
 int VAR_6;

 if (FUNC_0(VAR_2, VAR_3, &VAR_6) != 0) {
  return (-1);
 }

 if (FUNC_1(VAR_6, VAR_4, VAR_5) != 0) {
  VAR_2->error.errtype = VAR_0;
  VAR_2->error.ioctl_request = VAR_4;
  VAR_2->error.errcode = VAR_1;
  return (-1);
 }

 return (0);
}
