
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
typedef int sctp_chunkhdr_t ;
struct TYPE_5__ {int sk; } ;
struct TYPE_4__ {int vtag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct sctp_packet*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (struct sctp_chunk*,int) ;
 struct sctp_chunk* FUNC_5 (struct sctp_association const*,struct sctp_chunk*) ;
 int FUNC_6 (struct sctp_packet*) ;
 struct sctp_packet* FUNC_7 (struct sctp_association const*,struct sctp_chunk*) ;
 int FUNC_8 (struct sctp_packet*,struct sctp_chunk*) ;
 int FUNC_9 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;
 scalar_t__ FUNC_10 (struct sctp_chunk*) ;

__attribute__((used)) static sctp_disposition_t FUNC_11(const struct sctp_endpoint *VAR_3,
          const struct sctp_association *VAR_4,
          const sctp_subtype_t VAR_5,
          void *VAR_6,
          sctp_cmd_seq_t *VAR_7)
{
 struct sctp_packet *VAR_8 = ((void*)0);
 struct sctp_chunk *VAR_9 = VAR_6;
 struct sctp_chunk *VAR_10;

 VAR_8 = FUNC_7(VAR_4, VAR_9);

 if (VAR_8) {



  VAR_10 = FUNC_5(VAR_4, VAR_9);
  if (!VAR_10) {
   FUNC_6(VAR_8);
   return VAR_1;
  }


  if (FUNC_10(VAR_10))
   VAR_8->vtag = FUNC_2(VAR_9->sctp_hdr->vtag);


  VAR_10->skb->sk = VAR_3->base.sk;

  FUNC_8(VAR_8, VAR_10);

  FUNC_3(VAR_7, VAR_0,
    FUNC_1(VAR_8));

  FUNC_0(VAR_2);




  if (!FUNC_4(VAR_9, sizeof(sctp_chunkhdr_t)))
   return FUNC_9(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);





  return FUNC_9(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 }

 return VAR_1;
}
