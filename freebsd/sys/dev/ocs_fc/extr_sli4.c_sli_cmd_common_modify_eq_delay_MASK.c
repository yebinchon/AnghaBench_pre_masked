
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_11__ {scalar_t__ port_type; } ;
typedef TYPE_3__ sli4_t ;
typedef int sli4_res_hdr_t ;
typedef int sli4_req_hdr_t ;
struct TYPE_9__ {int request_length; int subsystem; int opcode; } ;
struct TYPE_12__ {int num_eq; TYPE_2__* eq_delay_record; TYPE_1__ hdr; } ;
typedef TYPE_4__ sli4_req_common_modify_eq_delay_t ;
struct TYPE_13__ {int id; } ;
typedef TYPE_5__ sli4_queue_t ;
typedef int int32_t ;
struct TYPE_10__ {int phase; int delay_multiplier; int eq_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_3__*,void*,size_t,int ,int *) ;

__attribute__((used)) static int32_t
FUNC_2(sli4_t *VAR_3, void *VAR_4, size_t VAR_5, sli4_queue_t *VAR_6, int VAR_7, uint32_t VAR_8,
    uint32_t VAR_9)
{
 sli4_req_common_modify_eq_delay_t *VAR_10 = ((void*)0);
 uint32_t VAR_11 = 0;
 int VAR_12;

 if (VAR_1 == VAR_3->port_type) {
  VAR_11 = FUNC_1(VAR_3, VAR_4, VAR_5,

    FUNC_0(sizeof(sli4_req_common_modify_eq_delay_t), sizeof(sli4_res_hdr_t)),
    ((void*)0));
 }

 VAR_10 = (sli4_req_common_modify_eq_delay_t *)((uint8_t *)VAR_4 + VAR_11);

 VAR_10->hdr.opcode = VAR_0;
 VAR_10->hdr.subsystem = VAR_2;
 VAR_10->hdr.request_length = sizeof(sli4_req_common_modify_eq_delay_t) -
     sizeof(sli4_req_hdr_t);

 VAR_10->num_eq = VAR_7;

 for (VAR_12 = 0; VAR_12<VAR_7; VAR_12++) {
  VAR_10->eq_delay_record[VAR_12].eq_id = VAR_6[VAR_12].id;
  VAR_10->eq_delay_record[VAR_12].phase = VAR_8;
  VAR_10->eq_delay_record[VAR_12].delay_multiplier = VAR_9;
 }

 return(VAR_11 + sizeof(sli4_req_common_modify_eq_delay_t));
}
