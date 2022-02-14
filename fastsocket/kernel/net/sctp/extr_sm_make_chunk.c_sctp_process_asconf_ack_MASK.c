
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int length; } ;
struct TYPE_10__ {TYPE_1__ param_hdr; } ;
union sctp_addr_param {TYPE_2__ v4; } ;
struct sctp_chunk {int transmitted_list; TYPE_3__* skb; } ;
struct TYPE_12__ {int addip_disabled_mask; } ;
struct sctp_association {struct sctp_chunk* addip_last_asconf; TYPE_4__ peer; } ;
typedef int sctp_addiphdr_t ;
struct TYPE_13__ {int length; int type; } ;
struct TYPE_14__ {TYPE_5__ param_hdr; } ;
typedef TYPE_6__ sctp_addip_param_t ;
typedef int sctp_addip_chunk_t ;
typedef int __be16 ;
struct TYPE_11__ {int len; scalar_t__ data; } ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sctp_association*,TYPE_6__*) ;
 int FUNC_3 (struct sctp_chunk*) ;
 int FUNC_4 (struct sctp_chunk*,TYPE_6__*,int) ;

int FUNC_5(struct sctp_association *VAR_0,
       struct sctp_chunk *VAR_1)
{
 struct sctp_chunk *VAR_2 = VAR_0->addip_last_asconf;
 union sctp_addr_param *VAR_3;
 sctp_addip_param_t *VAR_4;
 int VAR_5 = 0;
 int VAR_6 = VAR_2->skb->len;
 int VAR_7 = 0;
 int VAR_8 = 1;
 int VAR_9 = 0;
 __be16 VAR_10 = 131;




 VAR_5 = sizeof(sctp_addip_chunk_t);
 VAR_3 = (union sctp_addr_param *)(VAR_2->skb->data + VAR_5);
 VAR_6 -= VAR_5;




 VAR_5 = FUNC_1(VAR_3->v4.param_hdr.length);
 VAR_4 = (sctp_addip_param_t *)((void *)VAR_3 + VAR_5);
 VAR_6 -= VAR_5;






 if (VAR_1->skb->len == sizeof(sctp_addiphdr_t))
  VAR_7 = 1;


 while (VAR_6 > 0) {
  if (VAR_7)
   VAR_10 = 131;
  else {
   VAR_10 = FUNC_4(VAR_1,
           VAR_4,
           VAR_8);
   if (VAR_8 && (131 != VAR_10))
    VAR_8 = 0;
  }

  switch (VAR_10) {
  case 131:
   FUNC_2(VAR_0, VAR_4);
   break;

  case 129:
   VAR_9 = 1;
   break;

  case 128:



   VAR_0->peer.addip_disabled_mask |=
    VAR_4->param_hdr.type;
   break;

  case 130:
  case 133:
  case 132:
  default:
    break;
  }




  VAR_5 = FUNC_1(VAR_4->param_hdr.length);
  VAR_4 = (sctp_addip_param_t *)((void *)VAR_4 +
            VAR_5);
  VAR_6 -= VAR_5;
 }


 FUNC_0(&VAR_2->transmitted_list);
 FUNC_3(VAR_2);
 VAR_0->addip_last_asconf = ((void*)0);

 return VAR_9;
}
