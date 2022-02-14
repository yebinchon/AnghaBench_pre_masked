
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int cmd_sema; int (* ips_issue_cmd ) (TYPE_3__*) ;int command_dmatag; } ;
typedef TYPE_1__ ips_softc_t ;
struct TYPE_9__ {int pagenum; int buffaddr; scalar_t__ rw; int id; int command; } ;
typedef TYPE_2__ ips_rw_nvram_cmd ;
struct TYPE_10__ {int data_dmamap; int data_dmatag; int command_dmamap; int id; scalar_t__ command_buffer; TYPE_1__* sc; } ;
typedef TYPE_3__ ips_command_t ;
struct TYPE_11__ {int ds_addr; } ;
typedef TYPE_4__ bus_dma_segment_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_5(void *VAR_6, bus_dma_segment_t *VAR_7,int VAR_8, int VAR_9)
{
 ips_softc_t *VAR_10;
 ips_command_t *VAR_11 = VAR_6;
 ips_rw_nvram_cmd *VAR_12;
 VAR_10 = VAR_11->sc;
 if(VAR_9){
  FUNC_1(VAR_11, VAR_9);
  FUNC_2("ips: error = %d in ips_read_nvram_callback\n", VAR_9);
  return;
 }
 VAR_12 = (ips_rw_nvram_cmd *)VAR_11->command_buffer;
 VAR_12->command = VAR_4;
 VAR_12->id = VAR_11->id;
 VAR_12->pagenum = 5;
 VAR_12->rw = 0;
 VAR_12->buffaddr = VAR_7[0].ds_addr;

 FUNC_0(VAR_10->command_dmatag, VAR_11->command_dmamap,
   VAR_2);
 FUNC_0(VAR_11->data_dmatag, VAR_11->data_dmamap,
   VAR_1);
 VAR_10->ips_issue_cmd(VAR_11);
 if (FUNC_3(&VAR_10->cmd_sema, 30*VAR_5) != 0) {
  FUNC_1(VAR_11, VAR_3);
  return;
 }
 FUNC_0(VAR_11->data_dmatag, VAR_11->data_dmamap,
   VAR_0);
}
