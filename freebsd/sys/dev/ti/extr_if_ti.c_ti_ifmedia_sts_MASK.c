
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ti_softc {scalar_t__ ti_linkstat; scalar_t__ ti_copper; } ;
struct ifnet {struct ti_softc* if_softc; } ;
struct ifmediareq {int ifm_active; int ifm_status; } ;


 int FUNC_0 (struct ti_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (struct ti_softc*) ;
 int FUNC_2 (struct ti_softc*) ;

__attribute__((used)) static void
FUNC_3(struct ifnet *VAR_21, struct ifmediareq *VAR_22)
{
 struct ti_softc *VAR_23;
 uint32_t VAR_24 = 0;

 VAR_23 = VAR_21->if_softc;

 FUNC_1(VAR_23);

 VAR_22->ifm_status = VAR_7;
 VAR_22->ifm_active = VAR_8;

 if (VAR_23->ti_linkstat == VAR_12) {
  FUNC_2(VAR_23);
  return;
 }

 VAR_22->ifm_status |= VAR_6;

 if (VAR_23->ti_linkstat == VAR_11) {
  VAR_24 = FUNC_0(VAR_23, VAR_14);
  if (VAR_23->ti_copper)
   VAR_22->ifm_active |= VAR_1;
  else
   VAR_22->ifm_active |= VAR_0;
  if (VAR_24 & VAR_16)
   VAR_22->ifm_active |= VAR_9;
  else
   VAR_22->ifm_active |= VAR_10;
 } else if (VAR_23->ti_linkstat == VAR_13) {
  VAR_24 = FUNC_0(VAR_23, VAR_15);
  if (VAR_23->ti_copper) {
   if (VAR_24 & VAR_17)
    VAR_22->ifm_active |= VAR_3;
   if (VAR_24 & VAR_18)
    VAR_22->ifm_active |= VAR_5;
  } else {
   if (VAR_24 & VAR_17)
    VAR_22->ifm_active |= VAR_2;
   if (VAR_24 & VAR_18)
    VAR_22->ifm_active |= VAR_4;
  }
  if (VAR_24 & VAR_19)
   VAR_22->ifm_active |= VAR_9;
  if (VAR_24 & VAR_20)
   VAR_22->ifm_active |= VAR_10;
 }
 FUNC_2(VAR_23);
}
