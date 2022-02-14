
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
typedef int sgt_t ;
struct TYPE_4__ {int max_iq_elem_len; int max_oq_elem_len; int max_iq_elements; int max_oq_elements; } ;
struct TYPE_5__ {int intr_count; int num_cpus_online; int num_op_obq; int share_opq_and_eventq; int num_op_raid_ibq; int num_op_aio_ibq; int ibq_elem_size; int obq_elem_size; int max_ib_iu_length_per_fw; int max_ib_iu_length; int max_outstanding_io; int num_elem_per_op_ibq; int num_elem_per_op_obq; int max_sg_per_iu; TYPE_1__ pqi_dev_cap; scalar_t__ ob_spanning_supported; } ;
typedef TYPE_2__ pqisrc_softstate_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,...) ;
 int VAR_0 ;
 int FUNC_2 (int,int) ;

void FUNC_3(pqisrc_softstate_t *VAR_1)
{
 uint16_t VAR_2;

 FUNC_0("IN\n");

 FUNC_1("softs->intr_count : %d  softs->num_cpus_online : %d",
  VAR_1->intr_count, VAR_1->num_cpus_online);

 if (VAR_1->intr_count == 1 || VAR_1->num_cpus_online == 1) {

  VAR_1->num_op_obq = 1;
  VAR_1->share_opq_and_eventq = 1;
 }
 else {

  VAR_1->num_op_obq = FUNC_2(VAR_1->num_cpus_online,
     VAR_1->intr_count) - 1;
  VAR_1->num_op_obq = VAR_1->intr_count - 1;
  VAR_1->share_opq_and_eventq = 0;
 }





 if (VAR_1->intr_count > 1)
  VAR_1->share_opq_and_eventq = 0;

 FUNC_1("softs->num_op_obq : %d\n",VAR_1->num_op_obq);

 VAR_1->num_op_raid_ibq = VAR_1->num_op_obq;
 VAR_1->num_op_aio_ibq = VAR_1->num_op_raid_ibq;
 VAR_1->ibq_elem_size = VAR_1->pqi_dev_cap.max_iq_elem_len * 16;
 VAR_1->obq_elem_size = VAR_1->pqi_dev_cap.max_oq_elem_len * 16;
 if (VAR_1->max_ib_iu_length_per_fw == 256 &&
     VAR_1->ob_spanning_supported) {

  VAR_1->max_ib_iu_length = VAR_1->ibq_elem_size;
 } else {

  VAR_1->max_ib_iu_length =
   (VAR_1->max_ib_iu_length_per_fw / VAR_1->ibq_elem_size) *
    VAR_1->ibq_elem_size;

 }



 VAR_2 = (VAR_1->max_outstanding_io *
  (VAR_1->max_ib_iu_length / VAR_1->ibq_elem_size));

 VAR_1->num_elem_per_op_ibq = VAR_2 / VAR_1->num_op_raid_ibq;
 VAR_1->num_elem_per_op_ibq = FUNC_2(VAR_1->num_elem_per_op_ibq,
  VAR_1->pqi_dev_cap.max_iq_elements);

 VAR_1->num_elem_per_op_obq = VAR_1->max_outstanding_io / VAR_1->num_op_obq;
 VAR_1->num_elem_per_op_obq = FUNC_2(VAR_1->num_elem_per_op_obq,
  VAR_1->pqi_dev_cap.max_oq_elements);

 VAR_1->max_sg_per_iu = ((VAR_1->max_ib_iu_length -
    VAR_1->ibq_elem_size) /
    sizeof(sgt_t)) +
    VAR_0;

 FUNC_1("softs->max_ib_iu_length: %d\n", VAR_1->max_ib_iu_length);
 FUNC_1("softs->num_elem_per_op_ibq: %d\n", VAR_1->num_elem_per_op_ibq);
 FUNC_1("softs->num_elem_per_op_obq: %d\n", VAR_1->num_elem_per_op_obq);
 FUNC_1("softs->max_sg_per_iu: %d\n", VAR_1->max_sg_per_iu);

 FUNC_0("OUT\n");
}
