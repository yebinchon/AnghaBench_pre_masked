
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sctp_chunk {TYPE_2__* skb; TYPE_1__* chunk_hdr; } ;
struct TYPE_10__ {int cause; } ;
typedef TYPE_4__ sctp_errhdr_t ;
typedef int sctp_chunkhdr_t ;
typedef int sctp_addiphdr_t ;
struct TYPE_9__ {int type; int length; } ;
struct TYPE_11__ {scalar_t__ crr_id; TYPE_3__ param_hdr; } ;
typedef TYPE_5__ sctp_addip_param_t ;
typedef int __be16 ;
struct TYPE_8__ {scalar_t__ data; } ;
struct TYPE_7__ {int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int ) ;

__attribute__((used)) static __be16 FUNC_1(struct sctp_chunk *VAR_3,
          sctp_addip_param_t *VAR_4,
          int VAR_5)
{
 sctp_addip_param_t *VAR_6;
 sctp_errhdr_t *VAR_7;
 int VAR_8;
 int VAR_9;
 __be16 VAR_10;

 if (VAR_5)
  VAR_10 = VAR_1;
 else
  VAR_10 = VAR_2;

 VAR_9 = FUNC_0(VAR_3->chunk_hdr->length) -
        sizeof(sctp_chunkhdr_t);




 VAR_8 = sizeof(sctp_addiphdr_t);
 VAR_6 = (sctp_addip_param_t *)(VAR_3->skb->data +
        VAR_8);
 VAR_9 -= VAR_8;

 while (VAR_9 > 0) {
  if (VAR_6->crr_id == VAR_4->crr_id) {
   switch(VAR_6->param_hdr.type) {
   case 128:
    return VAR_1;
   case 129:
    VAR_8 = sizeof(sctp_addip_param_t);
    VAR_7 = (sctp_errhdr_t *)
        ((void *)VAR_6 + VAR_8);
    VAR_9 -= VAR_8;
    if (VAR_9 > 0)
     return VAR_7->cause;
    else
     return VAR_0;
    break;
   default:
    return VAR_0;
   }
  }

  VAR_8 = FUNC_0(VAR_6->param_hdr.length);
  VAR_6 = (sctp_addip_param_t *)
     ((void *)VAR_6 + VAR_8);
  VAR_9 -= VAR_8;
 }

 return VAR_10;
}
