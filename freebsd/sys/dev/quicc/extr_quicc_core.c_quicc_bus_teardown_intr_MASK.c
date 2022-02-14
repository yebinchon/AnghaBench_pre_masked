
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct quicc_device {void* qd_ih; int * qd_ih_arg; } ;
typedef scalar_t__ device_t ;


 int VAR_0 ;
 struct quicc_device* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

int
FUNC_2(device_t VAR_1, device_t VAR_2, struct resource *VAR_3,
    void *VAR_4)
{
 struct quicc_device *VAR_5;

 if (FUNC_1(VAR_2) != VAR_1)
  return (VAR_0);

 VAR_5 = FUNC_0(VAR_2);
 if (VAR_5->qd_ih != VAR_4)
  return (VAR_0);

 VAR_5->qd_ih = ((void*)0);
 VAR_5->qd_ih_arg = ((void*)0);
 return (0);
}
