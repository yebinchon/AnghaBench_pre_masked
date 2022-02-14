
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int superio_vendor_t ;
struct siosc {int vendor; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 struct siosc* FUNC_1 (int ) ;

superio_vendor_t
FUNC_2(device_t VAR_0)
{
 device_t VAR_1 = FUNC_0(VAR_0);
 struct siosc *VAR_2 = FUNC_1(VAR_1);

 return (VAR_2->vendor);
}
