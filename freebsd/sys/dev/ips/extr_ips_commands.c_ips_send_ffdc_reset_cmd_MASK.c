
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int tv_sec; } ;
struct TYPE_12__ {int cmd_sema; int (* ips_issue_cmd ) (TYPE_3__*) ;int command_dmatag; TYPE_1__ ffdc_resettime; int ffdc_resetcount; } ;
typedef TYPE_2__ ips_softc_t ;
struct TYPE_13__ {int command_dmamap; int id; scalar_t__ command_buffer; int callback; TYPE_2__* sc; } ;
typedef TYPE_3__ ips_command_t ;
struct TYPE_14__ {int reset_type; int reset_count; int id; int command; } ;
typedef TYPE_4__ ips_adapter_ffdc_cmd ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*) ;
 int VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_7(ips_command_t *VAR_3)
{
 ips_softc_t *VAR_4 = VAR_3->sc;
 ips_adapter_ffdc_cmd *VAR_5;

 FUNC_1(10,"ips test: got a command, building ffdc reset command\n");
 VAR_3->callback = VAR_2;
 VAR_5 = (ips_adapter_ffdc_cmd *)VAR_3->command_buffer;
 VAR_5->command = VAR_1;
 VAR_5->id = VAR_3->id;
 VAR_5->reset_count = VAR_4->ffdc_resetcount;
 VAR_5->reset_type = 0x0;
 FUNC_3(VAR_5, VAR_4->ffdc_resettime.tv_sec);

 FUNC_2(VAR_4->command_dmatag, VAR_3->command_dmamap,
   VAR_0);
 VAR_4->ips_issue_cmd(VAR_3);
 if (FUNC_0(VAR_3) == 0)
  FUNC_5(&VAR_4->cmd_sema);
 FUNC_4(VAR_4, VAR_3);
 return 0;
}
