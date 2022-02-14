
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sctp_transport {scalar_t__ cwnd; scalar_t__ flight_size; scalar_t__ burst_limited; struct sctp_association* asoc; } ;
struct sctp_association {int max_burst; int pathmtu; } ;



void FUNC_0(struct sctp_transport *VAR_0)
{
 struct sctp_association *VAR_1 = VAR_0->asoc;
 u32 VAR_2 = VAR_0->cwnd;
 u32 VAR_3;

 if (VAR_0->burst_limited)
  return;

 VAR_3 = VAR_0->flight_size + (VAR_1->max_burst * VAR_1->pathmtu);
 if (VAR_3 < VAR_2) {
  VAR_0->cwnd = VAR_3;
  VAR_0->burst_limited = VAR_2;
 }
}
