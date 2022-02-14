
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pqi_event {int pending; } ;
struct TYPE_4__ {struct pqi_event* pending_events; } ;
typedef TYPE_1__ pqisrc_softstate_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_1__*,struct pqi_event*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;

void
FUNC_4(void *VAR_2)
{
 int VAR_3;
 struct pqi_event *VAR_4;
 pqisrc_softstate_t *VAR_5 = (pqisrc_softstate_t*)VAR_2;

 FUNC_1(" IN\n");


 VAR_4 = &VAR_5->pending_events[0];
 for (VAR_3=0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_4->pending == 1) {
   VAR_4->pending = 0;
   FUNC_2(VAR_5, VAR_4);
  }
  VAR_4++;
 }


 if ((FUNC_3(VAR_5)) != VAR_1) {
   FUNC_0(" Failed to Re-Scan devices\n ");
 }
 FUNC_1(" OUT\n");

}
