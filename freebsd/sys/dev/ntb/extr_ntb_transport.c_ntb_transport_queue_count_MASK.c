
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_transport_child {int qpcnt; } ;
typedef int device_t ;


 struct ntb_transport_child* FUNC_0 (int ) ;

int
FUNC_1(device_t VAR_0)
{
 struct ntb_transport_child *VAR_1 = FUNC_0(VAR_0);

 return (VAR_1->qpcnt);
}
