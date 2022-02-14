
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct mpr_softc {int dummy; } ;
struct TYPE_5__ {int td_pflags; scalar_t__ td_no_sleeping; } ;
struct TYPE_4__ {int MsgLength; } ;
typedef TYPE_1__ MPI2_DEFAULT_REPLY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_3__* VAR_14 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mpr_softc*,int ,char*,...) ;
 int FUNC_3 (struct mpr_softc*,int ) ;
 int FUNC_4 (struct mpr_softc*,int ,int) ;
 scalar_t__ FUNC_5 (struct mpr_softc*,int,int) ;
 scalar_t__ FUNC_6 (struct mpr_softc*) ;

__attribute__((used)) static int
FUNC_7(struct mpr_softc *VAR_15, void *VAR_16, MPI2_DEFAULT_REPLY *VAR_17,
    int VAR_18, int VAR_19, int VAR_20)
{
 uint32_t *VAR_21;
 uint16_t *VAR_22;
 int VAR_23, VAR_24, VAR_25, VAR_26;
 int VAR_27 = VAR_0;




 if (VAR_14->td_pflags & VAR_13)

  VAR_27 = VAR_12;


 FUNC_4(VAR_15, VAR_9, 0x0);


 if (FUNC_3(VAR_15, VAR_6) & VAR_7)
  return (VAR_1);





 VAR_24 = (VAR_18 + 3) / 4;
 FUNC_4(VAR_15, VAR_6,
     (VAR_8 << VAR_5) |
     (VAR_24 << VAR_3));


 if (FUNC_6(VAR_15) ||
     (FUNC_3(VAR_15, VAR_6) & VAR_7) == 0) {
  FUNC_2(VAR_15, VAR_11, "Doorbell failed to activate\n");
  return (VAR_2);
 }
 FUNC_4(VAR_15, VAR_9, 0x0);
 if (FUNC_5(VAR_15, 5, VAR_27) != 0) {
  FUNC_2(VAR_15, VAR_11, "Doorbell handshake failed\n");
  return (VAR_2);
 }



 VAR_21 = (uint32_t *)VAR_16;
 for (VAR_23 = 0; VAR_23 < VAR_24; VAR_23++) {
  FUNC_4(VAR_15, VAR_6, FUNC_1(VAR_21[VAR_23]));
  if (FUNC_5(VAR_15, 5, VAR_27) != 0) {
   FUNC_2(VAR_15, VAR_11,
       "Timeout while writing doorbell\n");
   return (VAR_2);
  }
 }






 VAR_22 = (uint16_t *)VAR_17;
 if (FUNC_6(VAR_15) != 0) {
  FUNC_2(VAR_15, VAR_11, "Timeout reading doorbell 0\n");
  return (VAR_2);
 }
 VAR_22[0] =
     FUNC_3(VAR_15, VAR_6) & VAR_4;
 FUNC_4(VAR_15, VAR_9, 0x0);
 if (FUNC_6(VAR_15) != 0) {
  FUNC_2(VAR_15, VAR_11, "Timeout reading doorbell 1\n");
  return (VAR_2);
 }
 VAR_22[1] =
     FUNC_3(VAR_15, VAR_6) & VAR_4;
 FUNC_4(VAR_15, VAR_9, 0x0);


 VAR_25 = VAR_17->MsgLength;






 VAR_26 = 0;
 VAR_24 = FUNC_0((VAR_19 / 4), VAR_25) * 2;
 if (VAR_24 < VAR_25 * 2) {
  VAR_26 = VAR_25 * 2 - VAR_24;
  FUNC_2(VAR_15, VAR_10, "Driver error, throwing away %d "
      "residual message words\n", VAR_26);
 }

 for (VAR_23 = 2; VAR_23 < VAR_24; VAR_23++) {
  if (FUNC_6(VAR_15) != 0) {
   FUNC_2(VAR_15, VAR_11,
       "Timeout reading doorbell %d\n", VAR_23);
   return (VAR_2);
  }
  VAR_22[VAR_23] = FUNC_3(VAR_15, VAR_6) &
      VAR_4;
  FUNC_4(VAR_15, VAR_9, 0x0);
 }






 while (VAR_26--) {
  if (FUNC_6(VAR_15) != 0) {
   FUNC_2(VAR_15, VAR_11, "Timeout reading doorbell\n");
   return (VAR_2);
  }
  (void)FUNC_3(VAR_15, VAR_6);
  FUNC_4(VAR_15, VAR_9, 0x0);
 }


 if (FUNC_6(VAR_15) != 0) {
  FUNC_2(VAR_15, VAR_11, "Timeout waiting to exit doorbell\n");
  return (VAR_2);
 }
 if (FUNC_3(VAR_15, VAR_6) & VAR_7)
  FUNC_2(VAR_15, VAR_11, "Warning, doorbell still active\n");
 FUNC_4(VAR_15, VAR_9, 0x0);

 return (0);
}
