
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_2__ {struct my_chain* my_tx_head; struct my_chain* my_tx_tail; } ;
struct my_softc {TYPE_1__ my_cdata; scalar_t__ my_timer; struct ifnet* my_ifp; } ;
struct my_chain {struct my_chain* my_nextdesc; int * my_mbuf; } ;
struct ifnet {int dummy; } ;


 int FUNC_0 (struct my_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct my_softc*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct my_chain*) ;
 int VAR_13 ;
 int FUNC_3 (struct ifnet*,int ,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct my_softc * VAR_14)
{
 struct my_chain *VAR_15;
 struct ifnet *VAR_16;

 FUNC_1(VAR_14);
 VAR_16 = VAR_14->my_ifp;

 VAR_14->my_timer = 0;
 if (VAR_14->my_cdata.my_tx_head == ((void*)0)) {
  return;
 }




 while (VAR_14->my_cdata.my_tx_head->my_mbuf != ((void*)0)) {
  u_int32_t VAR_17;

  VAR_15 = VAR_14->my_cdata.my_tx_head;
  VAR_17 = FUNC_2(VAR_15);
  if ((VAR_17 & VAR_9) || VAR_17 == VAR_13)
   break;
  if (!(FUNC_0(VAR_14, VAR_10) & VAR_4)) {
   if (VAR_17 & VAR_12) {
    FUNC_3(VAR_16, VAR_1, 1);
    if (VAR_17 & VAR_3)
     FUNC_3(VAR_16, VAR_0, 1);
    if (VAR_17 & VAR_5)
     FUNC_3(VAR_16, VAR_0, 1);
   }
   FUNC_3(VAR_16, VAR_0,
       (VAR_17 & VAR_6) >> VAR_8);
  }
  FUNC_3(VAR_16, VAR_2, 1);
  FUNC_4(VAR_15->my_mbuf);
  VAR_15->my_mbuf = ((void*)0);
  if (VAR_14->my_cdata.my_tx_head == VAR_14->my_cdata.my_tx_tail) {
   VAR_14->my_cdata.my_tx_head = ((void*)0);
   VAR_14->my_cdata.my_tx_tail = ((void*)0);
   break;
  }
  VAR_14->my_cdata.my_tx_head = VAR_15->my_nextdesc;
 }
 if (FUNC_0(VAR_14, VAR_10) & VAR_4) {
  FUNC_3(VAR_16, VAR_0, (FUNC_0(VAR_14, VAR_11) & VAR_7));
 }
 return;
}
