
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vlan_snd_tag {TYPE_2__* tag; } ;
struct TYPE_3__ {int len; int csum_flags; struct m_snd_tag* snd_tag; } ;
struct mbuf {int m_flags; TYPE_1__ m_pkthdr; } ;
struct m_snd_tag {struct ifnet* ifp; } ;
struct ifvlan {int ifv_pcp; int ifv_vid; } ;
struct ifnet {int (* if_transmit ) (struct ifnet*,struct mbuf*) ;struct ifvlan* if_softc; } ;
struct TYPE_4__ {struct ifnet* ifp; } ;


 int FUNC_0 (struct ifnet*,struct mbuf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 () ;
 struct ifnet* FUNC_3 (struct ifvlan*) ;
 int * FUNC_4 (struct ifvlan*) ;
 int FUNC_5 (struct ifnet*) ;
 int FUNC_6 (struct mbuf**,struct ifnet*,struct ifnet*,int ,int ) ;
 int FUNC_7 (struct ifnet*,int ,int) ;
 int FUNC_8 (struct mbuf*) ;
 struct m_snd_tag* FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (struct m_snd_tag*) ;
 struct vlan_snd_tag* FUNC_11 (struct m_snd_tag*) ;
 int FUNC_12 (struct ifnet*,struct mbuf*) ;

__attribute__((used)) static int
FUNC_13(struct ifnet *VAR_9, struct mbuf *VAR_10)
{
 struct ifvlan *VAR_11;
 struct ifnet *VAR_12;
 int VAR_13, VAR_14, VAR_15;

 FUNC_2();

 VAR_11 = VAR_9->if_softc;
 if (FUNC_4(VAR_11) == ((void*)0)) {
  FUNC_7(VAR_9, VAR_4, 1);
  FUNC_8(VAR_10);
  return (VAR_2);
 }
 VAR_12 = FUNC_3(VAR_11);
 VAR_14 = VAR_10->m_pkthdr.len;
 VAR_15 = (VAR_10->m_flags & (VAR_8 | VAR_7)) ? 1 : 0;

 FUNC_0(VAR_9, VAR_10);
 if (!FUNC_5(VAR_12)) {
  FUNC_7(VAR_9, VAR_4, 1);
  FUNC_8(VAR_10);
  return (VAR_2);
 }

 if (!FUNC_6(&VAR_10, VAR_9, VAR_12, VAR_11->ifv_vid, VAR_11->ifv_pcp)) {
  FUNC_7(VAR_9, VAR_4, 1);
  return (0);
 }




 VAR_13 = (VAR_12->if_transmit)(VAR_12, VAR_10);
 if (VAR_13 == 0) {
  FUNC_7(VAR_9, VAR_6, 1);
  FUNC_7(VAR_9, VAR_3, VAR_14);
  FUNC_7(VAR_9, VAR_5, VAR_15);
 } else
  FUNC_7(VAR_9, VAR_4, 1);
 return (VAR_13);
}
