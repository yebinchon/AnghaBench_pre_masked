
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int s_addr; } ;
struct TYPE_11__ {TYPE_1__ sin_addr; } ;
struct TYPE_12__ {int family; TYPE_2__ sin; } ;
struct TYPE_13__ {TYPE_3__ transport; } ;
struct rxrpc_peer {int if_mtu; TYPE_4__ srx; } ;
struct TYPE_18__ {int dst; } ;
struct rtable {TYPE_9__ u; } ;
struct TYPE_16__ {void* dport; void* sport; } ;
struct TYPE_17__ {TYPE_7__ ports; } ;
struct TYPE_14__ {int tos; int daddr; int saddr; } ;
struct TYPE_15__ {TYPE_5__ ip4_u; } ;
struct flowi {TYPE_8__ uli_u; TYPE_6__ nl_u; int proto; int oif; } ;
typedef int fl ;



 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int) ;
 int VAR_1 ;
 int FUNC_5 (int *,struct rtable**,struct flowi*) ;
 int FUNC_6 (struct flowi*,int ,int) ;

__attribute__((used)) static void FUNC_7(struct rxrpc_peer *VAR_2)
{
 struct rtable *VAR_3;
 struct flowi VAR_4;
 int VAR_5;

 VAR_2->if_mtu = 1500;

 FUNC_6(&VAR_4, 0, sizeof(VAR_4));

 switch (VAR_2->srx.transport.family) {
 case 128:
  VAR_4.oif = 0;
  VAR_4.proto = VAR_0,
  VAR_4.nl_u.ip4_u.saddr = 0;
  VAR_4.nl_u.ip4_u.daddr = VAR_2->srx.transport.sin.sin_addr.s_addr;
  VAR_4.nl_u.ip4_u.tos = 0;

  VAR_4.uli_u.ports.sport = FUNC_4(7001);
  VAR_4.uli_u.ports.dport = FUNC_4(7000);
  break;
 default:
  FUNC_0();
 }

 VAR_5 = FUNC_5(&VAR_1, &VAR_3, &VAR_4);
 if (VAR_5 < 0) {
  FUNC_1(" [route err %d]", VAR_5);
  return;
 }

 VAR_2->if_mtu = FUNC_2(&VAR_3->u.dst);
 FUNC_3(&VAR_3->u.dst);

 FUNC_1(" [if_mtu %u]", VAR_2->if_mtu);
}
