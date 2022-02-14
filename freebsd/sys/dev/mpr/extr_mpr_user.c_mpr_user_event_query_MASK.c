
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct mpr_softc {int * events_to_record; } ;
struct TYPE_3__ {int * Types; int Entries; } ;
typedef TYPE_1__ mpr_event_query_t ;


 int VAR_0 ;
 int FUNC_0 (struct mpr_softc*) ;
 int FUNC_1 (struct mpr_softc*) ;

__attribute__((used)) static void
FUNC_2(struct mpr_softc *VAR_1, mpr_event_query_t *VAR_2)
{
 uint8_t VAR_3;

 FUNC_0(VAR_1);
 VAR_2->Entries = VAR_0;

 for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
  VAR_2->Types[VAR_3] = VAR_1->events_to_record[VAR_3];
 }
 FUNC_1(VAR_1);
}
