
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_transport {scalar_t__ init_sent_count; } ;
struct sctp_association {scalar_t__ init_cycle; int* timeouts; int max_init_timeo; int init_err_counter; struct sctp_transport* init_last_sent_to; } ;
typedef size_t sctp_event_timeout_t ;


 int FUNC_0 (char*,char*,int ,scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(struct sctp_association *VAR_0,
        sctp_event_timeout_t VAR_1,
        char *VAR_2)
{
 struct sctp_transport *VAR_3;

 VAR_3 = VAR_0->init_last_sent_to;
 VAR_0->init_err_counter++;

 if (VAR_3->init_sent_count > (VAR_0->init_cycle + 1)) {
  VAR_0->timeouts[VAR_1] *= 2;
  if (VAR_0->timeouts[VAR_1] > VAR_0->max_init_timeo) {
   VAR_0->timeouts[VAR_1] = VAR_0->max_init_timeo;
  }
  VAR_0->init_cycle++;
  FUNC_0(
   "T1 %s Timeout adjustment"
   " init_err_counter: %d"
   " cycle: %d"
   " timeout: %ld\n",
   VAR_2,
   VAR_0->init_err_counter,
   VAR_0->init_cycle,
   VAR_0->timeouts[VAR_1]);
 }

}
