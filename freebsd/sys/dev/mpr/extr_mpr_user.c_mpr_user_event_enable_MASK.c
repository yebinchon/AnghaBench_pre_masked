
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct mpr_softc {int * events_to_record; } ;
struct TYPE_3__ {int * Types; } ;
typedef TYPE_1__ mpr_event_enable_t ;


 int FUNC_0 (struct mpr_softc*) ;
 int FUNC_1 (struct mpr_softc*) ;

__attribute__((used)) static void
FUNC_2(struct mpr_softc *VAR_0, mpr_event_enable_t *VAR_1)
{
 uint8_t VAR_2;

 FUNC_0(VAR_0);
 for (VAR_2 = 0; VAR_2 < 4; VAR_2++) {
  VAR_0->events_to_record[VAR_2] = VAR_1->Types[VAR_2];
 }
 FUNC_1(VAR_0);
}
