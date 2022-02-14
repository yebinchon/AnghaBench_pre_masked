
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agp_softc {int as_state; } ;
typedef enum agp_acquire_state { ____Placeholder_agp_acquire_state } agp_acquire_state ;
typedef int device_t ;


 struct agp_softc* FUNC_0 (int ) ;

enum agp_acquire_state
FUNC_1(device_t VAR_0)
{
 struct agp_softc *VAR_1 = FUNC_0(VAR_0);
 return VAR_1->as_state;
}
