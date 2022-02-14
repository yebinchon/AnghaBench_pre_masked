
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int cmd_sema; int (* ips_issue_cmd ) (TYPE_3__*) ;int command_dmatag; } ;
typedef TYPE_1__ ips_softc_t ;
struct TYPE_10__ {int reserve2; int id; int command; } ;
typedef TYPE_2__ ips_generic_cmd ;
struct TYPE_11__ {int command_dmamap; int id; scalar_t__ command_buffer; int callback; TYPE_1__* sc; } ;
typedef TYPE_3__ ips_command_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*,TYPE_3__*) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_6(ips_command_t *VAR_4)
{
 ips_softc_t *VAR_5 = VAR_4->sc;
 ips_generic_cmd *VAR_6;

 FUNC_1(10,"ips test: got a command, building errortable command\n");
 VAR_4->callback = VAR_3;
 VAR_6 = (ips_generic_cmd *)VAR_4->command_buffer;
 VAR_6->command = VAR_2;
 VAR_6->id = VAR_4->id;
 VAR_6->reserve2 = VAR_1;
 FUNC_2(VAR_5->command_dmatag, VAR_4->command_dmamap,
   VAR_0);
 VAR_5->ips_issue_cmd(VAR_4);
 if (FUNC_0(VAR_4) == 0)
  FUNC_4(&VAR_5->cmd_sema);
 FUNC_3(VAR_5, VAR_4);
 return 0;
}
