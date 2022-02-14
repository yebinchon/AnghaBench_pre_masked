
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef union sctp_addr {int dummy; } sctp_addr ;
struct sctp_transport {int packet; } ;
struct sctp_packet {int dummy; } ;
struct sctp_chunk {int dest; TYPE_6__* sctp_hdr; TYPE_4__* chunk_hdr; } ;
struct TYPE_10__ {int init_tag; } ;
struct TYPE_11__ {TYPE_2__ i; } ;
struct sctp_association {TYPE_3__ peer; } ;
struct TYPE_9__ {int init_tag; } ;
struct TYPE_15__ {TYPE_1__ init_hdr; } ;
typedef TYPE_7__ sctp_initack_chunk_t ;
struct TYPE_13__ {int init_tag; } ;
struct TYPE_16__ {TYPE_5__ init_hdr; } ;
typedef TYPE_8__ sctp_init_chunk_t ;
typedef int __u32 ;
typedef int __u16 ;
struct TYPE_14__ {int vtag; int source; int dest; } ;
struct TYPE_12__ {int type; } ;


 int VAR_0 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 struct sctp_packet* FUNC_3 (struct sctp_packet*,int ,int ) ;
 struct sctp_packet* FUNC_4 (int *,struct sctp_transport*,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sctp_chunk const*) ;
 struct sctp_transport* FUNC_7 (int ,int ) ;
 int FUNC_8 (struct sctp_transport*,union sctp_addr*,int ) ;

__attribute__((used)) static struct sctp_packet *FUNC_9(const struct sctp_association *VAR_1,
          const struct sctp_chunk *VAR_2)
{
 struct sctp_packet *VAR_3;
 struct sctp_transport *VAR_4;
 __u16 VAR_5;
 __u16 VAR_6;
 __u32 VAR_7;


 VAR_5 = FUNC_1(VAR_2->sctp_hdr->dest);
 VAR_6 = FUNC_1(VAR_2->sctp_hdr->source);




 if (VAR_1) {



  switch(VAR_2->chunk_hdr->type) {
  case 128:
  {
   sctp_initack_chunk_t *VAR_8;

   VAR_8 = (sctp_initack_chunk_t *)VAR_2->chunk_hdr;
   VAR_7 = FUNC_0(VAR_8->init_hdr.init_tag);
   break;
  }
  default:
   VAR_7 = VAR_1->peer.i.init_tag;
   break;
  }
 } else {



  switch(VAR_2->chunk_hdr->type) {
  case 129:
  {
   sctp_init_chunk_t *VAR_9;

   VAR_9 = (sctp_init_chunk_t *)VAR_2->chunk_hdr;
   VAR_7 = FUNC_0(VAR_9->init_hdr.init_tag);
   break;
  }
  default:
   VAR_7 = FUNC_0(VAR_2->sctp_hdr->vtag);
   break;
  }
 }


 VAR_4 = FUNC_7(FUNC_6(VAR_2), VAR_0);
 if (!VAR_4)
  goto nomem;




 FUNC_8(VAR_4, (union sctp_addr *)&VAR_2->dest,
        FUNC_5(FUNC_2()));

 VAR_3 = FUNC_4(&VAR_4->packet, VAR_4, VAR_5, VAR_6);
 VAR_3 = FUNC_3(VAR_3, VAR_7, 0);

 return VAR_3;

nomem:
 return ((void*)0);
}
