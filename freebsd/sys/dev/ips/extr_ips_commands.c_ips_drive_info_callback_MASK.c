
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int drivecount; int dev; int drives; int cmd_sema; int (* ips_issue_cmd ) (TYPE_4__*) ;int command_dmatag; } ;
typedef TYPE_1__ ips_softc_t ;
typedef int ips_drive_t ;
struct TYPE_10__ {int drivecount; int drives; } ;
typedef TYPE_2__ ips_drive_info_t ;
struct TYPE_11__ {int buffaddr; int id; int command; } ;
typedef TYPE_3__ ips_drive_cmd ;
struct TYPE_12__ {TYPE_2__* data_buffer; int data_dmamap; int data_dmatag; int command_dmamap; int id; scalar_t__ command_buffer; TYPE_1__* sc; } ;
typedef TYPE_4__ ips_command_t ;
struct TYPE_13__ {int ds_addr; } ;
typedef TYPE_5__ bus_dma_segment_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int VAR_5 ;
 int FUNC_2 (TYPE_4__*,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (char*,int) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_7(void *VAR_6, bus_dma_segment_t *VAR_7,int VAR_8, int VAR_9)
{
 ips_softc_t *VAR_10;
 ips_command_t *VAR_11 = VAR_6;
 ips_drive_cmd *VAR_12;
 ips_drive_info_t *VAR_13;

 VAR_10 = VAR_11->sc;
 if(VAR_9){
  FUNC_2(VAR_11, VAR_9);
  FUNC_4("ips: error = %d in ips_get_drive_info\n", VAR_9);
  return;
 }
 VAR_12 = (ips_drive_cmd *)VAR_11->command_buffer;
 VAR_12->command = VAR_4;
 VAR_12->id = VAR_11->id;
 VAR_12->buffaddr = VAR_7[0].ds_addr;

 FUNC_0(VAR_10->command_dmatag, VAR_11->command_dmamap,
   VAR_2);
 FUNC_0(VAR_11->data_dmatag, VAR_11->data_dmamap,
   VAR_1);
 VAR_10->ips_issue_cmd(VAR_11);
 if (FUNC_5(&VAR_10->cmd_sema, 10*VAR_5) != 0) {
  FUNC_2(VAR_11, VAR_3);
  return;
 }

 FUNC_0(VAR_11->data_dmatag, VAR_11->data_dmamap,
   VAR_0);
 VAR_13 = VAR_11->data_buffer;
 FUNC_3(VAR_10->drives, VAR_13->drives, sizeof(ips_drive_t) * 8);
 VAR_10->drivecount = VAR_13->drivecount;
 FUNC_1(VAR_10->dev, "logical drives: %d\n",VAR_10->drivecount);
}
