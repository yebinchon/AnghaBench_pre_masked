
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_int ;
typedef int u_char ;
struct adb_softc {int autopoll_mask; int parent; } ;
struct adb_devinfo {int address; } ;
typedef int device_t ;


 int FUNC_0 (int ,int) ;
 struct adb_devinfo* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct adb_softc* FUNC_3 (int ) ;

u_int
FUNC_4(device_t VAR_0, u_char VAR_1)
{
 struct adb_devinfo *VAR_2;
 struct adb_softc *VAR_3;
 uint16_t VAR_4 = 0;

 VAR_3 = FUNC_3(FUNC_2(VAR_0));
 VAR_2 = FUNC_1(VAR_0);

 VAR_4 = VAR_1 << VAR_2->address;
 if (VAR_1) {
  VAR_3->autopoll_mask |= VAR_4;
 } else {
  VAR_4 = ~VAR_4;
  VAR_3->autopoll_mask &= VAR_4;
 }

 FUNC_0(VAR_3->parent,VAR_3->autopoll_mask);

 return (0);
}
