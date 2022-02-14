
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_core_info {int dummy; } ;
struct bhndb_softc {struct bhnd_core_info bridge_core; } ;
typedef int device_t ;


 struct bhndb_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_0, device_t VAR_1, struct bhnd_core_info *VAR_2)
{
 struct bhndb_softc *VAR_3 = FUNC_0(VAR_0);

 *VAR_2 = VAR_3->bridge_core;
 return (0);
}
