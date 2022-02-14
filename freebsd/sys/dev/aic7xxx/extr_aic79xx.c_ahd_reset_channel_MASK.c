
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct ahd_tmode_tstate {struct ahd_tmode_lstate** enabled_luns; } ;
struct ahd_tmode_lstate {int dummy; } ;
struct ahd_softc {int flags; int features; int reset_timer; struct ahd_tmode_tstate** enabled_targets; int * pending_device; } ;
struct ahd_devinfo {int channel; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 size_t VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_0 (struct ahd_softc*,size_t,char,int ,int ,int ,int ) ;
 int FUNC_1 (struct ahd_softc*) ;
 int FUNC_2 (struct ahd_softc*,int) ;
 int FUNC_3 (struct ahd_softc*) ;
 int FUNC_4 (struct ahd_softc*) ;
 int FUNC_5 (struct ahd_devinfo*,size_t,size_t,int ,char,int ) ;
 size_t FUNC_6 (struct ahd_softc*,int ) ;
 int FUNC_7 (struct ahd_softc*,int ,size_t) ;
 int FUNC_8 (struct ahd_softc*) ;
 int FUNC_9 (struct ahd_softc*,struct ahd_tmode_lstate*,size_t,int ,int ) ;
 int FUNC_10 (struct ahd_softc*) ;
 int VAR_27 ;
 int FUNC_11 (struct ahd_softc*) ;
 int FUNC_12 (struct ahd_softc*,int ) ;
 int FUNC_13 (struct ahd_softc*,int ,size_t,int ,int ,int *) ;
 int FUNC_14 (struct ahd_softc*,struct ahd_tmode_lstate*) ;
 int FUNC_15 (struct ahd_softc*,size_t,size_t) ;
 int FUNC_16 (struct ahd_softc*,struct ahd_devinfo*,int ,int ,int ,int ,int ) ;
 int FUNC_17 (struct ahd_softc*,struct ahd_devinfo*,int ,int ,int ) ;
 int FUNC_18 (int) ;
 int FUNC_19 (struct ahd_softc*) ;
 int FUNC_20 (int *,int ,int ,struct ahd_softc*) ;

int
FUNC_21(struct ahd_softc *VAR_28, char VAR_29, int VAR_30)
{
 struct ahd_devinfo VAR_31;
 u_int VAR_32;
 u_int VAR_33;
 u_int VAR_34;
 int VAR_35;
 u_int VAR_36;
 u_int VAR_37;

 VAR_28->pending_device = ((void*)0);

 FUNC_5(&VAR_31,
       VAR_9,
       VAR_9,
       VAR_7,
       VAR_29, VAR_20);
 FUNC_8(VAR_28);


 FUNC_1(VAR_28);






 FUNC_15(VAR_28, VAR_1, VAR_1);





 FUNC_7(VAR_28, VAR_23, 0);
 FUNC_7(VAR_28, VAR_24, 0);






 VAR_37 = VAR_36 = FUNC_6(VAR_28, VAR_13) & VAR_10;
 if (VAR_37 > VAR_11)

  VAR_37 = VAR_36 = 0;
 do {
  VAR_37 ^= VAR_11;
  FUNC_15(VAR_28, VAR_37, VAR_37);
  FUNC_7(VAR_28, VAR_12,
    FUNC_6(VAR_28, VAR_12) & ~(VAR_22|VAR_17));
  while ((FUNC_6(VAR_28, VAR_12) & VAR_18) != 0)
   FUNC_18(10);



  FUNC_15(VAR_28, VAR_1, VAR_1);
  FUNC_7(VAR_28, VAR_13, VAR_37);
 } while (VAR_37 != VAR_36);




 FUNC_4(VAR_28);
 FUNC_7(VAR_28, VAR_25,
   FUNC_6(VAR_28, VAR_25) & ~(VAR_14|VAR_15));

 if (VAR_30)
  FUNC_10(VAR_28);

 FUNC_3(VAR_28);





 VAR_35 = FUNC_0(VAR_28, VAR_9, VAR_29,
          VAR_7, VAR_21,
          VAR_20, VAR_8);




 FUNC_2(VAR_28, 0);
 FUNC_2(VAR_28, 1);




 VAR_34 = (VAR_28->features & VAR_6) ? 15 : 7;
 for (VAR_33 = 0; VAR_33 <= VAR_34; VAR_33++) {

  if (VAR_28->enabled_targets[VAR_33] == ((void*)0))
   continue;
  for (VAR_32 = 0; VAR_32 <= VAR_34; VAR_32++) {
   struct ahd_devinfo VAR_38;

   FUNC_5(&VAR_38, VAR_33, VAR_32,
         VAR_7,
         'A', VAR_20);
   FUNC_17(VAR_28, &VAR_38, VAR_19,
          VAR_5, VAR_26);
   FUNC_16(VAR_28, &VAR_38, 0,
                0, 0,
      VAR_5, VAR_26);
  }
 }
 FUNC_13(VAR_28, VAR_31.channel, VAR_9,
         VAR_7, VAR_0, ((void*)0));
 FUNC_11(VAR_28);






 if ((VAR_28->flags & VAR_3) == 0) {
  VAR_28->flags |= VAR_3;
  FUNC_19(VAR_28);
  FUNC_20(&VAR_28->reset_timer, 0, VAR_27, VAR_28);
 }
 return (VAR_35);
}
