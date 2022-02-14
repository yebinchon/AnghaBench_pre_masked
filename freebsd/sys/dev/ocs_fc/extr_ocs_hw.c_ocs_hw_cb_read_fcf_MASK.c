
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef int uint8_t ;
struct TYPE_17__ {int vlan_bitmap; int fabric_name_id; int fcf_mac_address; int fip_priority; int fcf_index; scalar_t__ fc; int sol; scalar_t__ val; } ;
struct TYPE_20__ {scalar_t__ next_index; TYPE_3__ fcf_entry; } ;
typedef TYPE_6__ sli4_res_fcoe_read_fcf_table_t ;
struct TYPE_21__ {scalar_t__ status; } ;
typedef TYPE_7__ sli4_mbox_command_header_t ;
struct TYPE_19__ {int domain; } ;
struct TYPE_18__ {int (* domain ) (int ,int ,TYPE_9__*) ;} ;
struct TYPE_15__ {scalar_t__ topology; int loop_map; int fc_id; int speed; } ;
struct TYPE_22__ {int os; TYPE_5__ args; TYPE_4__ callback; TYPE_1__ link; } ;
typedef TYPE_8__ ocs_hw_t ;
struct TYPE_16__ {int vlan; int loop; } ;
struct TYPE_23__ {void* is_nport; void* is_ethernet; TYPE_2__ map; int wwn; int address; int priority; int index; void* is_loop; void* is_fc; int fc_id; int speed; int member_0; } ;
typedef TYPE_9__ ocs_domain_record_t ;
struct TYPE_14__ {TYPE_6__* virt; } ;
typedef TYPE_10__ ocs_dma_t ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (TYPE_8__*,scalar_t__) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,TYPE_9__*) ;

__attribute__((used)) static int32_t
FUNC_5(ocs_hw_t *VAR_6, int32_t VAR_7, uint8_t *VAR_8, void *VAR_9)
{
 ocs_dma_t *VAR_10 = VAR_9;
 sli4_mbox_command_header_t *VAR_11 = (sli4_mbox_command_header_t *)VAR_8;

 if (VAR_7 || VAR_11->status) {
  FUNC_2(VAR_6->os, "bad status cqe=%#x mqe=%#x\n",
    VAR_7, VAR_11->status);
 } else if (VAR_10->virt) {
  sli4_res_fcoe_read_fcf_table_t *VAR_12 = VAR_10->virt;


  if (VAR_12->fcf_entry.fc ||
    (VAR_12->fcf_entry.val && !VAR_12->fcf_entry.sol)) {
   if (VAR_6->callback.domain != ((void*)0)) {
    ocs_domain_record_t VAR_13 = {0};

    if (VAR_12->fcf_entry.fc) {




     VAR_13.speed = VAR_6->link.speed;
     VAR_13.fc_id = VAR_6->link.fc_id;
     VAR_13.is_fc = VAR_5;
     if (VAR_3 == VAR_6->link.topology) {
      VAR_13.is_loop = VAR_5;
      FUNC_3(VAR_13.map.loop, VAR_6->link.loop_map,
          sizeof(VAR_13.map.loop));
     } else if (VAR_4 == VAR_6->link.topology) {
      VAR_13.is_nport = VAR_5;
     }
    } else {
     VAR_13.index = VAR_12->fcf_entry.fcf_index;
     VAR_13.priority = VAR_12->fcf_entry.fip_priority;


     FUNC_3(VAR_13.address, VAR_12->fcf_entry.fcf_mac_address,
         sizeof(VAR_13.address));
     FUNC_3(VAR_13.wwn, VAR_12->fcf_entry.fabric_name_id,
         sizeof(VAR_13.wwn));
     FUNC_3(VAR_13.map.vlan, VAR_12->fcf_entry.vlan_bitmap,
         sizeof(VAR_13.map.vlan));

     VAR_13.is_ethernet = VAR_5;
     VAR_13.is_nport = VAR_5;
    }

    VAR_6->callback.domain(VAR_6->args.domain,
      VAR_0,
      &VAR_13);
   }
  } else {

   FUNC_2(VAR_6->os, "ignore invalid FCF entry\n");
  }

  if (VAR_2 != VAR_12->next_index) {
   FUNC_1(VAR_6, VAR_12->next_index);
  }
 }

 FUNC_0(VAR_6->os, VAR_8, VAR_1);



 return 0;
}
