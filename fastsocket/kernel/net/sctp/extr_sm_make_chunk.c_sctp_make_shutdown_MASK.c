
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int shutdown_hdr; } ;
struct sctp_chunk {int transport; TYPE_1__ subh; } ;
struct TYPE_6__ {int tsn_map; } ;
struct sctp_association {TYPE_2__ peer; } ;
typedef int shut ;
struct TYPE_7__ {int cum_tsn_ack; } ;
typedef TYPE_3__ sctp_shutdownhdr_t ;
typedef int __u32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sctp_chunk*,int,TYPE_3__*) ;
 struct sctp_chunk* FUNC_2 (struct sctp_association const*,int ,int ,int) ;
 int FUNC_3 (int *) ;

struct sctp_chunk *FUNC_4(const struct sctp_association *VAR_1,
          const struct sctp_chunk *VAR_2)
{
 struct sctp_chunk *VAR_3;
 sctp_shutdownhdr_t VAR_4;
 __u32 VAR_5;

 VAR_5 = FUNC_3(&VAR_1->peer.tsn_map);
 VAR_4.cum_tsn_ack = FUNC_0(VAR_5);

 VAR_3 = FUNC_2(VAR_1, VAR_0, 0,
     sizeof(sctp_shutdownhdr_t));
 if (!VAR_3)
  goto nodata;

 VAR_3->subh.shutdown_hdr =
  FUNC_1(VAR_3, sizeof(VAR_4), &VAR_4);

 if (VAR_2)
  VAR_3->transport = VAR_2->transport;
nodata:
 return VAR_3;
}
