
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sctp_ulpevent {int dummy; } ;
struct sctp_endpoint {int dummy; } ;
struct TYPE_8__ {TYPE_2__* cookie_hdr; } ;
struct sctp_chunk {TYPE_4__* chunk_hdr; TYPE_3__ subh; } ;
struct TYPE_10__ {int sinit_max_instreams; int sinit_num_ostreams; } ;
struct sctp_association {TYPE_5__ c; } ;
typedef int sctp_init_chunk_t ;
typedef scalar_t__ sctp_disposition_t ;
typedef int sctp_cmd_seq_t ;
struct TYPE_9__ {int type; } ;
struct TYPE_6__ {int * peer_init; } ;
struct TYPE_7__ {TYPE_1__ c; } ;


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
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 () ;
 int VAR_14 ;
 int FUNC_3 (int ) ;
 int VAR_15 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sctp_ulpevent*) ;
 int VAR_16 ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (struct sctp_chunk*) ;
 struct sctp_chunk* FUNC_9 (struct sctp_association*,struct sctp_chunk*) ;
 struct sctp_chunk* FUNC_10 (struct sctp_association const*,struct sctp_chunk*,int ,int *,int ,int ) ;
 int FUNC_11 (struct sctp_association*,struct sctp_chunk*,int ,int *,int ) ;
 int FUNC_12 (struct sctp_association*,struct sctp_association const*,struct sctp_chunk*,int *) ;
 scalar_t__ FUNC_13 (struct sctp_endpoint const*,struct sctp_association const*,int ,struct sctp_chunk*,int *) ;
 int FUNC_14 (struct sctp_chunk*) ;
 scalar_t__ FUNC_15 (struct sctp_association const*,int ) ;
 struct sctp_ulpevent* FUNC_16 (struct sctp_association const*,int ,int ,int ,int ,int ,int *,int ) ;

__attribute__((used)) static sctp_disposition_t FUNC_17(const struct sctp_endpoint *VAR_17,
     const struct sctp_association *VAR_18,
     struct sctp_chunk *VAR_19,
     sctp_cmd_seq_t *VAR_20,
     struct sctp_association *VAR_21)
{
 sctp_init_chunk_t *VAR_22;
 struct sctp_ulpevent *VAR_23;
 struct sctp_chunk *VAR_24;
 struct sctp_chunk *VAR_25;
 sctp_disposition_t VAR_26;




 VAR_22 = &VAR_19->subh.cookie_hdr->c.peer_init[0];

 if (!FUNC_11(VAR_21, VAR_19, FUNC_14(VAR_19), VAR_22,
          VAR_0))
  goto nomem;





 if (!FUNC_12(VAR_21, VAR_18, VAR_19, VAR_20)) {
  return VAR_9;
 }







 if (FUNC_15(VAR_18, VAR_16)) {
  VAR_26 = FUNC_13(VAR_17, VAR_18,
    FUNC_4(VAR_19->chunk_hdr->type),
    VAR_19, VAR_20);
  if (VAR_10 == VAR_26)
   goto nomem;

  VAR_25 = FUNC_10(VAR_18, VAR_19,
      VAR_11,
      ((void*)0), 0, 0);
  if (VAR_25)
   FUNC_7(VAR_20, VAR_5,
     FUNC_1(VAR_25));

  return VAR_9;
 }




 FUNC_7(VAR_20, VAR_6, FUNC_2());
 FUNC_7(VAR_20, VAR_7,
   FUNC_5(VAR_12));
 FUNC_7(VAR_20, VAR_4, FUNC_2());




 FUNC_7(VAR_20, VAR_7,
   FUNC_5(VAR_13));
 FUNC_7(VAR_20, VAR_3, FUNC_2());

 VAR_24 = FUNC_9(VAR_21, VAR_19);
 if (!VAR_24)
  goto nomem;


 VAR_23 = FUNC_16(VAR_18, 0, VAR_14, 0,
          VAR_21->c.sinit_num_ostreams,
          VAR_21->c.sinit_max_instreams,
          ((void*)0), VAR_0);
 if (!VAR_23)
  goto nomem_ev;


 FUNC_7(VAR_20, VAR_8, FUNC_0(VAR_21));
 FUNC_7(VAR_20, VAR_1, FUNC_6(VAR_23));
 FUNC_7(VAR_20, VAR_2,
   FUNC_3(VAR_15));
 FUNC_7(VAR_20, VAR_5, FUNC_1(VAR_24));
 return VAR_9;

nomem_ev:
 FUNC_8(VAR_24);
nomem:
 return VAR_10;
}
