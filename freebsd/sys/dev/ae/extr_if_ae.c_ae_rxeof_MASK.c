
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_9__ {int ether_vtag; } ;
struct mbuf {int m_flags; TYPE_1__ m_pkthdr; } ;
struct ifnet {int if_capenable; int (* if_input ) (struct ifnet*,struct mbuf*) ;} ;
struct TYPE_10__ {struct ifnet* ifp; } ;
typedef TYPE_2__ ae_softc_t ;
struct TYPE_11__ {int vlan; int * data; int len; int flags; } ;
typedef TYPE_3__ ae_rxd_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct ifnet*,int ,int) ;
 int FUNC_5 (struct ifnet*,char*) ;
 unsigned int FUNC_6 (int ) ;
 struct mbuf* FUNC_7 (int *,unsigned int,int ,struct ifnet*,int *) ;
 int FUNC_8 (struct ifnet*,struct mbuf*) ;

__attribute__((used)) static void
FUNC_9(ae_softc_t *VAR_10, ae_rxd_t *VAR_11)
{
 struct ifnet *VAR_12;
 struct mbuf *VAR_13;
 unsigned int VAR_14;
 uint16_t VAR_15;

 FUNC_1(VAR_10);

 VAR_12 = VAR_10->ifp;
 VAR_15 = FUNC_6(VAR_11->flags);




 VAR_14 = FUNC_6(VAR_11->len) - VAR_2;
 if (VAR_14 < (VAR_3 - VAR_2 - VAR_4)) {
  FUNC_5(VAR_12, "Runt frame received.");
  FUNC_4(VAR_12, VAR_6, 1);
  return;
 }

 VAR_13 = FUNC_7(&VAR_11->data[0], VAR_14, VAR_1, VAR_12, ((void*)0));
 if (VAR_13 == ((void*)0)) {
  FUNC_4(VAR_12, VAR_8, 1);
  return;
 }

 if ((VAR_12->if_capenable & VAR_5) != 0 &&
     (VAR_15 & VAR_0) != 0) {
  VAR_13->m_pkthdr.ether_vtag = FUNC_2(FUNC_6(VAR_11->vlan));
  VAR_13->m_flags |= VAR_9;
 }

 FUNC_4(VAR_12, VAR_7, 1);



 FUNC_3(VAR_10);
 (*VAR_12->if_input)(VAR_12, VAR_13);
 FUNC_0(VAR_10);
}
