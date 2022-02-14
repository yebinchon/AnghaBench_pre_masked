
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct sctp_packet {TYPE_1__* transport; int has_cookie_echo; int has_sack; } ;
struct sctp_chunk {int dummy; } ;
struct TYPE_4__ {scalar_t__ sack_generation; scalar_t__ sack_needed; } ;
struct sctp_association {TYPE_2__ peer; int rwnd; int a_rwnd; struct timer_list* timers; } ;
typedef int sctp_xmit_t ;
struct TYPE_3__ {scalar_t__ sack_generation; struct sctp_association* asoc; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct timer_list*) ;
 int FUNC_1 (struct sctp_association*) ;
 scalar_t__ FUNC_2 (struct sctp_chunk*) ;
 struct sctp_chunk* FUNC_3 (struct sctp_association*) ;
 int FUNC_4 (struct sctp_packet*,struct sctp_chunk*) ;
 scalar_t__ FUNC_5 (struct timer_list*) ;

__attribute__((used)) static sctp_xmit_t FUNC_6(struct sctp_packet *VAR_2,
        struct sctp_chunk *VAR_3)
{
 sctp_xmit_t VAR_4 = VAR_1;




 if (FUNC_2(VAR_3) && !VAR_2->has_sack &&
     !VAR_2->has_cookie_echo) {
  struct sctp_association *VAR_5;
  struct timer_list *VAR_6;
  VAR_5 = VAR_2->transport->asoc;
  VAR_6 = &VAR_5->timers[VAR_0];


  if (FUNC_5(VAR_6)) {
   struct sctp_chunk *VAR_7;

   if (VAR_2->transport->sack_generation !=
       VAR_2->transport->asoc->peer.sack_generation)
    return VAR_4;

   VAR_5->a_rwnd = VAR_5->rwnd;
   VAR_7 = FUNC_3(VAR_5);
   if (VAR_7) {
    VAR_4 = FUNC_4(VAR_2, VAR_7);
    VAR_5->peer.sack_needed = 0;
    if (FUNC_0(VAR_6))
     FUNC_1(VAR_5);
   }
  }
 }
 return VAR_4;
}
