
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
struct TYPE_10__ {scalar_t__ status; } ;
typedef TYPE_4__ sli4_mbox_command_header_t ;
struct TYPE_9__ {int rnode; } ;
struct TYPE_8__ {int (* rnode ) (int ,scalar_t__,int *) ;} ;
struct TYPE_11__ {int os; TYPE_3__ args; TYPE_2__ callback; int sli; TYPE_1__* rpi_ref; } ;
typedef TYPE_5__ ocs_hw_t ;
typedef scalar_t__ ocs_hw_remote_node_event_e ;
typedef int int32_t ;
struct TYPE_7__ {int rpi_count; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ,char*,int,scalar_t__) ;
 int FUNC_3 (int ,char*) ;
 size_t FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,scalar_t__,int *) ;

__attribute__((used)) static int32_t
FUNC_7(ocs_hw_t *VAR_4, int32_t VAR_5, uint8_t *VAR_6, void *VAR_7)
{
 sli4_mbox_command_header_t *VAR_8 = (sli4_mbox_command_header_t *)VAR_6;
 ocs_hw_remote_node_event_e VAR_9 = VAR_1;
 int32_t VAR_10 = 0;
 uint32_t VAR_11;

 if (VAR_5 || VAR_8->status) {
  FUNC_2(VAR_4->os, "bad status cqe=%#x mqe=%#x\n", VAR_5,
    VAR_8->status);
 } else {
  VAR_9 = VAR_0;
 }

 if (VAR_9 == VAR_0) {
  for (VAR_11 = 0; VAR_11 < FUNC_4(&VAR_4->sli, VAR_3); VAR_11++) {
   FUNC_0(&VAR_4->rpi_ref[VAR_11].rpi_count, 0);
  }

  if (FUNC_5(&VAR_4->sli, VAR_3)) {
   FUNC_3(VAR_4->os, "FCOE_RPI free all failure\n");
   VAR_10 = -1;
  }
 }

 if (VAR_4->callback.rnode != ((void*)0)) {
  VAR_4->callback.rnode(VAR_4->args.rnode, VAR_9, ((void*)0));
 }

 FUNC_1(VAR_4->os, VAR_6, VAR_2);

 return VAR_10;
}
