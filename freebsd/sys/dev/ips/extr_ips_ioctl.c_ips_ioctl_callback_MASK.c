
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int readwrite; int dmamap; int dmatag; } ;
typedef TYPE_2__ ips_ioctl_t ;
struct TYPE_11__ {int buffaddr; int id; } ;
typedef TYPE_3__ ips_generic_cmd ;
struct TYPE_12__ {TYPE_1__* sc; int command_dmamap; int id; TYPE_3__* command_buffer; TYPE_2__* arg; } ;
typedef TYPE_4__ ips_command_t ;
struct TYPE_13__ {int ds_addr; } ;
typedef TYPE_5__ bus_dma_segment_t ;
struct TYPE_9__ {int (* ips_issue_cmd ) (TYPE_4__*) ;int command_dmatag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_4__*,int) ;
 int FUNC_2 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_3(void *VAR_4, bus_dma_segment_t *VAR_5,int VAR_6, int VAR_7)
{
 ips_command_t *VAR_8 = VAR_4;
 ips_ioctl_t *VAR_9 = VAR_8->arg;
 ips_generic_cmd *VAR_10 = VAR_8->command_buffer;
 if(VAR_7){
  FUNC_1(VAR_8, VAR_7);
  return;
 }
 VAR_10->id = VAR_8->id;
 VAR_10->buffaddr = VAR_5[0].ds_addr;
 if(VAR_9->readwrite & VAR_3){
  FUNC_0(VAR_9->dmatag, VAR_9->dmamap,
    VAR_1);
 } else if(VAR_9->readwrite & VAR_2){
  FUNC_0(VAR_9->dmatag, VAR_9->dmamap,
    VAR_0);
 }
 FUNC_0(VAR_8->sc->command_dmatag, VAR_8->command_dmamap,
   VAR_1);
 VAR_8->sc->ips_issue_cmd(VAR_8);
}
