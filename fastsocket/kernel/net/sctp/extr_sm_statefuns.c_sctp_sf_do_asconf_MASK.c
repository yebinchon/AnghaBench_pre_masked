
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int length; } ;
union sctp_addr_param {TYPE_2__ p; } ;
struct sctp_paramhdr {int dummy; } ;
struct sctp_endpoint {int dummy; } ;
struct sctp_chunk {int source; int dest; int * transport; int has_asconf; scalar_t__ chunk_end; TYPE_1__* skb; int auth; } ;
struct TYPE_7__ {scalar_t__ addip_serial; } ;
struct sctp_association {TYPE_3__ peer; } ;
typedef int sctp_subtype_t ;
typedef int sctp_paramhdr_t ;
typedef int sctp_disposition_t ;
typedef int sctp_cmd_seq_t ;
struct TYPE_8__ {int serial; scalar_t__ params; } ;
typedef TYPE_4__ sctp_addiphdr_t ;
typedef int sctp_addip_chunk_t ;
typedef scalar_t__ __u32 ;
struct TYPE_5__ {scalar_t__ data; } ;


 int FUNC_0 (struct sctp_chunk*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int VAR_5 ;
 int FUNC_5 (struct sctp_association const*) ;
 struct sctp_chunk* FUNC_6 (struct sctp_association const*,int ) ;
 int FUNC_7 (struct sctp_chunk*,int) ;
 struct sctp_chunk* FUNC_8 (struct sctp_association*,struct sctp_chunk*) ;
 int FUNC_9 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;
 int FUNC_10 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;
 int FUNC_11 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;
 int FUNC_12 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,void*,int *) ;
 int FUNC_13 (struct sctp_association const*,int *,void*,struct sctp_paramhdr**) ;
 int FUNC_14 (struct sctp_chunk*,struct sctp_association const*) ;

sctp_disposition_t FUNC_15(const struct sctp_endpoint *VAR_6,
         const struct sctp_association *VAR_7,
         const sctp_subtype_t VAR_8, void *VAR_9,
         sctp_cmd_seq_t *VAR_10)
{
 struct sctp_chunk *VAR_11 = VAR_9;
 struct sctp_chunk *VAR_12 = ((void*)0);
 struct sctp_paramhdr *VAR_13 = ((void*)0);
 sctp_addiphdr_t *VAR_14;
 union sctp_addr_param *VAR_15;
 __u32 VAR_16;
 int VAR_17;

 if (!FUNC_14(VAR_11, VAR_7)) {
  FUNC_4(VAR_10, VAR_1,
    FUNC_1());
  return FUNC_10(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
 }







 if (!VAR_5 && !VAR_11->auth)
  return FUNC_9(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);


 if (!FUNC_7(VAR_11, sizeof(sctp_addip_chunk_t)))
  return FUNC_11(VAR_6, VAR_7, VAR_8, VAR_9,
        VAR_10);

 VAR_14 = (sctp_addiphdr_t *)VAR_11->skb->data;
 VAR_16 = FUNC_2(VAR_14->serial);

 VAR_15 = (union sctp_addr_param *)VAR_14->params;
 VAR_17 = FUNC_3(VAR_15->p.length);
 if (VAR_17 < sizeof(sctp_paramhdr_t))
  return FUNC_12(VAR_6, VAR_7, VAR_8, VAR_9,
      (void *)VAR_15, VAR_10);


 if (!FUNC_13(VAR_7,
       (sctp_paramhdr_t *)((void *)VAR_15 + VAR_17),
       (void *)VAR_11->chunk_end,
       &VAR_13))
  return FUNC_12(VAR_6, VAR_7, VAR_8, VAR_9,
        (void *)VAR_13, VAR_10);





 if (VAR_16 == VAR_7->peer.addip_serial + 1) {



  if (!VAR_11->has_asconf)
   FUNC_5(VAR_7);
  VAR_12 = FUNC_8((struct sctp_association *)
       VAR_7, VAR_11);
  if (!VAR_12)
   return VAR_4;
 } else if (VAR_16 < VAR_7->peer.addip_serial + 1) {
  VAR_12 = FUNC_6(VAR_7, VAR_14->serial);
  if (!VAR_12)
   return VAR_3;





  VAR_12->transport = ((void*)0);
 } else {



  return VAR_3;
 }
 VAR_12->dest = VAR_11->source;
 FUNC_4(VAR_10, VAR_0, FUNC_0(VAR_12));

 return VAR_2;
}
