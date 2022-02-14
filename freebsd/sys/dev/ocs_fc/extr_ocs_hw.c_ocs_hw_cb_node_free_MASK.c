
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_12__ {scalar_t__ status; } ;
typedef TYPE_4__ sli4_mbox_command_header_t ;
struct TYPE_13__ {size_t index; void* attached; void* node_group; } ;
typedef TYPE_5__ ocs_remote_node_t ;
struct TYPE_11__ {int rnode; } ;
struct TYPE_10__ {int (* rnode ) (int ,int ,TYPE_5__*) ;} ;
struct TYPE_14__ {int os; TYPE_3__ args; TYPE_2__ callback; TYPE_1__* rpi_ref; int sli; } ;
typedef TYPE_6__ ocs_hw_t ;
typedef int ocs_hw_remote_node_event_e ;
typedef int int32_t ;
struct TYPE_9__ {int rpi_attached; int rpi_count; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ,char*,int,scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,TYPE_5__*) ;

__attribute__((used)) static int32_t
FUNC_6(ocs_hw_t *VAR_6, int32_t VAR_7, uint8_t *VAR_8, void *VAR_9)
{
 ocs_remote_node_t *VAR_10 = VAR_9;
 sli4_mbox_command_header_t *VAR_11 = (sli4_mbox_command_header_t *)VAR_8;
 ocs_hw_remote_node_event_e VAR_12 = VAR_1;
 int32_t VAR_13 = 0;

 if (VAR_7 || VAR_11->status) {
  FUNC_3(VAR_6->os, "bad status cqe=%#x mqe=%#x\n", VAR_7,
    VAR_11->status);







  if (!VAR_10->attached || ((FUNC_4(&VAR_6->sli) == VAR_5) && !VAR_10->node_group) ||
    (VAR_11->status != VAR_4)) {
   VAR_13 = -1;
  }
 }

 if (VAR_13 == 0) {
  VAR_10->node_group = VAR_0;
  VAR_10->attached = VAR_0;

  if (FUNC_0(&VAR_6->rpi_ref[VAR_10->index].rpi_count) == 0) {
   FUNC_1(&VAR_6->rpi_ref[VAR_10->index].rpi_attached, 0);
  }

  VAR_12 = VAR_2;
 }

 if (VAR_6->callback.rnode != ((void*)0)) {
  VAR_6->callback.rnode(VAR_6->args.rnode, VAR_12, VAR_10);
 }

 FUNC_2(VAR_6->os, VAR_8, VAR_3);

 return VAR_13;
}
