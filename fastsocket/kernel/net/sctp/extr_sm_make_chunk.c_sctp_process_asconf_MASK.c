
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int length; } ;
struct TYPE_14__ {TYPE_3__ param_hdr; } ;
union sctp_addr_param {TYPE_4__ v4; } ;
struct sctp_chunk {int transmitted_list; TYPE_2__* skb; TYPE_1__* chunk_hdr; } ;
struct TYPE_16__ {int addip_serial; } ;
struct sctp_association {int asconf_ack_list; TYPE_6__ peer; } ;
typedef int sctp_chunkhdr_t ;
struct TYPE_17__ {int serial; } ;
typedef TYPE_7__ sctp_addiphdr_t ;
struct TYPE_15__ {int length; } ;
struct TYPE_18__ {TYPE_5__ param_hdr; int crr_id; } ;
typedef TYPE_8__ sctp_addip_param_t ;
typedef int __u32 ;
typedef scalar_t__ __be16 ;
struct TYPE_12__ {scalar_t__ data; } ;
struct TYPE_11__ {int length; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sctp_chunk*,int ,scalar_t__,TYPE_8__*) ;
 int FUNC_4 (struct sctp_chunk*) ;
 struct sctp_chunk* FUNC_5 (struct sctp_association*,int ,int) ;
 scalar_t__ FUNC_6 (struct sctp_association*,struct sctp_chunk*,TYPE_8__*) ;

struct sctp_chunk *FUNC_7(struct sctp_association *VAR_2,
           struct sctp_chunk *VAR_3)
{
 sctp_addiphdr_t *VAR_4;
 union sctp_addr_param *VAR_5;
 sctp_addip_param_t *VAR_6;
 struct sctp_chunk *VAR_7;

 __be16 VAR_8;
 int VAR_9 = 0;
 int VAR_10;
 __u32 VAR_11;
 int VAR_12 = 1;

 VAR_10 = FUNC_2(VAR_3->chunk_hdr->length) - sizeof(sctp_chunkhdr_t);
 VAR_4 = (sctp_addiphdr_t *)VAR_3->skb->data;
 VAR_11 = FUNC_1(VAR_4->serial);


 VAR_9 = sizeof(sctp_addiphdr_t);
 VAR_5 = (union sctp_addr_param *)(VAR_3->skb->data + VAR_9);
 VAR_10 -= VAR_9;




 VAR_9 = FUNC_2(VAR_5->v4.param_hdr.length);
 VAR_6 = (sctp_addip_param_t *)((void *)VAR_5 + VAR_9);
 VAR_10 -= VAR_9;






 VAR_7 = FUNC_5(VAR_2, VAR_11, VAR_10 * 4);
 if (!VAR_7)
  goto done;


 while (VAR_10 > 0) {
  VAR_8 = FUNC_6(VAR_2, VAR_3,
           VAR_6);







  if (VAR_0 != VAR_8)
   VAR_12 = 0;

  if (!VAR_12)
   FUNC_3(VAR_7,
       VAR_6->crr_id, VAR_8,
       VAR_6);






  if (VAR_1 == VAR_8)
   goto done;


  VAR_9 = FUNC_2(VAR_6->param_hdr.length);
  VAR_6 = (sctp_addip_param_t *)((void *)VAR_6 +
            VAR_9);
  VAR_10 -= VAR_9;
 }

done:
 VAR_2->peer.addip_serial++;




 if (VAR_7) {
  FUNC_4(VAR_7);
  FUNC_0(&VAR_7->transmitted_list,
         &VAR_2->asconf_ack_list);
 }

 return VAR_7;
}
