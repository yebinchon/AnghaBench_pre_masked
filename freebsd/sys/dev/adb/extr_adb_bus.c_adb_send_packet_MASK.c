
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct adb_softc {int parent; } ;
struct adb_devinfo {int address; } ;
typedef int device_t ;


 int FUNC_0 (int ,int,int,int*,int) ;
 struct adb_devinfo* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct adb_softc* FUNC_3 (int ) ;

u_int
FUNC_4(device_t VAR_0, u_char VAR_1, u_char VAR_2, int VAR_3, u_char *VAR_4)
{
 u_char VAR_5 = 0;
 struct adb_devinfo *VAR_6;
 struct adb_softc *VAR_7;

 VAR_7 = FUNC_3(FUNC_2(VAR_0));
 VAR_6 = FUNC_1(VAR_0);

 VAR_5 |= VAR_6->address << 4;
 VAR_5 |= VAR_1 << 2;
 VAR_5 |= VAR_2;

 FUNC_0(VAR_7->parent, VAR_5, VAR_3, VAR_4, 1);

 return (0);
}
