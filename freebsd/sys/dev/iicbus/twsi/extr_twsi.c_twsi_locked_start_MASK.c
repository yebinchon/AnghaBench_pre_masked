
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_char ;
struct twsi_softc {int reg_status; int reg_data; int reg_control; int mutex; } ;
typedef int int32_t ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct twsi_softc*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct twsi_softc*,int ,int) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct twsi_softc*) ;
 int FUNC_6 (struct twsi_softc*,int ) ;
 scalar_t__ FUNC_7 (struct twsi_softc*,int,int) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_11, struct twsi_softc *VAR_12, int32_t VAR_13,
    u_char VAR_14, int VAR_15)
{
 int VAR_16, VAR_17 = 0;
 uint32_t VAR_18;

 FUNC_4(&VAR_12->mutex, VAR_4);

 if (VAR_13 == VAR_9)

  VAR_17 = FUNC_1(VAR_12, VAR_12->reg_control) & VAR_5;

 FUNC_3(VAR_11, "send start\n");
 FUNC_6(VAR_12, VAR_6);

 if (VAR_13 == VAR_9 && VAR_17) {
  FUNC_3(VAR_11, "IFLG set, clearing (mask=%x)\n", VAR_13);
  FUNC_5(VAR_12);
 }





 FUNC_0(1000);

 if (FUNC_7(VAR_12, VAR_15, VAR_5)) {
  FUNC_3(VAR_11, "timeout sending %sSTART condition\n",
      VAR_13 == VAR_10 ? "" : "repeated ");
  return (VAR_2);
 }

 VAR_18 = FUNC_1(VAR_12, VAR_12->reg_status);
 FUNC_3(VAR_11, "status=%x\n", VAR_18);

 if (VAR_18 != VAR_13) {
  FUNC_3(VAR_11, "wrong status (%02x) after sending %sSTART condition\n",
      VAR_18, VAR_13 == VAR_10 ? "" : "repeated ");
  return (VAR_1);
 }

 FUNC_2(VAR_12, VAR_12->reg_data, VAR_14);
 FUNC_5(VAR_12);
 FUNC_0(1000);

 if (FUNC_7(VAR_12, VAR_15, VAR_5)) {
  FUNC_3(VAR_11, "timeout sending slave address (timeout=%d)\n", VAR_15);
  return (VAR_2);
 }

 VAR_16 = (VAR_14 & 0x1) ? 1 : 0;
 VAR_18 = FUNC_1(VAR_12, VAR_12->reg_status);
 if (VAR_18 != (VAR_16 ?
     VAR_7 : VAR_8)) {
  FUNC_3(VAR_11, "no ACK (status: %02x) after sending slave address\n",
      VAR_18);
  return (VAR_0);
 }

 return (VAR_3);
}
