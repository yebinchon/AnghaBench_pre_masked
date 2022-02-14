
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sctp_tsnmap {scalar_t__ base_tsn; scalar_t__ len; scalar_t__ max_tsn_seen; int tsn_map; int cumulative_tsn_ack_point; } ;
struct sctp_transport {TYPE_2__* asoc; int sack_generation; } ;
typedef scalar_t__ __u32 ;
struct TYPE_3__ {int sack_generation; } ;
struct TYPE_4__ {TYPE_1__ peer; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (struct sctp_tsnmap*,scalar_t__) ;
 int FUNC_2 (struct sctp_tsnmap*) ;
 int FUNC_3 (struct sctp_tsnmap*) ;
 int FUNC_4 (scalar_t__,int ) ;

int FUNC_5(struct sctp_tsnmap *VAR_1, __u32 VAR_2,
       struct sctp_transport *VAR_3)
{
 u16 VAR_4;

 if (FUNC_0(VAR_2, VAR_1->base_tsn))
  return 0;

 VAR_4 = VAR_2 - VAR_1->base_tsn;

 if (VAR_4 >= VAR_1->len && !FUNC_1(VAR_1, VAR_4))
  return -VAR_0;

 if (!FUNC_2(VAR_1) && VAR_4 == 0) {




  VAR_1->max_tsn_seen++;
  VAR_1->cumulative_tsn_ack_point++;
  if (VAR_3)
   VAR_3->sack_generation =
    VAR_3->asoc->peer.sack_generation;
  VAR_1->base_tsn++;
 } else {





  if (FUNC_0(VAR_1->max_tsn_seen, VAR_2))
   VAR_1->max_tsn_seen = VAR_2;


  FUNC_4(VAR_4, VAR_1->tsn_map);




  FUNC_3(VAR_1);
 }

 return 0;
}
