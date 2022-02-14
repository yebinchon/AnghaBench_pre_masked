
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct ifnet* rcvif; } ;
struct mbuf {scalar_t__ m_len; TYPE_1__ m_pkthdr; } ;
struct ifnet {int if_flags; int if_drv_flags; int (* if_input ) (struct ifnet* const,struct mbuf*) ;} ;
typedef TYPE_2__* priv_p ;
typedef int item_p ;
typedef int hook_p ;
struct TYPE_5__ {struct ifnet* ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,struct mbuf*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mbuf*) ;
 int FUNC_3 (int ) ;
 TYPE_2__* FUNC_4 (int ) ;
 int FUNC_5 (struct ifnet* const,int ,int) ;
 struct mbuf* FUNC_6 (struct mbuf*,scalar_t__) ;
 int FUNC_7 (struct ifnet* const,struct mbuf*) ;

__attribute__((used)) static int
FUNC_8(hook_p VAR_6, item_p VAR_7)
{
 const priv_p VAR_8 = FUNC_4(FUNC_3(VAR_6));
 struct ifnet *const VAR_9 = VAR_8->ifp;
 struct mbuf *VAR_10;

 FUNC_0(VAR_7, VAR_10);
 FUNC_1(VAR_7);

 if (!((VAR_9->if_flags & VAR_5) &&
     (VAR_9->if_drv_flags & VAR_4))) {
  FUNC_2(VAR_10);
  return (VAR_1);
 }

 if (VAR_10->m_len < VAR_2) {
  VAR_10 = FUNC_6(VAR_10, VAR_2);
  if (VAR_10 == ((void*)0))
   return (VAR_0);
 }


 VAR_10->m_pkthdr.rcvif = VAR_9;


 FUNC_5(VAR_9, VAR_3, 1);

 (*VAR_9->if_input)(VAR_9, VAR_10);


 return (0);
}
