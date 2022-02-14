
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* sc; int command_dmamap; } ;
typedef TYPE_2__ ips_command_t ;
struct TYPE_4__ {int cmd_sema; int command_dmatag; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(ips_command_t *VAR_1)
{
 FUNC_0(VAR_1->sc->command_dmatag, VAR_1->command_dmamap,
   VAR_0);
 FUNC_1(&VAR_1->sc->cmd_sema);
}
