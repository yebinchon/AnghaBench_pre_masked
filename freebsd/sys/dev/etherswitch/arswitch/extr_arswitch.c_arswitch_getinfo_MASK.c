
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arswitch_softc {int info; } ;
typedef int etherswitch_info_t ;
typedef int device_t ;


 struct arswitch_softc* FUNC_0 (int ) ;

__attribute__((used)) static etherswitch_info_t *
FUNC_1(device_t VAR_0)
{
 struct arswitch_softc *VAR_1 = FUNC_0(VAR_0);

 return (&VAR_1->info);
}
