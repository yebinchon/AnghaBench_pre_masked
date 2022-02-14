
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpms_softc {int dpms_initial_state; int dpms_supported_states; } ;
typedef int device_t ;


 struct dpms_softc* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0)
{
 struct dpms_softc *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_0(VAR_0);
 VAR_2 = FUNC_2(&VAR_1->dpms_supported_states);
 if (VAR_2)
  return (VAR_2);
 VAR_2 = FUNC_1(&VAR_1->dpms_initial_state);
 return (VAR_2);
}
