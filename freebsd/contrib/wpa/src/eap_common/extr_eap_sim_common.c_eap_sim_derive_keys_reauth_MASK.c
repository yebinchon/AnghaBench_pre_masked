
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__*,int ) ;
 scalar_t__ FUNC_1 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_2 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_3 (scalar_t__*,int ,int) ;
 int FUNC_4 (int,scalar_t__ const**,size_t*,scalar_t__*) ;
 int FUNC_5 (int ,char*,scalar_t__ const*,int) ;
 int FUNC_6 (int ,char*,scalar_t__ const*,size_t) ;
 int FUNC_7 (int ,char*,scalar_t__ const*,size_t) ;
 int FUNC_8 (int ,char*) ;

int FUNC_9(u16 VAR_7,
          const u8 *VAR_8, size_t VAR_9,
          const u8 *VAR_10, const u8 *VAR_11, u8 *VAR_12,
          u8 *VAR_13)
{
 u8 VAR_14[VAR_6];
 u8 VAR_15[VAR_1 + VAR_0 + 32];
 u8 VAR_16[2];
 const u8 *VAR_17[4];
 size_t VAR_18[4];

 while (VAR_9 > 0 && VAR_8[VAR_9 - 1] == 0) {
  FUNC_8(VAR_4, "EAP-SIM: Workaround - drop null "
      "character from the end of identity");
  VAR_9--;
 }
 VAR_17[0] = VAR_8;
 VAR_18[0] = VAR_9;
 VAR_17[1] = VAR_16;
 VAR_18[1] = 2;
 VAR_17[2] = VAR_10;
 VAR_18[2] = VAR_3;
 VAR_17[3] = VAR_11;
 VAR_18[3] = VAR_2;

 FUNC_0(VAR_16, VAR_7);

 FUNC_8(VAR_4, "EAP-SIM: Deriving keying data from reauth");
 FUNC_6(VAR_4, "EAP-SIM: Identity",
     VAR_8, VAR_9);
 FUNC_5(VAR_4, "EAP-SIM: counter", VAR_16, 2);
 FUNC_5(VAR_4, "EAP-SIM: NONCE_S", VAR_10,
      VAR_3);
 FUNC_7(VAR_4, "EAP-SIM: MK", VAR_11, VAR_2);


 FUNC_4(4, VAR_17, VAR_18, VAR_14);
 FUNC_5(VAR_4, "EAP-SIM: XKEY'", VAR_14, VAR_6);

 if (FUNC_1(VAR_14, VAR_15, sizeof(VAR_15)) < 0) {
  FUNC_8(VAR_5, "EAP-SIM: Failed to derive keys");
  return -1;
 }
 if (VAR_12) {
  FUNC_2(VAR_12, VAR_15, VAR_1);
  FUNC_5(VAR_4, "EAP-SIM: keying material (MSK)",
       VAR_12, VAR_1);
 }
 if (VAR_13) {
  FUNC_2(VAR_13, VAR_15 + VAR_1, VAR_0);
  FUNC_5(VAR_4, "EAP-SIM: EMSK", VAR_13, VAR_0);
 }
 FUNC_3(VAR_15, 0, sizeof(VAR_15));

 return 0;
}
