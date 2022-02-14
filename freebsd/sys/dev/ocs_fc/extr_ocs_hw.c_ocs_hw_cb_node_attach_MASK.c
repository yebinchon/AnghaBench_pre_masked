
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
struct TYPE_13__ {size_t index; int attached; } ;
typedef TYPE_5__ ocs_remote_node_t ;
struct TYPE_11__ {int rnode; } ;
struct TYPE_10__ {int (* rnode ) (int ,int ,TYPE_5__*) ;} ;
struct TYPE_14__ {int os; TYPE_3__ args; TYPE_2__ callback; TYPE_1__* rpi_ref; } ;
typedef TYPE_6__ ocs_hw_t ;
typedef int ocs_hw_remote_node_event_e ;
typedef scalar_t__ int32_t ;
struct TYPE_9__ {int rpi_attached; int rpi_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_4 (int ,int ,TYPE_5__*) ;

__attribute__((used)) static int32_t
FUNC_5(ocs_hw_t *VAR_5, int32_t VAR_6, uint8_t *VAR_7, void *VAR_8)
{
 ocs_remote_node_t *VAR_9 = VAR_8;
 sli4_mbox_command_header_t *VAR_10 = (sli4_mbox_command_header_t *)VAR_7;
 ocs_hw_remote_node_event_e VAR_11 = 0;

 if (VAR_6 || VAR_10->status) {
  FUNC_3(VAR_5->os, "bad status cqe=%#x mqe=%#x\n", VAR_6,
    VAR_10->status);
  FUNC_1(&VAR_5->rpi_ref[VAR_9->index].rpi_count, 1);
  VAR_9->attached = VAR_0;
  FUNC_0(&VAR_5->rpi_ref[VAR_9->index].rpi_attached, 0);
  VAR_11 = VAR_1;
 } else {
  VAR_9->attached = VAR_4;
  FUNC_0(&VAR_5->rpi_ref[VAR_9->index].rpi_attached, 1);
  VAR_11 = VAR_2;
 }

 if (VAR_5->callback.rnode != ((void*)0)) {
  VAR_5->callback.rnode(VAR_5->args.rnode, VAR_11, VAR_9);
 }
 FUNC_2(VAR_5->os, VAR_7, VAR_3);

 return 0;
}
