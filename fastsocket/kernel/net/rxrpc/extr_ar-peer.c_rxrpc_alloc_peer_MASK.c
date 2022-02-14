
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udphdr {int dummy; } ;
struct TYPE_2__ {scalar_t__ family; } ;
struct sockaddr_rxrpc {int transport_type; TYPE_1__ transport; } ;
struct rxrpc_peer {int hdrsize; scalar_t__ mtu; scalar_t__ maxdata; scalar_t__ if_mtu; int srx; int debug_id; int usage; int lock; int error_targets; int link; int destroyer; } ;
struct rxrpc_header {int dummy; } ;
struct iphdr {int dummy; } ;
typedef int gfp_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;

 int FUNC_3 (char*) ;
 int FUNC_4 (char*,struct rxrpc_peer*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 struct rxrpc_peer* FUNC_7 (int,int ) ;
 int FUNC_8 (int *,struct sockaddr_rxrpc*,int) ;
 int FUNC_9 (struct rxrpc_peer*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_10 (int *) ;

__attribute__((used)) static struct rxrpc_peer *FUNC_11(struct sockaddr_rxrpc *VAR_3,
        gfp_t VAR_4)
{
 struct rxrpc_peer *VAR_5;

 FUNC_3("");

 VAR_5 = FUNC_7(sizeof(struct rxrpc_peer), VAR_4);
 if (VAR_5) {
  FUNC_2(&VAR_5->destroyer, &VAR_2);
  FUNC_1(&VAR_5->link);
  FUNC_1(&VAR_5->error_targets);
  FUNC_10(&VAR_5->lock);
  FUNC_6(&VAR_5->usage, 1);
  VAR_5->debug_id = FUNC_5(&VAR_1);
  FUNC_8(&VAR_5->srx, VAR_3, sizeof(*VAR_3));

  FUNC_9(VAR_5);
  VAR_5->mtu = VAR_5->if_mtu;

  if (VAR_3->transport.family == VAR_0) {
   VAR_5->hdrsize = sizeof(struct iphdr);
   switch (VAR_3->transport_type) {
   case 128:
    VAR_5->hdrsize += sizeof(struct udphdr);
    break;
   default:
    FUNC_0();
    break;
   }
  } else {
   FUNC_0();
  }

  VAR_5->hdrsize += sizeof(struct rxrpc_header);
  VAR_5->maxdata = VAR_5->mtu - VAR_5->hdrsize;
 }

 FUNC_4(" = %p", VAR_5);
 return VAR_5;
}
