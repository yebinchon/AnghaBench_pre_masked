
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ahc_softc {int features; } ;
struct ahc_devinfo {int dummy; } ;
typedef scalar_t__ role_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct ahc_softc*,int) ;
 int FUNC_1 (struct ahc_softc*,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (struct ahc_devinfo*,int,int ,int,int ,scalar_t__) ;
 int FUNC_3 (struct ahc_softc*,int ) ;

__attribute__((used)) static void
FUNC_4(struct ahc_softc *VAR_16, struct ahc_devinfo *VAR_17)
{
 u_int VAR_18;
 role_t VAR_19;
 int VAR_20;

 if (FUNC_3(VAR_16, VAR_12) & VAR_13)
  VAR_19 = VAR_6;
 else
  VAR_19 = VAR_5;

 if (VAR_19 == VAR_6
  && (VAR_16->features & VAR_0) != 0
  && (FUNC_3(VAR_16, VAR_11)
     & (VAR_2|VAR_15|VAR_3)) != 0) {

  VAR_20 = FUNC_3(VAR_16, VAR_14) & VAR_4;
 } else if ((VAR_16->features & VAR_1) != 0)
  VAR_20 = FUNC_3(VAR_16, VAR_10) & VAR_4;
 else
  VAR_20 = FUNC_3(VAR_16, VAR_9) & VAR_4;

 VAR_18 = FUNC_3(VAR_16, VAR_8);
 FUNC_2(VAR_17,
       VAR_20,
       FUNC_1(VAR_16, VAR_18),
       FUNC_3(VAR_16, VAR_7),
       FUNC_0(VAR_16, VAR_18),
       VAR_19);
}
