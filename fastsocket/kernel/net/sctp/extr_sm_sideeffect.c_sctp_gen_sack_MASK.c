
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_transport {int param_flags; int sackfreq; int sackdelay; } ;
struct sctp_chunk {int dummy; } ;
struct TYPE_2__ {int sack_needed; int sack_cnt; int tsn_map; struct sctp_transport* last_data_from; } ;
struct sctp_association {int param_flags; int sackfreq; TYPE_1__ peer; int rwnd; int a_rwnd; int sackdelay; int * timeouts; } ;
typedef int sctp_cmd_seq_t ;
typedef scalar_t__ __u32 ;


 int VAR_0 ;
 int FUNC_0 (struct sctp_chunk*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (size_t) ;
 int VAR_5 ;
 int FUNC_2 (int *,int ,int ) ;
 struct sctp_chunk* FUNC_3 (struct sctp_association*) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct sctp_association *VAR_6, int VAR_7,
    sctp_cmd_seq_t *VAR_8)
{
 __u32 VAR_9, VAR_10;
 struct sctp_chunk *VAR_11;
 struct sctp_transport *VAR_12 = VAR_6->peer.last_data_from;
 int VAR_13 = 0;

 if (VAR_7 ||
     (!VAR_12 && (VAR_6->param_flags & VAR_5)) ||
     (VAR_12 && (VAR_12->param_flags & VAR_5)))
  VAR_6->peer.sack_needed = 1;

 VAR_9 = FUNC_4(&VAR_6->peer.tsn_map);
 VAR_10 = FUNC_5(&VAR_6->peer.tsn_map);
 if (VAR_10 != VAR_9)
  VAR_6->peer.sack_needed = 1;
 if (!VAR_6->peer.sack_needed) {
  VAR_6->peer.sack_cnt++;






  if (VAR_12) {

   if (VAR_6->peer.sack_cnt >= VAR_12->sackfreq - 1)
    VAR_6->peer.sack_needed = 1;

   VAR_6->timeouts[VAR_4] =
    VAR_12->sackdelay;
  } else {

   if (VAR_6->peer.sack_cnt >= VAR_6->sackfreq - 1)
    VAR_6->peer.sack_needed = 1;

   VAR_6->timeouts[VAR_4] =
    VAR_6->sackdelay;
  }


  FUNC_2(VAR_8, VAR_2,
    FUNC_1(VAR_4));
 } else {
  VAR_6->a_rwnd = VAR_6->rwnd;
  VAR_11 = FUNC_3(VAR_6);
  if (!VAR_11)
   goto nomem;

  VAR_6->peer.sack_needed = 0;
  VAR_6->peer.sack_cnt = 0;

  FUNC_2(VAR_8, VAR_1, FUNC_0(VAR_11));


  FUNC_2(VAR_8, VAR_3,
    FUNC_1(VAR_4));
 }

 return VAR_13;
nomem:
 VAR_13 = -VAR_0;
 return VAR_13;
}
