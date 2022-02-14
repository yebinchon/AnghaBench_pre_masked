
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sctp_transport {int hb_nonce; int ipaddr; } ;
struct sctp_endpoint {int dummy; } ;
struct sctp_chunk {int dummy; } ;
struct sctp_association {int dummy; } ;
typedef int sctp_subtype_t ;
struct TYPE_4__ {int length; int type; } ;
struct TYPE_5__ {int hb_nonce; int sent_at; int daddr; TYPE_1__ param_hdr; } ;
typedef TYPE_2__ sctp_sender_hb_info_t ;
typedef int sctp_disposition_t ;
typedef int sctp_cmd_seq_t ;


 int FUNC_0 (struct sctp_chunk*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sctp_transport*) ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int FUNC_3 (int *,int ,int ) ;
 struct sctp_chunk* FUNC_4 (struct sctp_association const*,struct sctp_transport*,TYPE_2__*,size_t) ;

__attribute__((used)) static sctp_disposition_t FUNC_5(const struct sctp_endpoint *VAR_6,
         const struct sctp_association *VAR_7,
         const sctp_subtype_t VAR_8,
         void *VAR_9,
         sctp_cmd_seq_t *VAR_10)
{
 struct sctp_transport *VAR_11 = (struct sctp_transport *) VAR_9;
 struct sctp_chunk *VAR_12;
 sctp_sender_hb_info_t VAR_13;
 size_t VAR_14 = 0;

 VAR_13.param_hdr.type = VAR_4;
 VAR_13.param_hdr.length = FUNC_2(sizeof(sctp_sender_hb_info_t));
 VAR_13.daddr = VAR_11->ipaddr;
 VAR_13.sent_at = VAR_5;
 VAR_13.hb_nonce = VAR_11->hb_nonce;


 VAR_14 = sizeof(sctp_sender_hb_info_t);
 VAR_12 = FUNC_4(VAR_7, VAR_11, &VAR_13, VAR_14);
 if (!VAR_12)
  return VAR_3;




 FUNC_3(VAR_10, VAR_1,
   FUNC_1(VAR_11));

 FUNC_3(VAR_10, VAR_0, FUNC_0(VAR_12));
 return VAR_2;
}
