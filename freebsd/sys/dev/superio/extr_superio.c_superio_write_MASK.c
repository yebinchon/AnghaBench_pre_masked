
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct superio_devinfo {int ldn; } ;
struct siosc {int dummy; } ;
typedef int device_t ;


 struct superio_devinfo* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct siosc* FUNC_2 (int ) ;
 int FUNC_3 (struct siosc*) ;
 int FUNC_4 (struct siosc*) ;
 int FUNC_5 (struct siosc*,int ,int ,int ) ;

void
FUNC_6(device_t VAR_0, uint8_t VAR_1, uint8_t VAR_2)
{
 device_t VAR_3 = FUNC_1(VAR_0);
 struct siosc *VAR_4 = FUNC_2(VAR_3);
 struct superio_devinfo *VAR_5 = FUNC_0(VAR_0);

 FUNC_3(VAR_4);
 FUNC_5(VAR_4, VAR_5->ldn, VAR_1, VAR_2);
 FUNC_4(VAR_4);
}
