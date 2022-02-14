
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {void* if_ioctl; } ;
typedef scalar_t__ if_t ;



void
FUNC_0(if_t VAR_0, int (*VAR_1)(if_t, VAR_2, VAR_3))
{
 ((struct ifnet *)VAR_0)->if_ioctl = (void *)VAR_1;
}
