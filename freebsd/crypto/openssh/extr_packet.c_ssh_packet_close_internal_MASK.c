
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* z_streamp ;
typedef size_t u_int ;
struct ssh {struct session_state* state; struct session_state* remote_ipaddr; struct session_state* local_ipaddr; } ;
struct TYPE_4__ {double total_in; double total_out; } ;
struct session_state {scalar_t__ connection_in; scalar_t__ connection_out; scalar_t__ compression_out_failures; scalar_t__ compression_in_failures; int * receive_context; int * send_context; TYPE_1__ compression_in_stream; scalar_t__ compression_in_started; TYPE_1__ compression_out_stream; scalar_t__ compression_out_started; scalar_t__ compression_buffer; int ** newkeys; scalar_t__ incoming_packet; scalar_t__ outgoing_packet; scalar_t__ output; scalar_t__ input; scalar_t__ initialized; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,unsigned long long,unsigned long long,double) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct session_state*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct ssh*,size_t) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static void
FUNC_9(struct ssh *VAR_1, int VAR_2)
{
 struct session_state *VAR_3 = VAR_1->state;
 u_int VAR_4;

 if (!VAR_3->initialized)
  return;
 VAR_3->initialized = 0;
 if (VAR_2) {
  if (VAR_3->connection_in == VAR_3->connection_out) {
   FUNC_1(VAR_3->connection_out);
  } else {
   FUNC_1(VAR_3->connection_in);
   FUNC_1(VAR_3->connection_out);
  }
 }
 FUNC_8(VAR_3->input);
 FUNC_8(VAR_3->output);
 FUNC_8(VAR_3->outgoing_packet);
 FUNC_8(VAR_3->incoming_packet);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  FUNC_6(VAR_3->newkeys[VAR_4]);
  VAR_3->newkeys[VAR_4] = ((void*)0);
  FUNC_7(VAR_1, VAR_4);
 }

 if (VAR_2 && VAR_3->compression_buffer) {
  FUNC_8(VAR_3->compression_buffer);
  if (VAR_3->compression_out_started) {
   z_streamp VAR_5 = &VAR_3->compression_out_stream;
   FUNC_2("compress outgoing: "
       "raw data %llu, compressed %llu, factor %.2f",
    (unsigned long long)VAR_5->total_in,
    (unsigned long long)VAR_5->total_out,
    VAR_5->total_in == 0 ? 0.0 :
    (double) VAR_5->total_out / VAR_5->total_in);
   if (VAR_3->compression_out_failures == 0)
    FUNC_3(VAR_5);
  }
  if (VAR_3->compression_in_started) {
   z_streamp VAR_6 = &VAR_3->compression_in_stream;
   FUNC_2("compress incoming: "
       "raw data %llu, compressed %llu, factor %.2f",
       (unsigned long long)VAR_6->total_out,
       (unsigned long long)VAR_6->total_in,
       VAR_6->total_out == 0 ? 0.0 :
       (double) VAR_6->total_in / VAR_6->total_out);
   if (VAR_3->compression_in_failures == 0)
    FUNC_5(VAR_6);
  }
 }
 FUNC_0(VAR_3->send_context);
 FUNC_0(VAR_3->receive_context);
 VAR_3->send_context = VAR_3->receive_context = ((void*)0);
 if (VAR_2) {
  FUNC_4(VAR_1->local_ipaddr);
  VAR_1->local_ipaddr = ((void*)0);
  FUNC_4(VAR_1->remote_ipaddr);
  VAR_1->remote_ipaddr = ((void*)0);
  FUNC_4(VAR_1->state);
  VAR_1->state = ((void*)0);
 }
}
