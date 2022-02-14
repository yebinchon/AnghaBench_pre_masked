
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int (* ips_issue_cmd ) (TYPE_4__*) ;int command_dmatag; int adapter_type; } ;
typedef TYPE_1__ ips_softc_t ;
struct TYPE_8__ {int pagenum; int rw; int id; int command; } ;
typedef TYPE_2__ ips_rw_nvram_cmd ;
struct TYPE_9__ {int operating_system; int driver_low; int driver_high; int adapter_type; } ;
typedef TYPE_3__ ips_nvram_page5 ;
struct TYPE_10__ {int command_dmamap; TYPE_3__* data_buffer; int data_dmamap; int data_dmatag; int id; scalar_t__ command_buffer; int callback; TYPE_1__* sc; } ;
typedef TYPE_4__ ips_command_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_3(ips_command_t *VAR_7){
 ips_softc_t *VAR_8 = VAR_7->sc;
 ips_rw_nvram_cmd *VAR_9;
 ips_nvram_page5 *VAR_10;


 VAR_7->callback = VAR_6;
 VAR_9 = (ips_rw_nvram_cmd *)VAR_7->command_buffer;
 VAR_9->command = VAR_3;
 VAR_9->id = VAR_7->id;
 VAR_9->pagenum = 5;
 VAR_9->rw = 1;
 FUNC_0(VAR_7->data_dmatag, VAR_7->data_dmamap,
    VAR_0);
 VAR_10 = VAR_7->data_buffer;

 VAR_8->adapter_type = VAR_10->adapter_type;

 FUNC_1(VAR_10->driver_high, VAR_4, 4);
 FUNC_1(VAR_10->driver_low, VAR_5, 4);
 VAR_10->operating_system = VAR_2;
 FUNC_0(VAR_8->command_dmatag, VAR_7->command_dmamap,
   VAR_1);
 VAR_8->ips_issue_cmd(VAR_7);
}
