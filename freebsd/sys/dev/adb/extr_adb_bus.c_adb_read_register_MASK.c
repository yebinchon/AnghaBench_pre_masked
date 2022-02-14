
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct adb_softc {int sc_dev; } ;
struct adb_devinfo {int address; } ;
typedef int device_t ;


 int VAR_0 ;
 size_t FUNC_0 (int ,int ,int ,int ,int ,int *,void*) ;
 struct adb_devinfo* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct adb_softc* FUNC_3 (int ) ;

size_t
FUNC_4(device_t VAR_1, u_char VAR_2, void *VAR_3)
{
 struct adb_softc *VAR_4;
 struct adb_devinfo *VAR_5;
 size_t VAR_6;

 VAR_5 = FUNC_1(VAR_1);
 VAR_4 = FUNC_3(FUNC_2(VAR_1));

 VAR_6 = FUNC_0(VAR_4->sc_dev,VAR_5->address,
            VAR_0, VAR_2, 0, ((void*)0), VAR_3);

 return (VAR_6);
}
