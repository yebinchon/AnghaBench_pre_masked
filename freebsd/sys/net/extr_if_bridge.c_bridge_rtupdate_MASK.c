
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct bridge_softc {scalar_t__ sc_brtcnt; scalar_t__ sc_brtmax; scalar_t__ sc_brttimeout; int sc_brtexceeded; } ;
struct bridge_rtnode {scalar_t__ brt_flags; int brt_vlan; scalar_t__ brt_expire; struct bridge_iflist* brt_dst; int brt_addr; } ;
struct bridge_iflist {scalar_t__ bif_addrmax; scalar_t__ bif_addrcnt; int bif_flags; int bif_addrexceeded; } ;


 int FUNC_0 (struct bridge_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__ const*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct bridge_softc*,struct bridge_rtnode*) ;
 struct bridge_rtnode* FUNC_3 (struct bridge_softc*,scalar_t__ const*,int) ;
 int FUNC_4 (int ,scalar_t__ const*,int ) ;
 scalar_t__ VAR_11 ;
 struct bridge_rtnode* FUNC_5 (int ,int) ;
 int FUNC_6 (int ,struct bridge_rtnode*) ;

__attribute__((used)) static int
FUNC_7(struct bridge_softc *VAR_12, const uint8_t *VAR_13, uint16_t VAR_14,
    struct bridge_iflist *VAR_15, int VAR_16, uint8_t VAR_17)
{
 struct bridge_rtnode *VAR_18;
 int VAR_19;

 FUNC_0(VAR_12);


 if (FUNC_1(VAR_13) ||
     (VAR_13[0] == 0 && VAR_13[1] == 0 && VAR_13[2] == 0 &&
      VAR_13[3] == 0 && VAR_13[4] == 0 && VAR_13[5] == 0) != 0)
  return (VAR_0);


 if (VAR_14 == 0)
  VAR_14 = 1;





 if ((VAR_18 = FUNC_3(VAR_12, VAR_13, VAR_14)) == ((void*)0)) {
  if (VAR_12->sc_brtcnt >= VAR_12->sc_brtmax) {
   VAR_12->sc_brtexceeded++;
   return (VAR_2);
  }

  if (VAR_15->bif_addrmax && VAR_15->bif_addrcnt >= VAR_15->bif_addrmax) {
   VAR_15->bif_addrexceeded++;
   return (VAR_2);
  }






  VAR_18 = FUNC_5(VAR_10, VAR_8 | VAR_9);
  if (VAR_18 == ((void*)0))
   return (VAR_1);

  if (VAR_15->bif_flags & VAR_7)
   VAR_18->brt_flags = VAR_5;
  else
   VAR_18->brt_flags = VAR_4;

  FUNC_4(VAR_18->brt_addr, VAR_13, VAR_3);
  VAR_18->brt_vlan = VAR_14;

  if ((VAR_19 = FUNC_2(VAR_12, VAR_18)) != 0) {
   FUNC_6(VAR_10, VAR_18);
   return (VAR_19);
  }
  VAR_18->brt_dst = VAR_15;
  VAR_15->bif_addrcnt++;
 }

 if ((VAR_18->brt_flags & VAR_6) == VAR_4 &&
     VAR_18->brt_dst != VAR_15) {
  VAR_18->brt_dst->bif_addrcnt--;
  VAR_18->brt_dst = VAR_15;
  VAR_18->brt_dst->bif_addrcnt++;
 }

 if ((VAR_17 & VAR_6) == VAR_4)
  VAR_18->brt_expire = VAR_11 + VAR_12->sc_brttimeout;
 if (VAR_16)
  VAR_18->brt_flags = VAR_17;

 return (0);
}
