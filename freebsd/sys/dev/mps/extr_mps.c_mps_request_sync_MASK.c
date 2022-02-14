
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct mps_softc {int dummy; } ;
struct TYPE_5__ {scalar_t__ td_no_sleeping; } ;
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
 TYPE_3__* VAR_13 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mps_softc*,int ,char*,...) ;
 int FUNC_3 (struct mps_softc*,int ) ;
 int FUNC_4 (struct mps_softc*,int ,int) ;
 scalar_t__ FUNC_5 (struct mps_softc*,int,int) ;
 scalar_t__ FUNC_6 (struct mps_softc*) ;

__attribute__((used)) static int
FUNC_7(struct mps_softc *VAR_14, void *VAR_15, MPI2_DEFAULT_REPLY *VAR_16,
    int VAR_17, int VAR_18, int VAR_19)
{
 uint32_t *VAR_20;
 uint16_t *VAR_21;
 int VAR_22, VAR_23, VAR_24, VAR_25;
 int VAR_26 = VAR_0;

 if (VAR_13->td_no_sleeping != 0)
  VAR_26 = VAR_12;


 FUNC_4(VAR_14, VAR_9, 0x0);


 if (FUNC_3(VAR_14, VAR_6) & VAR_7)
  return (VAR_1);





 VAR_23 = (VAR_17 + 3) / 4;
 FUNC_4(VAR_14, VAR_6,
     (VAR_8 << VAR_5) |
     (VAR_23 << VAR_3));


 if (FUNC_6(VAR_14) ||
     (FUNC_3(VAR_14, VAR_6) & VAR_7) == 0) {
  FUNC_2(VAR_14, VAR_11, "Doorbell failed to activate\n");
  return (VAR_2);
 }
 FUNC_4(VAR_14, VAR_9, 0x0);
 if (FUNC_5(VAR_14, 5, VAR_26) != 0) {
  FUNC_2(VAR_14, VAR_11, "Doorbell handshake failed\n");
  return (VAR_2);
 }



 VAR_20 = (uint32_t *)VAR_15;
 for (VAR_22 = 0; VAR_22 < VAR_23; VAR_22++) {
  FUNC_4(VAR_14, VAR_6, FUNC_1(VAR_20[VAR_22]));
  if (FUNC_5(VAR_14, 5, VAR_26) != 0) {
   FUNC_2(VAR_14, VAR_11,
       "Timeout while writing doorbell\n");
   return (VAR_2);
  }
 }






 VAR_21 = (uint16_t *)VAR_16;
 if (FUNC_6(VAR_14) != 0) {
  FUNC_2(VAR_14, VAR_11, "Timeout reading doorbell 0\n");
  return (VAR_2);
 }
 VAR_21[0] =
     FUNC_3(VAR_14, VAR_6) & VAR_4;
 FUNC_4(VAR_14, VAR_9, 0x0);
 if (FUNC_6(VAR_14) != 0) {
  FUNC_2(VAR_14, VAR_11, "Timeout reading doorbell 1\n");
  return (VAR_2);
 }
 VAR_21[1] =
     FUNC_3(VAR_14, VAR_6) & VAR_4;
 FUNC_4(VAR_14, VAR_9, 0x0);


 VAR_24 = VAR_16->MsgLength;






 VAR_25 = 0;
 VAR_23 = FUNC_0((VAR_18 / 4), VAR_24) * 2;
 if (VAR_23 < VAR_24 * 2) {
  VAR_25 = VAR_24 * 2 - VAR_23;
  FUNC_2(VAR_14, VAR_10, "Driver error, throwing away %d "
      "residual message words\n", VAR_25);
 }

 for (VAR_22 = 2; VAR_22 < VAR_23; VAR_22++) {
  if (FUNC_6(VAR_14) != 0) {
   FUNC_2(VAR_14, VAR_11,
       "Timeout reading doorbell %d\n", VAR_22);
   return (VAR_2);
  }
  VAR_21[VAR_22] = FUNC_3(VAR_14, VAR_6) &
      VAR_4;
  FUNC_4(VAR_14, VAR_9, 0x0);
 }






 while (VAR_25--) {
  if (FUNC_6(VAR_14) != 0) {
   FUNC_2(VAR_14, VAR_11,
       "Timeout reading doorbell\n");
   return (VAR_2);
  }
  (void)FUNC_3(VAR_14, VAR_6);
  FUNC_4(VAR_14, VAR_9, 0x0);
 }


 if (FUNC_6(VAR_14) != 0) {
  FUNC_2(VAR_14, VAR_11, "Timeout waiting to exit doorbell\n");
  return (VAR_2);
 }
 if (FUNC_3(VAR_14, VAR_6) & VAR_7)
  FUNC_2(VAR_14, VAR_11, "Warning, doorbell still active\n");
 FUNC_4(VAR_14, VAR_9, 0x0);

 return (0);
}
