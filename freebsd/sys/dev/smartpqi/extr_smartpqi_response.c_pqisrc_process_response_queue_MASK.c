
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_13__ {int iu_type; } ;
struct pqi_io_response {size_t request_id; TYPE_1__ header; int error_index; } ;
struct TYPE_14__ {size_t tag; int req_pending; int status; int (* error_cmp_callback ) (TYPE_3__*,TYPE_2__*,int ) ;int (* success_cmp_callback ) (TYPE_3__*,TYPE_2__*) ;} ;
typedef TYPE_2__ rcb_t ;
struct TYPE_15__ {TYPE_2__* rcb; TYPE_4__* op_ob_q; } ;
typedef TYPE_3__ pqisrc_softstate_t ;
struct TYPE_16__ {size_t ci_local; size_t* pi_virt_addr; size_t elem_size; size_t num_elem; int ci_register_offset; int ci_register_abs; scalar_t__ array_virt_addr; int q_id; } ;
typedef TYPE_4__ ob_queue_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (TYPE_3__*,int ,int ,size_t) ;






 int VAR_0 ;
 int FUNC_7 (TYPE_3__*,void*) ;
 int FUNC_8 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_9 (TYPE_3__*,TYPE_2__*,int ) ;

void
FUNC_10(pqisrc_softstate_t *VAR_1, int VAR_2)
{
 ob_queue_t *VAR_3;
 struct pqi_io_response *VAR_4;
 uint32_t VAR_5, VAR_6;

 FUNC_2("IN");

 FUNC_5(VAR_1, VAR_0);

 VAR_3 = &VAR_1->op_ob_q[VAR_2 - 1];
 VAR_6 = VAR_3->ci_local;
 VAR_5 = *(VAR_3->pi_virt_addr);

 FUNC_3("ci : %d pi : %d qid : %d\n", VAR_6, VAR_5, VAR_3->q_id);

 while (1) {
  rcb_t *VAR_7 = ((void*)0);
  uint32_t VAR_8 = 0;
  uint32_t VAR_9;

  if (VAR_5 == VAR_6)
   break;

  VAR_9 = VAR_6 * VAR_3->elem_size;
  VAR_4 = (struct pqi_io_response *)(VAR_3->array_virt_addr +
       VAR_9);
  VAR_8 = VAR_4->request_id;
  VAR_7 = &VAR_1->rcb[VAR_8];

  FUNC_0(VAR_7->tag == VAR_8 && VAR_7->req_pending);
  VAR_7->req_pending = 0;

  FUNC_3("response.header.iu_type : %x \n", VAR_4->header.iu_type);

  switch (VAR_4->header.iu_type) {
  case 129:
  case 132:
   VAR_7->success_cmp_callback(VAR_1, VAR_7);
   break;
  case 130:
  case 133:
   VAR_7->error_cmp_callback(VAR_1, VAR_7, FUNC_4(VAR_4->error_index));
   break;
  case 131:
   VAR_7->req_pending = 0;
   break;
  case 128:
   VAR_7->status = FUNC_7(VAR_1, (void *)VAR_4);
   break;

  default:
   FUNC_1("Invalid Response IU 0x%x\n",VAR_4->header.iu_type);
   break;
  }

  VAR_6 = (VAR_6 + 1) % VAR_3->num_elem;
 }

 VAR_3->ci_local = VAR_6;
 FUNC_6(VAR_1, VAR_3->ci_register_abs,
        VAR_3->ci_register_offset, VAR_3->ci_local );
 FUNC_2("OUT");
}
