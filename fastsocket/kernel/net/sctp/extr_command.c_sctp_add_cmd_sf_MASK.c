
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sctp_verb_t ;
struct TYPE_5__ {size_t next_free_slot; TYPE_1__* cmds; } ;
typedef TYPE_2__ sctp_cmd_seq_t ;
typedef int sctp_arg_t ;
struct TYPE_4__ {int obj; int verb; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;

void FUNC_1(sctp_cmd_seq_t *VAR_1, sctp_verb_t VAR_2, sctp_arg_t VAR_3)
{
 FUNC_0(VAR_1->next_free_slot >= VAR_0);

 VAR_1->cmds[VAR_1->next_free_slot].verb = VAR_2;
 VAR_1->cmds[VAR_1->next_free_slot++].obj = VAR_3;
}
