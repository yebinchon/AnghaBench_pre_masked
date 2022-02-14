
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ahc_transinfo {scalar_t__ width; scalar_t__ period; int ppr_options; } ;
struct ahc_syncrate {int dummy; } ;
struct ahc_softc {int features; } ;
struct ahc_initiator_tinfo {struct ahc_transinfo goal; struct ahc_transinfo user; } ;
typedef scalar_t__ role_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,scalar_t__) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct ahc_syncrate* FUNC_1 (struct ahc_softc*,int *,int *,int ) ;
 int FUNC_2 (struct ahc_softc*,int ) ;

struct ahc_syncrate *
FUNC_3(struct ahc_softc *VAR_13,
   struct ahc_initiator_tinfo *VAR_14,
   u_int *VAR_15, u_int *VAR_16, role_t VAR_17)
{
 struct ahc_transinfo *VAR_18;
 u_int VAR_19;

 if ((VAR_13->features & VAR_5) != 0) {
  if ((FUNC_2(VAR_13, VAR_11) & VAR_6) != 0
   && (FUNC_2(VAR_13, VAR_12) & VAR_7) == 0) {
   VAR_19 = VAR_0;
  } else {
   VAR_19 = VAR_2;

   *VAR_16 &= ~VAR_8;
  }
 } else if ((VAR_13->features & VAR_4) != 0) {
  VAR_19 = VAR_2;
 } else {
  VAR_19 = VAR_1;
 }
 if (VAR_17 == VAR_10)
  VAR_18 = &VAR_14->user;
 else
  VAR_18 = &VAR_14->goal;
 *VAR_16 &= VAR_18->ppr_options;
 if (VAR_18->width == VAR_9) {
  VAR_19 = FUNC_0(VAR_19, VAR_3);
  *VAR_16 &= ~VAR_8;
 }
 if (VAR_18->period == 0) {
  *VAR_15 = 0;
  *VAR_16 = 0;
  return (((void*)0));
 }
 *VAR_15 = FUNC_0(*VAR_15, VAR_18->period);
 return (FUNC_1(VAR_13, VAR_15, VAR_16, VAR_19));
}
