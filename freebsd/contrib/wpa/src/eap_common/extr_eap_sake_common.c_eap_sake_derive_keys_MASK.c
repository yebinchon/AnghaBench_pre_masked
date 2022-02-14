
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
typedef int key_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int const*,int,char*,int const*,int ,int const*,int ,int const*,int) ;
 int FUNC_1 (int const*,int const*,int) ;
 int FUNC_2 (int ,char*,int const*,int) ;
 int FUNC_3 (int ,char*) ;

int FUNC_4(const u8 *VAR_9, const u8 *VAR_10,
    const u8 *VAR_11, const u8 *VAR_12, u8 *VAR_13, u8 *VAR_14,
    u8 *VAR_15)
{
 u8 VAR_16[VAR_4];
 u8 VAR_17[VAR_4];
 u8 VAR_18[VAR_1 + VAR_0];

 FUNC_3(VAR_8, "EAP-SAKE: Deriving keys");

 FUNC_2(VAR_8, "EAP-SAKE: Root-Secret-A",
   VAR_9, VAR_3);
 if (FUNC_0(VAR_9, VAR_3,
    "SAKE Master Secret A",
    VAR_12, VAR_2, VAR_11, VAR_2,
    VAR_16, VAR_4) < 0)
  return -1;
 FUNC_2(VAR_8, "EAP-SAKE: SMS-A", VAR_16, VAR_4);
 if (FUNC_0(VAR_16, VAR_4, "Transient EAP Key",
    VAR_11, VAR_2, VAR_12, VAR_2,
    VAR_13, VAR_7) < 0)
  return -1;
 FUNC_2(VAR_8, "EAP-SAKE: TEK-Auth",
   VAR_13, VAR_5);
 FUNC_2(VAR_8, "EAP-SAKE: TEK-Cipher",
   VAR_13 + VAR_5, VAR_6);

 FUNC_2(VAR_8, "EAP-SAKE: Root-Secret-B",
   VAR_10, VAR_3);
 if (FUNC_0(VAR_10, VAR_3,
    "SAKE Master Secret B",
    VAR_12, VAR_2, VAR_11, VAR_2,
    VAR_17, VAR_4) < 0)
  return -1;
 FUNC_2(VAR_8, "EAP-SAKE: SMS-B", VAR_17, VAR_4);
 if (FUNC_0(VAR_17, VAR_4, "Master Session Key",
    VAR_11, VAR_2, VAR_12, VAR_2,
    VAR_18, sizeof(VAR_18)) < 0)
  return -1;
 FUNC_1(VAR_14, VAR_18, VAR_1);
 FUNC_1(VAR_15, VAR_18 + VAR_1, VAR_0);
 FUNC_2(VAR_8, "EAP-SAKE: MSK", VAR_14, VAR_1);
 FUNC_2(VAR_8, "EAP-SAKE: EMSK", VAR_15, VAR_0);
 return 0;
}
