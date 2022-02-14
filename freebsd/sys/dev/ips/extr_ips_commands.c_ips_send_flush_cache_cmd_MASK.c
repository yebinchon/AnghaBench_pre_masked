
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int cmd_sema; int (* ips_issue_cmd ) (TYPE_3__*) ;int command_dmatag; } ;
typedef TYPE_1__ ips_softc_t ;
struct TYPE_10__ {int id; int command; } ;
typedef TYPE_2__ ips_generic_cmd ;
struct TYPE_11__ {int command_dmamap; int id; scalar_t__ command_buffer; int callback; TYPE_1__* sc; } ;
typedef TYPE_3__ ips_command_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*,TYPE_3__*) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_6(ips_command_t *VAR_3)
{
 ips_softc_t *VAR_4 = VAR_3->sc;
 ips_generic_cmd *VAR_5;

 FUNC_1(10,"ips test: got a command, building flush command\n");
 VAR_3->callback = VAR_2;
 VAR_5 = (ips_generic_cmd *)VAR_3->command_buffer;
 VAR_5->command = VAR_1;
 VAR_5->id = VAR_3->id;
 FUNC_2(VAR_4->command_dmatag, VAR_3->command_dmamap,
   VAR_0);
 VAR_4->ips_issue_cmd(VAR_3);
 if (FUNC_0(VAR_3) == 0)
  FUNC_4(&VAR_4->cmd_sema);
 FUNC_3(VAR_4, VAR_3);
 return 0;
}
