
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_int ;
struct ahd_transinfo {int period; int offset; int ppr_options; scalar_t__ width; } ;
struct ahd_softc {int bugs; int features; int iocell_opts; } ;
struct ahd_devinfo {int target; } ;
typedef int ahd_mode_state ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_0 (struct ahd_softc*,int ) ;
 int FUNC_1 (struct ahd_softc*,int ,int) ;
 int FUNC_2 (struct ahd_softc*,int ) ;
 int FUNC_3 (struct ahd_softc*) ;
 int FUNC_4 (struct ahd_softc*,int ,int ) ;
 int FUNC_5 (int*,int ,int) ;

__attribute__((used)) static void
FUNC_6(struct ahd_softc *VAR_29, struct ahd_devinfo *VAR_30,
       struct ahd_transinfo *VAR_31)
{
 ahd_mode_state VAR_32;
 u_int VAR_33;
 u_int VAR_34;
 u_int VAR_35;
 u_int VAR_36;
 u_int VAR_37;
 uint8_t VAR_38[sizeof(VAR_29->iocell_opts)];

 VAR_32 = FUNC_3(VAR_29);
 FUNC_4(VAR_29, VAR_3, VAR_3);

 VAR_37 = FUNC_0(VAR_29, VAR_23);
 FUNC_1(VAR_29, VAR_23, VAR_30->target);
 VAR_33 = VAR_31->period;
 VAR_36 = VAR_31->offset;
 FUNC_5(VAR_38, VAR_29->iocell_opts, sizeof(VAR_29->iocell_opts));
 VAR_34 = VAR_31->ppr_options & (VAR_19|VAR_16
     |VAR_17|VAR_20);
 VAR_35 = 0;
 if (VAR_33 == 0)
  VAR_33 = VAR_10;
 if (VAR_33 == VAR_9) {

  if ((VAR_29->bugs & VAR_5) != 0) {
   VAR_34 |= VAR_27;
   VAR_36 *= 2;







   VAR_33 = VAR_11;
  }
  if ((VAR_31->ppr_options & VAR_18) == 0)
   VAR_38[VAR_7] &=
       ~VAR_6;
 } else {



  VAR_38[VAR_7] &= ~VAR_6;

  if ((VAR_29->features & VAR_4) != 0
   && (VAR_34 & VAR_16) != 0
   && (VAR_34 & VAR_17) == 0) {






   VAR_35 |= VAR_15;
  }

  if ((VAR_29->bugs & VAR_5) != 0) {




   VAR_38[VAR_7] &=
       ~VAR_8;
  }
 }

 FUNC_1(VAR_29, VAR_12, VAR_2);
 FUNC_1(VAR_29, VAR_13, VAR_38[VAR_7]);
 FUNC_1(VAR_29, VAR_12, VAR_1);
 FUNC_1(VAR_29, VAR_13, VAR_38[VAR_0]);

 FUNC_1(VAR_29, VAR_25, VAR_33);
 FUNC_1(VAR_29, VAR_26, VAR_34);
 FUNC_1(VAR_29, VAR_24, VAR_36);

 if (VAR_31->width == VAR_21)
  VAR_35 |= VAR_28;






 if ((VAR_31->ppr_options & VAR_17) == 0)
  VAR_35 |= VAR_14;
 FUNC_1(VAR_29, VAR_22, VAR_35);
 FUNC_1(VAR_29, VAR_23, VAR_37);
 FUNC_2(VAR_29, VAR_32);
}
