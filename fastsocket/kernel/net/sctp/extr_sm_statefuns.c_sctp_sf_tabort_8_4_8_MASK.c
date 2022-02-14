
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sctp_packet {int vtag; } ;
struct TYPE_6__ {int sk; } ;
struct sctp_endpoint {TYPE_3__ base; } ;
struct sctp_chunk {TYPE_2__* skb; TYPE_1__* sctp_hdr; } ;
struct sctp_association {int dummy; } ;
typedef int sctp_subtype_t ;
typedef int sctp_disposition_t ;
typedef int sctp_cmd_seq_t ;
struct TYPE_5__ {int sk; } ;
struct TYPE_4__ {int vtag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (struct sctp_packet*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ) ;
 struct sctp_chunk* FUNC_4 (struct sctp_association const*,struct sctp_chunk*,int ) ;
 int FUNC_5 (struct sctp_packet*) ;
 struct sctp_packet* FUNC_6 (struct sctp_association const*,struct sctp_chunk*) ;
 int FUNC_7 (struct sctp_packet*,struct sctp_chunk*) ;
 int FUNC_8 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;
 scalar_t__ FUNC_9 (struct sctp_chunk*) ;

__attribute__((used)) static sctp_disposition_t FUNC_10(const struct sctp_endpoint *VAR_4,
     const struct sctp_association *VAR_5,
     const sctp_subtype_t VAR_6,
     void *VAR_7,
     sctp_cmd_seq_t *VAR_8)
{
 struct sctp_packet *VAR_9 = ((void*)0);
 struct sctp_chunk *VAR_10 = VAR_7;
 struct sctp_chunk *VAR_11;

 VAR_9 = FUNC_6(VAR_5, VAR_10);

 if (VAR_9) {



  VAR_11 = FUNC_4(VAR_5, VAR_10, 0);
  if (!VAR_11) {
   FUNC_5(VAR_9);
   return VAR_2;
  }


  if (FUNC_9(VAR_11))
   VAR_9->vtag = FUNC_2(VAR_10->sctp_hdr->vtag);


  VAR_11->skb->sk = VAR_4->base.sk;

  FUNC_7(VAR_9, VAR_11);

  FUNC_3(VAR_8, VAR_0,
    FUNC_1(VAR_9));

  FUNC_0(VAR_3);

  FUNC_8(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
  return VAR_1;
 }

 return VAR_2;
}
