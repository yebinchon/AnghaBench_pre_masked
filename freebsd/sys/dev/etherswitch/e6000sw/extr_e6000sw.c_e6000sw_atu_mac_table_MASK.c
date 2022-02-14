
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct atu_opt {int mac_01; int mac_23; int mac_45; int fid; } ;
typedef int e6000sw_softc_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int *,int ,int) ;
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
 int FUNC_1 (int ,char*) ;
 void* FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,int ,int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_18, e6000sw_softc_t *VAR_19, struct atu_opt *VAR_20,
    int VAR_21)
{
 uint16_t VAR_22;
 uint16_t VAR_23;

 if (VAR_21 == VAR_14)
  return (0);
 else if ((VAR_21 & (VAR_13 | VAR_15 | VAR_11 |
     VAR_12 | VAR_7)) == 0) {
  FUNC_1(VAR_18, "Wrong Opcode for ATU operation\n");
  return (VAR_9);
 }

 if (FUNC_0(VAR_19, VAR_5, VAR_6)) {
  FUNC_1(VAR_18, "ATU unit is busy, cannot access\n");
  return (VAR_8);
 }

 VAR_22 = FUNC_2(VAR_19, VAR_16, VAR_5);
 if (VAR_21 & VAR_13) {
  VAR_23 = FUNC_2(VAR_19, VAR_16, VAR_0);
  FUNC_3(VAR_19, VAR_17, VAR_0, (VAR_23 &
      ~VAR_10));
 }
 FUNC_3(VAR_19, VAR_16, VAR_2, VAR_20->mac_01);
 FUNC_3(VAR_19, VAR_16, VAR_3, VAR_20->mac_23);
 FUNC_3(VAR_19, VAR_16, VAR_4, VAR_20->mac_45);
 FUNC_3(VAR_19, VAR_16, VAR_1, VAR_20->fid);

 FUNC_3(VAR_19, VAR_16, VAR_5,
     (VAR_22 | VAR_6 | VAR_21));

 if (FUNC_0(VAR_19, VAR_5, VAR_6))
  FUNC_1(VAR_18, "Timeout while waiting ATU\n");
 else if (VAR_21 & VAR_11) {
  VAR_20->mac_01 = FUNC_2(VAR_19, VAR_16,
      VAR_2);
  VAR_20->mac_23 = FUNC_2(VAR_19, VAR_16,
      VAR_3);
  VAR_20->mac_45 = FUNC_2(VAR_19, VAR_16,
      VAR_4);
 }

 return (0);
}
