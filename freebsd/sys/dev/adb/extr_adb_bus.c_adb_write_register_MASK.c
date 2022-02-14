
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct adb_softc {int sc_dev; } ;
struct adb_devinfo {int address; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int ,int ,int ,int ,size_t,int *,int *) ;
 struct adb_devinfo* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct adb_softc* FUNC_3 (int ) ;

size_t
FUNC_4(device_t VAR_2, u_char VAR_3, size_t VAR_4, void *VAR_5)
{
 struct adb_softc *VAR_6;
 struct adb_devinfo *VAR_7;
 size_t VAR_8;

 VAR_7 = FUNC_1(VAR_2);
 VAR_6 = FUNC_3(FUNC_2(VAR_2));

 VAR_8 = FUNC_0(VAR_6->sc_dev,VAR_7->address,
     VAR_0, VAR_3, VAR_4, (u_char *)VAR_5, ((void*)0));

 VAR_8 = FUNC_0(VAR_6->sc_dev,VAR_7->address,
            VAR_1, VAR_3, 0, ((void*)0), ((void*)0));

 return (VAR_8);
}
