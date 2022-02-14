
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_service_registry {int dummy; } ;
struct bhndb_softc {struct bhnd_service_registry services; } ;
typedef int device_t ;


 struct bhndb_softc* FUNC_0 (int ) ;

__attribute__((used)) static struct bhnd_service_registry *
FUNC_1(device_t VAR_0, device_t VAR_1)
{
 struct bhndb_softc *VAR_2 = FUNC_0(VAR_0);

 return (&VAR_2->services);
}
