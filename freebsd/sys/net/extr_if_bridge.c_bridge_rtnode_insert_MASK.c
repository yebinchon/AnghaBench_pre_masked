
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct bridge_softc {int sc_brtcnt; int sc_rtlist; int * sc_rthash; } ;
struct bridge_rtnode {scalar_t__ brt_vlan; int brt_addr; } ;


 int FUNC_0 (struct bridge_softc*) ;
 int VAR_0 ;
 struct bridge_rtnode* FUNC_1 (int *) ;
 int FUNC_2 (struct bridge_rtnode*,struct bridge_rtnode*,int ) ;
 int FUNC_3 (struct bridge_rtnode*,struct bridge_rtnode*,int ) ;
 int FUNC_4 (int *,struct bridge_rtnode*,int ) ;
 struct bridge_rtnode* FUNC_5 (struct bridge_rtnode*,int ) ;
 size_t FUNC_6 (struct bridge_softc*,int ) ;
 int FUNC_7 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int
FUNC_9(struct bridge_softc *VAR_3, struct bridge_rtnode *VAR_4)
{
 struct bridge_rtnode *VAR_5;
 uint32_t VAR_6;
 int VAR_7;

 FUNC_0(VAR_3);

 VAR_6 = FUNC_6(VAR_3, VAR_4->brt_addr);

 VAR_5 = FUNC_1(&VAR_3->sc_rthash[VAR_6]);
 if (VAR_5 == ((void*)0)) {
  FUNC_4(&VAR_3->sc_rthash[VAR_6], VAR_4, VAR_1);
  goto out;
 }

 do {
  VAR_7 = FUNC_7(VAR_4->brt_addr, VAR_5->brt_addr);
  if (VAR_7 == 0 && VAR_4->brt_vlan == VAR_5->brt_vlan)
   return (VAR_0);
  if (VAR_7 > 0) {
   FUNC_3(VAR_5, VAR_4, VAR_1);
   goto out;
  }
  if (FUNC_5(VAR_5, VAR_1) == ((void*)0)) {
   FUNC_2(VAR_5, VAR_4, VAR_1);
   goto out;
  }
  VAR_5 = FUNC_5(VAR_5, VAR_1);
 } while (VAR_5 != ((void*)0));





out:
 FUNC_4(&VAR_3->sc_rtlist, VAR_4, VAR_2);
 VAR_3->sc_brtcnt++;

 return (0);
}
