
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sctp_endpoint {int dummy; } ;
struct TYPE_7__ {TYPE_2__* cookie_hdr; } ;
struct sctp_chunk {TYPE_3__ subh; } ;
struct TYPE_8__ {scalar_t__ adaptation_ind; } ;
struct sctp_association {TYPE_4__ peer; } ;
typedef int sctp_init_chunk_t ;
typedef int sctp_disposition_t ;
typedef int sctp_cmd_seq_t ;
struct TYPE_5__ {int * peer_init; } ;
struct TYPE_6__ {TYPE_1__ c; } ;


 int VAR_0 ;
 int FUNC_0 (struct sctp_association*) ;
 int FUNC_1 (struct sctp_chunk*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int VAR_10 ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int VAR_11 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,int ) ;
 struct sctp_chunk* FUNC_7 (struct sctp_association*,struct sctp_chunk*) ;
 int FUNC_8 (struct sctp_association*,struct sctp_chunk*,int ,int *,int ) ;
 int FUNC_9 (struct sctp_chunk*) ;

__attribute__((used)) static sctp_disposition_t FUNC_10(const struct sctp_endpoint *VAR_12,
     const struct sctp_association *VAR_13,
     struct sctp_chunk *VAR_14,
     sctp_cmd_seq_t *VAR_15,
     struct sctp_association *VAR_16)
{
 sctp_init_chunk_t *VAR_17;
 struct sctp_chunk *VAR_18;




 VAR_17 = &VAR_14->subh.cookie_hdr->c.peer_init[0];
 if (!FUNC_8(VAR_16, VAR_14, FUNC_9(VAR_14), VAR_17,
          VAR_0))
  goto nomem;


 FUNC_6(VAR_15, VAR_6, FUNC_0(VAR_16));
 FUNC_6(VAR_15, VAR_4,
   FUNC_4(VAR_11));
 FUNC_2(VAR_10);
 FUNC_6(VAR_15, VAR_3, FUNC_3());

 VAR_18 = FUNC_7(VAR_16, VAR_14);
 if (!VAR_18)
  goto nomem;

 FUNC_6(VAR_15, VAR_5, FUNC_1(VAR_18));
 FUNC_6(VAR_15, VAR_2, FUNC_5(VAR_7));
 if (VAR_13->peer.adaptation_ind)
  FUNC_6(VAR_15, VAR_1, FUNC_3());

 return VAR_8;

nomem:
 return VAR_9;
}
