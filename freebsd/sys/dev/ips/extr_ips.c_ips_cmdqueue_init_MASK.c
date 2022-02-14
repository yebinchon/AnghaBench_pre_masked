
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int max_cmds; int state; TYPE_2__* staticcmd; int free_cmd_list; int sg_dmatag; int command_dmatag; TYPE_2__* commandarray; } ;
typedef TYPE_1__ ips_softc_t ;
struct TYPE_8__ {int id; int data_dmamap; int data_dmatag; int command_dmamap; int command_buffer; int command_phys_addr; TYPE_1__* sc; } ;
typedef TYPE_2__ ips_command_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int ,int ,int ,int ,TYPE_2__*,int ) ;
 scalar_t__ FUNC_4 (int ,int *,int ,int *) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_7 ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (int,int ,int) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_8(ips_softc_t *VAR_9)
{
 int VAR_10;
 ips_command_t *VAR_11;

 VAR_9->commandarray = (ips_command_t *)FUNC_7(sizeof(ips_command_t) *
     VAR_9->max_cmds, VAR_4, VAR_5|VAR_6);
 if (VAR_9->commandarray == ((void*)0))
  return (VAR_1);

 FUNC_0(&VAR_9->free_cmd_list);
 for(VAR_10 = 0; VAR_10 < VAR_9->max_cmds; VAR_10++){
  VAR_11 = &VAR_9->commandarray[VAR_10];
  VAR_11->id = VAR_10;
  VAR_11->sc = VAR_9;

  if(FUNC_4(VAR_9->command_dmatag,&VAR_11->command_buffer,
      VAR_0, &VAR_11->command_dmamap))
   goto error;
  FUNC_3(VAR_9->command_dmatag, VAR_11->command_dmamap,
    VAR_11->command_buffer,VAR_2,
    VAR_7, VAR_11, VAR_0);
  if(!VAR_11->command_phys_addr){
   FUNC_5(VAR_9->command_dmatag,
       VAR_11->command_buffer, VAR_11->command_dmamap);
   goto error;
  }

  if (VAR_10 != 0) {
   VAR_11->data_dmatag = VAR_9->sg_dmatag;
   if (FUNC_2(VAR_11->data_dmatag, 0,
       &VAR_11->data_dmamap))
    goto error;
   FUNC_1(&VAR_9->free_cmd_list, VAR_11, VAR_8);
  } else
   VAR_9->staticcmd = VAR_11;
 }
 VAR_9->state &= ~VAR_3;
 return 0;
error:
 FUNC_6(VAR_9);
 return VAR_1;
}
