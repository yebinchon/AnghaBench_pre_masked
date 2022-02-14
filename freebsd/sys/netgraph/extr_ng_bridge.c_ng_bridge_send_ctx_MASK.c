
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ng_bridge_send_ctx {int error; int manycast; TYPE_3__* incoming; int m; TYPE_3__* foundFirst; } ;
struct TYPE_5__ {scalar_t__ len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
typedef TYPE_3__* link_p ;
typedef int hook_p ;
struct TYPE_6__ {int xmitBroadcasts; int xmitMulticasts; int xmitOctets; int xmitPackets; int memoryFailures; } ;
struct TYPE_7__ {int hook; TYPE_2__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (int,int ,struct mbuf*) ;
 struct mbuf* FUNC_2 (int ,int ) ;

__attribute__((used)) static int
FUNC_3(hook_p VAR_2, void *VAR_3)
{
 struct ng_bridge_send_ctx *VAR_4 = VAR_3;
 link_p VAR_5 = FUNC_0(VAR_2);
 struct mbuf *VAR_6 = ((void*)0);
 int VAR_7 = 0;


 if (VAR_5 == VAR_4->incoming) {
  return (1);
 }

 if (VAR_4->foundFirst == ((void*)0)) {





  VAR_4->foundFirst = VAR_5;
  return (1);
 }





 VAR_6 = FUNC_2(VAR_4->m, VAR_1);
 if (VAR_6 == ((void*)0)) {
  VAR_4->incoming->stats.memoryFailures++;
  VAR_4->error = VAR_0;
  return (0);
 }



 VAR_5->stats.xmitPackets++;
 VAR_5->stats.xmitOctets += VAR_6->m_pkthdr.len;
 switch (VAR_4->manycast) {
  default:
  break;
  case 1:
  VAR_5->stats.xmitMulticasts++;
  break;
  case 2:
  VAR_5->stats.xmitBroadcasts++;
  break;
 }


 FUNC_1(VAR_7, VAR_5->hook, VAR_6);
 if(VAR_7)
   VAR_4->error = VAR_7;
 return (1);
}
