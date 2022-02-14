
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agp_softc {scalar_t__ as_state; } ;
typedef enum agp_acquire_state { ____Placeholder_agp_acquire_state } agp_acquire_state ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct agp_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_2, enum agp_acquire_state VAR_3)
{
 struct agp_softc *VAR_4 = FUNC_0(VAR_2);

 if (VAR_4->as_state != VAR_0)
  return VAR_1;
 VAR_4->as_state = VAR_3;

 return 0;
}
