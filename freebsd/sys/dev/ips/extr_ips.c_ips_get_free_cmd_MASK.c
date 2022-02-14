
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int state; TYPE_2__* staticcmd; int used_commands; int free_cmd_list; } ;
typedef TYPE_1__ ips_softc_t ;
struct TYPE_8__ {int command_buffer; } ;
typedef TYPE_2__ ips_command_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_8 ;

int FUNC_4(ips_softc_t *VAR_9, ips_command_t **VAR_10, unsigned long VAR_11)
{
 ips_command_t *VAR_12;

 if(VAR_9->state & VAR_4){
  return VAR_2;
 }
 if ((VAR_11 & VAR_6) == 0) {
  VAR_12 = FUNC_0(&VAR_9->free_cmd_list);
  if(!VAR_12 || (VAR_9->state & VAR_7)){
   return VAR_1;
  }
  FUNC_1(&VAR_9->free_cmd_list, VAR_8);
  (VAR_9->used_commands)++;
 } else {
  if (VAR_9->state & VAR_5)
   return VAR_0;
  VAR_12 = VAR_9->staticcmd;
  VAR_9->state |= VAR_5;
 }
 FUNC_3(VAR_12);
 FUNC_2(VAR_12->command_buffer, VAR_3);
 *VAR_10 = VAR_12;
 return 0;
}
