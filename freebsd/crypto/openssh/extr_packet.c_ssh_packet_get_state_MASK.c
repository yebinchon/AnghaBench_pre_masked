
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sshbuf {int dummy; } ;
struct ssh {int kex; struct session_state* state; } ;
struct TYPE_4__ {int bytes; int packets; int blocks; int seqnr; } ;
struct TYPE_3__ {int bytes; int packets; int blocks; int seqnr; } ;
struct session_state {int output; int input; TYPE_2__ p_read; TYPE_1__ p_send; int rekey_interval; int rekey_limit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sshbuf*,int ) ;
 int FUNC_1 (struct sshbuf*,struct ssh*,int ) ;
 int FUNC_2 (struct sshbuf*,int ) ;
 int FUNC_3 (struct sshbuf*,int ) ;
 int FUNC_4 (struct sshbuf*,int ) ;

int
FUNC_5(struct ssh *VAR_2, struct sshbuf *VAR_3)
{
 struct session_state *VAR_4 = VAR_2->state;
 int VAR_5;

 if ((VAR_5 = FUNC_0(VAR_3, VAR_2->kex)) != 0 ||
     (VAR_5 = FUNC_1(VAR_3, VAR_2, VAR_1)) != 0 ||
     (VAR_5 = FUNC_1(VAR_3, VAR_2, VAR_0)) != 0 ||
     (VAR_5 = FUNC_4(VAR_3, VAR_4->rekey_limit)) != 0 ||
     (VAR_5 = FUNC_3(VAR_3, VAR_4->rekey_interval)) != 0 ||
     (VAR_5 = FUNC_3(VAR_3, VAR_4->p_send.seqnr)) != 0 ||
     (VAR_5 = FUNC_4(VAR_3, VAR_4->p_send.blocks)) != 0 ||
     (VAR_5 = FUNC_3(VAR_3, VAR_4->p_send.packets)) != 0 ||
     (VAR_5 = FUNC_4(VAR_3, VAR_4->p_send.bytes)) != 0 ||
     (VAR_5 = FUNC_3(VAR_3, VAR_4->p_read.seqnr)) != 0 ||
     (VAR_5 = FUNC_4(VAR_3, VAR_4->p_read.blocks)) != 0 ||
     (VAR_5 = FUNC_3(VAR_3, VAR_4->p_read.packets)) != 0 ||
     (VAR_5 = FUNC_4(VAR_3, VAR_4->p_read.bytes)) != 0 ||
     (VAR_5 = FUNC_2(VAR_3, VAR_4->input)) != 0 ||
     (VAR_5 = FUNC_2(VAR_3, VAR_4->output)) != 0)
  return VAR_5;

 return 0;
}
