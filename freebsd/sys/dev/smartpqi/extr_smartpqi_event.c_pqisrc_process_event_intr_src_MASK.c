
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct pqi_event {int pending; int additional_event_id; int event_id; int event_type; } ;
struct TYPE_13__ {int ci_local; int* pi_virt_addr; int elem_size; int num_elem; int ci_register_offset; int ci_register_abs; scalar_t__ array_virt_addr; } ;
struct TYPE_11__ {struct pqi_event* pending_events; TYPE_4__ event_q; } ;
typedef TYPE_2__ pqisrc_softstate_t ;
struct TYPE_10__ {int iu_type; } ;
struct TYPE_12__ {int additional_event_id; int event_id; int event_type; scalar_t__ request_acknowledge; TYPE_1__ header; } ;
typedef TYPE_3__ pqi_event_response_t ;
typedef TYPE_4__ ob_queue_t ;
typedef int boolean_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int ,int ,int) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_3__*,scalar_t__,int) ;
 int VAR_1 ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ) ;

int
FUNC_7(pqisrc_softstate_t *VAR_2,int VAR_3)
{
 uint32_t VAR_4,VAR_5;
 pqi_event_response_t VAR_6;
 ob_queue_t *VAR_7;
 struct pqi_event *VAR_8;
 boolean_t VAR_9 = 0;

 FUNC_0(" IN\n");

 FUNC_2(VAR_2, VAR_1);

 VAR_7 = &VAR_2->event_q;
 VAR_5 = VAR_7->ci_local;
 VAR_4 = *(VAR_7->pi_virt_addr);
 FUNC_1("Initial Event_q ci : %d Event_q pi : %d\n", VAR_5, VAR_4);

 while(1) {
  int VAR_10;
  FUNC_1("queue_id : %d ci : %d pi : %d\n",VAR_3, VAR_5, VAR_4);
  if (VAR_4 == VAR_5)
   break;

  VAR_9 = 1;


  FUNC_4(&VAR_6, VAR_7->array_virt_addr + (VAR_5 * VAR_7->elem_size),
     sizeof(pqi_event_response_t));
  FUNC_1("response.header.iu_type : 0x%x \n", VAR_6.header.iu_type);
  FUNC_1("response.event_type : 0x%x \n", VAR_6.event_type);

  VAR_10 = FUNC_6(VAR_6.event_type);

  if (VAR_10 >= 0) {
   if(VAR_6.request_acknowledge) {
    VAR_8 = &VAR_2->pending_events[VAR_10];
    VAR_8->pending = 1;
    VAR_8->event_type = VAR_6.event_type;
    VAR_8->event_id = VAR_6.event_id;
    VAR_8->additional_event_id = VAR_6.additional_event_id;
   }
  }

 VAR_5 = (VAR_5 + 1) % VAR_7->num_elem;
 }

 VAR_7->ci_local = VAR_5;
 FUNC_3(VAR_2, VAR_7->ci_register_abs,
        VAR_7->ci_register_offset, VAR_7->ci_local);


 if (VAR_9 == 1) {
  FUNC_5(VAR_2);
 }

 FUNC_0("OUT");
 return VAR_0;


}
