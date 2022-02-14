
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct mpr_softc {scalar_t__ recorded_events; } ;
struct TYPE_3__ {int Size; int PtrEvents; } ;
typedef TYPE_1__ mpr_event_report_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (void*,int ,int) ;
 int FUNC_2 (struct mpr_softc*) ;
 int FUNC_3 (struct mpr_softc*) ;

__attribute__((used)) static int
FUNC_4(struct mpr_softc *VAR_1, mpr_event_report_t *VAR_2)
{
 int VAR_3 = 0;
 uint32_t VAR_4;

 FUNC_2(VAR_1);
 VAR_4 = VAR_2->Size;
 if ((VAR_4 >= sizeof(VAR_1->recorded_events)) && (VAR_3 == 0)) {
  FUNC_3(VAR_1);
  if (FUNC_1((void *)VAR_1->recorded_events,
      FUNC_0(VAR_2->PtrEvents), VAR_4) != 0)
   VAR_3 = VAR_0;
  FUNC_2(VAR_1);
 } else {



  VAR_3 = VAR_0;
 }




 if (VAR_3 == 0)
  VAR_2->Size = sizeof(VAR_1->recorded_events);
 FUNC_3(VAR_1);

 return (VAR_3);
}
