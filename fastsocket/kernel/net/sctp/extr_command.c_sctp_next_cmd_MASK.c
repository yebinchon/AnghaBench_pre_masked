
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sctp_cmd_t ;
struct TYPE_3__ {scalar_t__ next_cmd; scalar_t__ next_free_slot; int * cmds; } ;
typedef TYPE_1__ sctp_cmd_seq_t ;



sctp_cmd_t *FUNC_0(sctp_cmd_seq_t *VAR_0)
{
 sctp_cmd_t *VAR_1 = ((void*)0);

 if (VAR_0->next_cmd < VAR_0->next_free_slot)
  VAR_1 = &VAR_0->cmds[VAR_0->next_cmd++];

 return VAR_1;
}
