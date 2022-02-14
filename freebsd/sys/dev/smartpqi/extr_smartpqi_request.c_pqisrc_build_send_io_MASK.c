
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_21__ {int req_pending; int * cdbp; int ioaccel_handle; TYPE_3__* dvp; } ;
typedef TYPE_1__ rcb_t ;
struct TYPE_22__ {int num_op_aio_ibq; int num_op_raid_ibq; TYPE_4__* op_raid_ib_q; TYPE_4__* op_aio_ib_q; } ;
typedef TYPE_2__ pqisrc_softstate_t ;
typedef int pqisrc_raid_req_t ;
struct TYPE_23__ {scalar_t__ offload_enabled; int ioaccel_handle; } ;
typedef TYPE_3__ pqi_scsi_dev_t ;
typedef int pqi_aio_req_t ;
struct TYPE_24__ {int pi_local; int* ci_virt_addr; int num_elem; char* array_virt_addr; int elem_size; int lock; int pi_register_offset; int pi_register_abs; } ;
typedef TYPE_4__ ib_queue_t ;
typedef scalar_t__ IO_PATH_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int * FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_2__*,int ,int ,int) ;
 int FUNC_9 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_10 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_11 (TYPE_2__*,TYPE_1__*,int *,int) ;
 int FUNC_12 (TYPE_2__*,TYPE_1__*,int *,int) ;
 int FUNC_13 (int,int,int) ;
 int FUNC_14 (TYPE_2__*,int ) ;
 int FUNC_15 (TYPE_2__*,TYPE_3__*,TYPE_1__*,int *) ;

int FUNC_16(pqisrc_softstate_t *VAR_5,rcb_t *VAR_6)
{
 ib_queue_t *VAR_7 = VAR_5->op_aio_ib_q;
 ib_queue_t *VAR_8 = ((void*)0);
 char *VAR_9 = ((void*)0);
 IO_PATH_T VAR_10 = VAR_0;
 uint32_t VAR_11 = 0;
 int VAR_12 = FUNC_6(VAR_5, VAR_6);
 int VAR_13 = VAR_12;
 uint32_t VAR_14 = VAR_5->num_op_aio_ibq;
 uint32_t VAR_15;
 uint32_t VAR_16 = 0;
 pqi_scsi_dev_t *VAR_17 = VAR_6->dvp;
 uint8_t VAR_18[16];

 FUNC_0(" IN ");


 VAR_6->cdbp = FUNC_5(VAR_6);

 if(FUNC_4(VAR_17)) {


  VAR_6->ioaccel_handle = VAR_17->ioaccel_handle;
 } else {
  int VAR_19 = VAR_1;

  if (VAR_17->offload_enabled) {

   VAR_19 = FUNC_15(VAR_5,
    VAR_17, VAR_6, VAR_18);
  }

  if (VAR_1 == VAR_19) {

   VAR_10 = VAR_4;
   VAR_14 = VAR_5->num_op_raid_ibq;
   VAR_7 = VAR_5->op_raid_ib_q;
  } else {
   VAR_6->cdbp = VAR_18;
  }
 }

 VAR_15 = FUNC_14(VAR_5, FUNC_7(VAR_6));
 FUNC_2("num_elem_needed :%d",VAR_15);

 do {
  uint32_t VAR_20;
  VAR_8 = (VAR_7 + VAR_13);
  FUNC_9(&VAR_8->lock);
  VAR_20 = FUNC_13(VAR_8->pi_local,
     *(VAR_8->ci_virt_addr), VAR_8->num_elem);

  FUNC_2("num_elem_avialable :%d\n",VAR_20);
  if(VAR_20 >= VAR_15) {
   VAR_16 = VAR_15;
   break;
  }
  FUNC_2("Current queue is busy! Hop to next queue\n");

  FUNC_10(&VAR_8->lock);
  VAR_13 = (VAR_13 + 1) % VAR_14;
  if(VAR_13 == VAR_12) {
   if (VAR_15 == 1)
    break;
   VAR_11 += 1;
   VAR_15 = 1;
  }
 }while(VAR_11 < 2);

 FUNC_2("num_elem_alloted :%d",VAR_16);
 if (VAR_16 == 0) {
  FUNC_3("OUT: IB Queues were full\n");
  return VAR_2;
 }


 VAR_9 = VAR_8->array_virt_addr + (VAR_8->pi_local * VAR_8->elem_size);

 if(VAR_10 == VAR_0) {

   FUNC_11(VAR_5, VAR_6, (pqi_aio_req_t*)VAR_9,
    VAR_16);
 } else {

  FUNC_12(VAR_5, VAR_6, (pqisrc_raid_req_t*)VAR_9,
   VAR_16);
 }

 VAR_6->req_pending = 1;


 VAR_8->pi_local = (VAR_8->pi_local + VAR_16) % VAR_8->num_elem;

 FUNC_1("ib_q->pi_local : %x\n", VAR_8->pi_local);
 FUNC_1("*ib_q->ci_virt_addr: %x\n",*(VAR_8->ci_virt_addr));


 FUNC_8(VAR_5, VAR_8->pi_register_abs, VAR_8->pi_register_offset, VAR_8->pi_local);

 FUNC_10(&VAR_8->lock);
 FUNC_0(" OUT ");
 return VAR_3;
}
