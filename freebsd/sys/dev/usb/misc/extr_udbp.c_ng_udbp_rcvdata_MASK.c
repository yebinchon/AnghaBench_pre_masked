
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ng_bt_mbufq {int dummy; } ;
struct udbp_softc {int sc_mtx; int * sc_xfer; struct ng_bt_mbufq sc_xmitq; struct ng_bt_mbufq sc_xmitq_hipri; } ;
struct ng_tag_prio {scalar_t__ priority; } ;
struct mbuf {int dummy; } ;
typedef int item_p ;
typedef int hook_p ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct mbuf*) ;
 int VAR_2 ;
 int FUNC_1 (struct ng_bt_mbufq*) ;
 int FUNC_2 (struct ng_bt_mbufq*,struct mbuf*) ;
 scalar_t__ FUNC_3 (struct ng_bt_mbufq*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mbuf*) ;
 int FUNC_6 (int ) ;
 struct udbp_softc* FUNC_7 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ FUNC_8 (struct mbuf*,int ,int ,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int
FUNC_12(hook_p VAR_6, item_p VAR_7)
{
 struct udbp_softc *VAR_8 = FUNC_7(FUNC_6(VAR_6));
 struct ng_bt_mbufq *VAR_9;
 struct mbuf *VAR_10;
 struct ng_tag_prio *VAR_11;
 int VAR_12;

 if (VAR_8 == ((void*)0)) {
  FUNC_4(VAR_7);
  return (VAR_0);
 }
 FUNC_0(VAR_7, VAR_10);
 FUNC_4(VAR_7);




 VAR_11 = (void *)FUNC_8(VAR_10, VAR_2,
     VAR_4, ((void*)0));

 if (VAR_11 && (VAR_11->priority > VAR_3))
  VAR_9 = &VAR_8->sc_xmitq_hipri;
 else
  VAR_9 = &VAR_8->sc_xmitq;

 FUNC_9(&VAR_8->sc_mtx);

 if (FUNC_3(VAR_9)) {
  FUNC_1(VAR_9);
  FUNC_5(VAR_10);
  VAR_12 = VAR_1;
 } else {
  FUNC_2(VAR_9, VAR_10);



  FUNC_11(VAR_8->sc_xfer[VAR_5]);
  VAR_12 = 0;
 }

 FUNC_10(&VAR_8->sc_mtx);

 return (VAR_12);
}
