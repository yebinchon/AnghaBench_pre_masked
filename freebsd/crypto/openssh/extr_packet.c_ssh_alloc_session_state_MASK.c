
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ packets; } ;
struct TYPE_3__ {scalar_t__ packets; } ;
struct ssh {int connection_in; int connection_out; int max_packet_size; int packet_timeout_ms; int initialized; int rekeying; int * outgoing_packet; int * incoming_packet; int * output; int * input; struct ssh* state; TYPE_2__ p_read; TYPE_1__ p_send; int public_keys; int private_keys; int outgoing; } ;
struct session_state {int connection_in; int connection_out; int max_packet_size; int packet_timeout_ms; int initialized; int rekeying; int * outgoing_packet; int * incoming_packet; int * output; int * input; struct session_state* state; TYPE_2__ p_read; TYPE_1__ p_send; int public_keys; int private_keys; int outgoing; } ;


 int FUNC_0 (int *) ;
 struct ssh* FUNC_1 (int,int) ;
 int FUNC_2 (struct ssh*) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 () ;

struct ssh *
FUNC_5(void)
{
 struct ssh *VAR_0 = ((void*)0);
 struct session_state *VAR_1 = ((void*)0);

 if ((VAR_0 = FUNC_1(1, sizeof(*VAR_0))) == ((void*)0) ||
     (VAR_1 = FUNC_1(1, sizeof(*VAR_1))) == ((void*)0) ||
     (VAR_1->input = FUNC_4()) == ((void*)0) ||
     (VAR_1->output = FUNC_4()) == ((void*)0) ||
     (VAR_1->outgoing_packet = FUNC_4()) == ((void*)0) ||
     (VAR_1->incoming_packet = FUNC_4()) == ((void*)0))
  goto fail;
 FUNC_0(&VAR_1->outgoing);
 FUNC_0(&VAR_0->private_keys);
 FUNC_0(&VAR_0->public_keys);
 VAR_1->connection_in = -1;
 VAR_1->connection_out = -1;
 VAR_1->max_packet_size = 32768;
 VAR_1->packet_timeout_ms = -1;
 VAR_1->p_send.packets = VAR_1->p_read.packets = 0;
 VAR_1->initialized = 1;




 VAR_1->rekeying = 1;
 VAR_0->state = VAR_1;
 return VAR_0;
 fail:
 if (VAR_1) {
  FUNC_3(VAR_1->input);
  FUNC_3(VAR_1->output);
  FUNC_3(VAR_1->incoming_packet);
  FUNC_3(VAR_1->outgoing_packet);
  FUNC_2(VAR_1);
 }
 FUNC_2(VAR_0);
 return ((void*)0);
}
