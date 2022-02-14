
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int32_t ;
struct mrsas_softc {scalar_t__ msix_vectors; int max_fw_cmds; struct mrsas_mfi_cmd** mfi_cmd_list; struct mrsas_mpt_cmd** mpt_cmd_list; } ;
struct mrsas_mpt_cmd {int sync_cmd_idx; TYPE_5__* io_request; } ;
struct mrsas_mfi_cmd {TYPE_2__* frame; scalar_t__ sync_cmd; } ;
struct TYPE_8__ {int status; } ;
struct TYPE_9__ {TYPE_3__ raid_context; } ;
struct TYPE_10__ {TYPE_4__ RaidContext; } ;
struct TYPE_6__ {scalar_t__ cmd; } ;
struct TYPE_7__ {TYPE_1__ hdr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mrsas_softc*,struct mrsas_mfi_cmd*,int ) ;

void
FUNC_1(struct mrsas_softc *VAR_2)
{
 int VAR_3;
 struct mrsas_mpt_cmd *VAR_4;
 struct mrsas_mfi_cmd *VAR_5;
 u_int32_t VAR_6, VAR_7;

 VAR_6 = VAR_2->msix_vectors > 0 ? VAR_2->msix_vectors : 1;
 for (VAR_3 = 0; VAR_3 < VAR_2->max_fw_cmds; VAR_3++) {
  VAR_4 = VAR_2->mpt_cmd_list[VAR_3];

  if (VAR_4->sync_cmd_idx != (u_int32_t)VAR_1) {
   VAR_5 = VAR_2->mfi_cmd_list[VAR_4->sync_cmd_idx];
   if (VAR_5->sync_cmd && VAR_5->frame->hdr.cmd != VAR_0) {
    for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
     FUNC_0(VAR_2, VAR_5,
         VAR_4->io_request->RaidContext.raid_context.status);
   }
  }
 }
}
