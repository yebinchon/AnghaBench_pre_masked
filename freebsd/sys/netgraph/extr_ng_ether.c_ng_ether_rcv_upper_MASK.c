
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int len; struct ifnet* rcvif; } ;
struct mbuf {int m_len; TYPE_1__ m_pkthdr; } ;
struct ifnet {scalar_t__ if_bridge; } ;
struct ether_header {int dummy; } ;
struct epoch_tracker {int dummy; } ;
typedef TYPE_2__* priv_p ;
typedef int node_p ;
typedef int item_p ;
typedef int hook_p ;
struct TYPE_5__ {struct ifnet* ifp; } ;


 int FUNC_0 (struct ifnet*,struct mbuf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct epoch_tracker) ;
 int FUNC_2 (struct epoch_tracker) ;
 int FUNC_3 (int ,struct mbuf*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mbuf*) ;
 int FUNC_6 (int ) ;
 TYPE_2__* FUNC_7 (int const) ;
 int FUNC_8 (struct ifnet*,struct mbuf*) ;
 struct mbuf* FUNC_9 (struct mbuf*,int) ;

__attribute__((used)) static int
FUNC_10(hook_p VAR_2, item_p VAR_3)
{
 struct epoch_tracker VAR_4;
 struct mbuf *VAR_5;
 const node_p VAR_6 = FUNC_6(VAR_2);
 const priv_p VAR_7 = FUNC_7(VAR_6);
 struct ifnet *VAR_8 = VAR_7->ifp;

 FUNC_3(VAR_3, VAR_5);
 FUNC_4(VAR_3);


 if (VAR_5->m_pkthdr.len < sizeof(struct ether_header)) {
  FUNC_5(VAR_5);
  return (VAR_0);
 }
 if (VAR_5->m_len < sizeof(struct ether_header) &&
     (VAR_5 = FUNC_9(VAR_5, sizeof(struct ether_header))) == ((void*)0))
  return (VAR_1);

 VAR_5->m_pkthdr.rcvif = VAR_8;


 if (VAR_8->if_bridge) {
  FUNC_0(VAR_8, VAR_5);
  if (VAR_5 == ((void*)0))
   return (0);
 }


 FUNC_1(VAR_4);
 FUNC_8(VAR_8, VAR_5);
 FUNC_2(VAR_4);
 return (0);
}
