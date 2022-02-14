
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int max_cmds; TYPE_2__* commandarray; int * staticcmd; int state; int command_dmatag; int used_commands; } ;
typedef TYPE_1__ ips_softc_t ;
struct TYPE_6__ {scalar_t__ command_phys_addr; int * data_dmamap; int data_dmatag; int command_dmamap; int command_buffer; } ;
typedef TYPE_2__ ips_command_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_4(ips_softc_t *VAR_2)
{
 int VAR_3, VAR_4 = -1;
 ips_command_t *VAR_5;

 if(!VAR_2->used_commands){
  for(VAR_3 = 0; VAR_3 < VAR_2->max_cmds; VAR_3++){

   VAR_5 = &VAR_2->commandarray[VAR_3];

   if(VAR_5->command_phys_addr == 0)
    continue;
   FUNC_1(VAR_2->command_dmatag,
       VAR_5->command_dmamap);
   FUNC_2(VAR_2->command_dmatag,
     VAR_5->command_buffer,
     VAR_5->command_dmamap);
   if (VAR_5->data_dmamap != ((void*)0))
    FUNC_0(VAR_5->data_dmatag,
        VAR_5->data_dmamap);
  }
  VAR_4 = 0;
  VAR_2->state |= VAR_0;
 }
 VAR_2->staticcmd = ((void*)0);
 FUNC_3(VAR_2->commandarray, VAR_1);
 return VAR_4;
}
