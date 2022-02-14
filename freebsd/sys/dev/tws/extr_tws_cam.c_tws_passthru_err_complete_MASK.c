
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tws_request {TYPE_2__* cmd_pkt; int error_code; int request_id; int sc; } ;
struct TYPE_3__ {int error; } ;
struct tws_command_header {TYPE_1__ status_block; } ;
struct TYPE_4__ {int hdr; } ;


 int FUNC_0 (int ,char*,struct tws_command_header*,int ) ;
 int FUNC_1 (int *,struct tws_command_header*,int) ;
 int FUNC_2 (struct tws_request*) ;

__attribute__((used)) static void
FUNC_3(struct tws_request *VAR_0,
                                          struct tws_command_header *VAR_1)
{
    FUNC_0(VAR_0->sc, "entry", VAR_1, VAR_0->request_id);
    VAR_0->error_code = VAR_1->status_block.error;
    FUNC_1(&(VAR_0->cmd_pkt->hdr), VAR_1, sizeof(struct tws_command_header));
    FUNC_2(VAR_0);
}
