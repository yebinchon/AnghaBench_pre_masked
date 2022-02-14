
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sctp_cookie {int raw_addr_list_len; TYPE_5__* peer_init; } ;
struct TYPE_12__ {int bind_addr; } ;
struct sctp_association {TYPE_3__* ep; TYPE_6__ base; } ;
typedef int gfp_t ;
typedef int __u8 ;
struct TYPE_10__ {int length; } ;
struct TYPE_11__ {TYPE_4__ chunk_hdr; } ;
struct TYPE_7__ {int port; } ;
struct TYPE_8__ {TYPE_1__ bind_addr; } ;
struct TYPE_9__ {TYPE_2__ base; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int,int ,int ) ;

int FUNC_2(struct sctp_association *VAR_0,
      struct sctp_cookie *VAR_1,
      gfp_t VAR_2)
{
 int VAR_3 = FUNC_0(VAR_1->peer_init->chunk_hdr.length);
 int VAR_4 = VAR_1->raw_addr_list_len;
 __u8 *VAR_5 = (__u8 *)VAR_1->peer_init + VAR_3;

 return FUNC_1(&VAR_0->base.bind_addr, VAR_5, VAR_4,
          VAR_0->ep->base.bind_addr.port, VAR_2);
}
