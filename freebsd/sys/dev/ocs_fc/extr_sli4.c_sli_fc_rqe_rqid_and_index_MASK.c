
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_7__ {int os; } ;
typedef TYPE_1__ sli4_t ;
struct TYPE_8__ {scalar_t__ status; int rpi; int xri; int agxr; int oox; int header_data_placement_length; int payload_data_placement_length; int rq_element_index; int rq_id; } ;
typedef TYPE_2__ sli4_fc_optimized_write_cmd_cqe_t ;
struct TYPE_9__ {scalar_t__ status; int sequence_reporting_placement_length; int rq_id; int rq_element_index; } ;
typedef TYPE_3__ sli4_fc_coalescing_rcqe_t ;
struct TYPE_10__ {scalar_t__ status; int header_data_placement_length; int eof_byte; int sof_byte; int payload_data_placement_length; int rq_element_index; int rq_id; } ;
typedef TYPE_4__ sli4_fc_async_rcqe_v1_t ;
struct TYPE_11__ {scalar_t__ status; int header_data_placement_length; int eof_byte; int sof_byte; int payload_data_placement_length; int rq_element_index; int rq_id; } ;
typedef TYPE_5__ sli4_fc_async_rcqe_t ;
typedef int int32_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,char*,int,int ,int ,int ,int ,int ,...) ;
 int FUNC_2 (int) ;

int32_t
FUNC_3(sli4_t *VAR_8, uint8_t *VAR_9, uint16_t *VAR_10, uint32_t *VAR_11)
{
 sli4_fc_async_rcqe_t *VAR_12 = (void *)VAR_9;
 sli4_fc_async_rcqe_v1_t *VAR_13 = (void *)VAR_9;
 int32_t VAR_14 = -1;
 uint8_t VAR_15 = 0;

 *VAR_10 = 0;
 *VAR_11 = VAR_7;

 VAR_15 = VAR_9[VAR_0];

 if (VAR_15 == VAR_2) {
  *VAR_10 = VAR_12->rq_id;
  if (VAR_5 == VAR_12->status) {
   *VAR_11 = VAR_12->rq_element_index;
   VAR_14 = 0;
  } else {
   *VAR_11 = VAR_12->rq_element_index;
   VAR_14 = VAR_12->status;
   FUNC_1(VAR_8->os, "status=%02x (%s) rq_id=%d, index=%x pdpl=%x sof=%02x eof=%02x hdpl=%x\n",
    VAR_12->status, FUNC_2(VAR_12->status), VAR_12->rq_id,
    VAR_12->rq_element_index, VAR_12->payload_data_placement_length, VAR_12->sof_byte,
    VAR_12->eof_byte, VAR_12->header_data_placement_length);
  }
 } else if (VAR_15 == VAR_3) {
  *VAR_10 = VAR_13->rq_id;
  if (VAR_5 == VAR_13->status) {
   *VAR_11 = VAR_13->rq_element_index;
   VAR_14 = 0;
  } else {
   *VAR_11 = VAR_13->rq_element_index;
   VAR_14 = VAR_13->status;
   FUNC_1(VAR_8->os, "status=%02x (%s) rq_id=%d, index=%x pdpl=%x sof=%02x eof=%02x hdpl=%x\n",
    VAR_13->status, FUNC_2(VAR_13->status),
    VAR_13->rq_id, VAR_13->rq_element_index,
    VAR_13->payload_data_placement_length, VAR_13->sof_byte,
    VAR_13->eof_byte, VAR_13->header_data_placement_length);
  }
 } else if (VAR_15 == VAR_1) {
  sli4_fc_optimized_write_cmd_cqe_t *VAR_16 = (void *)VAR_9;

  *VAR_10 = VAR_16->rq_id;
  if (VAR_5 == VAR_16->status) {
   *VAR_11 = VAR_16->rq_element_index;
   VAR_14 = 0;
  } else {
   *VAR_11 = VAR_16->rq_element_index;
   VAR_14 = VAR_16->status;
   FUNC_1(VAR_8->os, "status=%02x (%s) rq_id=%d, index=%x pdpl=%x hdpl=%x oox=%d agxr=%d xri=0x%x rpi=0x%x\n",
    VAR_16->status, FUNC_2(VAR_16->status), VAR_16->rq_id,
    VAR_16->rq_element_index, VAR_16->payload_data_placement_length,
    VAR_16->header_data_placement_length, VAR_16->oox, VAR_16->agxr, VAR_16->xri,
    VAR_16->rpi);
  }
 } else if (VAR_15 == VAR_4) {
  sli4_fc_coalescing_rcqe_t *VAR_17 = (void *)VAR_9;

  *VAR_10 = VAR_17->rq_id;
  if (VAR_6 == VAR_17->status) {
   *VAR_11 = VAR_17->rq_element_index;
   VAR_14 = 0;
  } else {
   *VAR_11 = VAR_7;
   VAR_14 = VAR_17->status;

   FUNC_1(VAR_8->os, "status=%02x (%s) rq_id=%d, index=%x rq_id=%#x sdpl=%x\n",
    VAR_17->status, FUNC_2(VAR_17->status), VAR_17->rq_id,
    VAR_17->rq_element_index, VAR_17->rq_id, VAR_17->sequence_reporting_placement_length);
  }
 } else {
  *VAR_11 = VAR_7;

  VAR_14 = VAR_12->status;

  FUNC_0(VAR_8->os, "status=%02x rq_id=%d, index=%x pdpl=%x sof=%02x eof=%02x hdpl=%x\n",
   VAR_12->status, VAR_12->rq_id, VAR_12->rq_element_index, VAR_12->payload_data_placement_length,
   VAR_12->sof_byte, VAR_12->eof_byte, VAR_12->header_data_placement_length);
 }

 return VAR_14;
}
