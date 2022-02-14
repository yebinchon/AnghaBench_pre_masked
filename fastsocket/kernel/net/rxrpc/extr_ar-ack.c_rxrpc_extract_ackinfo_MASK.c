
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct rxrpc_peer {unsigned int maxdata; scalar_t__ mtu; int lock; scalar_t__ hdrsize; } ;
struct rxrpc_call {TYPE_2__* conn; } ;
struct rxrpc_ackinfo {int maxMTU; int rxMTU; int jumbo_max; int rwind; } ;
typedef int ackinfo ;
struct TYPE_4__ {TYPE_1__* trans; } ;
struct TYPE_3__ {struct rxrpc_peer* peer; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,scalar_t__,unsigned int) ;
 int FUNC_2 (char*,unsigned int,int ,int ,int ,int ) ;
 unsigned int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int,struct rxrpc_ackinfo*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct rxrpc_call *VAR_0, struct sk_buff *VAR_1,
      unsigned VAR_2, int VAR_3)
{
 struct rxrpc_ackinfo VAR_4;
 struct rxrpc_peer *VAR_5;
 unsigned VAR_6;

 if (FUNC_5(VAR_1, VAR_3 + 3, &VAR_4, sizeof(VAR_4)) < 0) {
  FUNC_0(" [no ackinfo]");
  return;
 }

 FUNC_2("Rx ACK %%%u Info { rx=%u max=%u rwin=%u jm=%u }",
        VAR_2,
        FUNC_4(VAR_4.rxMTU), FUNC_4(VAR_4.maxMTU),
        FUNC_4(VAR_4.rwind), FUNC_4(VAR_4.jumbo_max));

 VAR_6 = FUNC_3(FUNC_4(VAR_4.rxMTU), FUNC_4(VAR_4.maxMTU));

 VAR_5 = VAR_0->conn->trans->peer;
 if (VAR_6 < VAR_5->maxdata) {
  FUNC_6(&VAR_5->lock);
  VAR_5->maxdata = VAR_6;
  VAR_5->mtu = VAR_6 + VAR_5->hdrsize;
  FUNC_7(&VAR_5->lock);
  FUNC_1("Net MTU %u (maxdata %u)", VAR_5->mtu, VAR_5->maxdata);
 }
}
