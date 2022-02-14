
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atheros_driver_data {int iface; int ioctl_sock; } ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_1(void *VAR_0)
{
 struct atheros_driver_data *VAR_1 = VAR_0;
 return FUNC_0(VAR_1->ioctl_sock, VAR_1->iface, 1);
}
