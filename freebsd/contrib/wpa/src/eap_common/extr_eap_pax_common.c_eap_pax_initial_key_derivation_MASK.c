
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int const,int const*,int ,char*,int const*,int,int ,int const*) ;
 int FUNC_1 (int ,char*,int const*,int ) ;
 int FUNC_2 (int ,char*) ;

int FUNC_3(u8 VAR_8, const u8 *VAR_9, const u8 *VAR_10,
       u8 *VAR_11, u8 *VAR_12, u8 *VAR_13, u8 *VAR_14)
{
 FUNC_2(VAR_6, "EAP-PAX: initial key derivation");
 if (FUNC_0(VAR_8, VAR_9, VAR_0, "Master Key",
   VAR_10, 2 * VAR_5, VAR_4, VAR_11) ||
     FUNC_0(VAR_8, VAR_11, VAR_4, "Confirmation Key",
   VAR_10, 2 * VAR_5, VAR_1, VAR_12) ||
     FUNC_0(VAR_8, VAR_11, VAR_4, "Integrity Check Key",
   VAR_10, 2 * VAR_5, VAR_2, VAR_13) ||
     FUNC_0(VAR_8, VAR_11, VAR_4, "Method ID",
   VAR_10, 2 * VAR_5, VAR_3, VAR_14))
  return -1;

 FUNC_1(VAR_7, "EAP-PAX: AK", VAR_9, VAR_0);
 FUNC_1(VAR_7, "EAP-PAX: MK", VAR_11, VAR_4);
 FUNC_1(VAR_7, "EAP-PAX: CK", VAR_12, VAR_1);
 FUNC_1(VAR_7, "EAP-PAX: ICK", VAR_13, VAR_2);
 FUNC_1(VAR_7, "EAP-PAX: MID", VAR_14, VAR_3);

 return 0;
}
