
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
typedef int u_char ;
struct adb_softc {int sc_dev; } ;
struct adb_devinfo {int register3; scalar_t__ handler_id; int address; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int,int,int *,int *) ;
 struct adb_devinfo* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct adb_softc* FUNC_3 (int ) ;

uint8_t
FUNC_4(device_t VAR_2, uint8_t VAR_3)
{
 struct adb_softc *VAR_4;
 struct adb_devinfo *VAR_5;
 uint16_t VAR_6;

 VAR_5 = FUNC_1(VAR_2);
 VAR_4 = FUNC_3(FUNC_2(VAR_2));

 VAR_6 = VAR_5->register3 & 0xff00;
 VAR_6 |= (uint16_t)(VAR_3);

 FUNC_0(VAR_4->sc_dev,VAR_5->address, VAR_0,
     3, sizeof(uint16_t), (u_char *)(&VAR_6), ((void*)0));
 FUNC_0(VAR_4->sc_dev,VAR_5->address,
     VAR_1, 3, 0, ((void*)0), ((void*)0));

 return (VAR_5->handler_id);
}
