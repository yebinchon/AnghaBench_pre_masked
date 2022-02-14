
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct superio_devinfo {int ldn; } ;
struct siosc {scalar_t__ vendor; int enable_reg; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 struct superio_devinfo* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct siosc* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

bool
FUNC_4(device_t VAR_1, uint8_t VAR_2)
{
 device_t VAR_3 = FUNC_1(VAR_1);
 struct siosc *VAR_4 = FUNC_2(VAR_3);
 struct superio_devinfo *VAR_5 = FUNC_0(VAR_1);
 uint8_t VAR_6;


 if (VAR_4->vendor == VAR_0 && VAR_5->ldn == 7)
  return (1);

 VAR_6 = FUNC_3(VAR_1, VAR_4->enable_reg);
 return ((VAR_6 & VAR_2) != 0);
}
