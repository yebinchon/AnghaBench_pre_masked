
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int adapter_info; int cmd_sema; int (* ips_issue_cmd ) (TYPE_2__*) ;int command_dmatag; } ;
typedef TYPE_1__ ips_softc_t ;
struct TYPE_9__ {int data_buffer; int data_dmamap; int data_dmatag; int command_dmamap; int id; scalar_t__ command_buffer; TYPE_1__* sc; } ;
typedef TYPE_2__ ips_command_t ;
struct TYPE_10__ {int buffaddr; int id; int command; } ;
typedef TYPE_3__ ips_adapter_info_cmd ;
struct TYPE_11__ {int ds_addr; } ;
typedef TYPE_4__ bus_dma_segment_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_6 ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_6(void *VAR_7, bus_dma_segment_t *VAR_8,int VAR_9, int VAR_10)
{
 ips_softc_t *VAR_11;
 ips_command_t *VAR_12 = VAR_7;
 ips_adapter_info_cmd *VAR_13;
 VAR_11 = VAR_12->sc;
 if(VAR_10){
  FUNC_1(VAR_12, VAR_10);
  FUNC_3("ips: error = %d in ips_get_adapter_info\n", VAR_10);
  return;
 }
 VAR_13 = (ips_adapter_info_cmd *)VAR_12->command_buffer;
 VAR_13->command = VAR_4;
 VAR_13->id = VAR_12->id;
 VAR_13->buffaddr = VAR_8[0].ds_addr;

 FUNC_0(VAR_11->command_dmatag, VAR_12->command_dmamap,
   VAR_2);
 FUNC_0(VAR_12->data_dmatag, VAR_12->data_dmamap,
   VAR_1);
 VAR_11->ips_issue_cmd(VAR_12);
 if (FUNC_4(&VAR_11->cmd_sema, 30*VAR_6) != 0) {
  FUNC_1(VAR_12, VAR_3);
  return;
 }

 FUNC_0(VAR_12->data_dmatag, VAR_12->data_dmamap,
   VAR_0);
 FUNC_2(&(VAR_11->adapter_info), VAR_12->data_buffer, VAR_5);
}
