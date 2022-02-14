
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int created; int q_id; } ;
struct TYPE_7__ {int event_q_dma_mem; TYPE_1__ event_q; } ;
typedef TYPE_2__ pqisrc_softstate_t ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;

void FUNC_4(pqisrc_softstate_t *VAR_1)
{
 FUNC_1("IN\n");

 if (VAR_1->event_q.created == 1) {
  int VAR_2 = VAR_0;
  VAR_2 = FUNC_3(VAR_1, VAR_1->event_q.q_id, 0);
  if (VAR_2) {
   FUNC_0("Failed to Delete Event Q %d\n", VAR_1->event_q.q_id);
  }
  VAR_1->event_q.created = 0;
 }


 FUNC_2(VAR_1, &VAR_1->event_q_dma_mem);

 FUNC_1("OUT\n");
}
