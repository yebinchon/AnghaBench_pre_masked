
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,int ,int) ;

enum _ecore_status_t FUNC_3(struct ecore_hwfn *VAR_31,
         struct ecore_ptt *VAR_32)
{
 u32 VAR_33;

 VAR_33 = FUNC_1(VAR_31, VAR_32, VAR_25);
 if (VAR_33 & VAR_11) {
  u32 VAR_34, VAR_35, VAR_36;

  VAR_34 = FUNC_1(VAR_31, VAR_32,
       VAR_22);
  VAR_35 = FUNC_1(VAR_31, VAR_32,
       VAR_23);
  VAR_36 = FUNC_1(VAR_31, VAR_32,
       VAR_24);

  FUNC_0(VAR_31, 0,
     "Illegal write by chip to [%08x:%08x] blocked. Details: %08x [PFID %02x, VFID %02x, VF_VALID %02x] Details2 %08x [Was_error %02x BME deassert %02x FID_enable deassert %02x]\n",
     VAR_35, VAR_34, VAR_36,
     (u8)((VAR_36 & VAR_3) >> VAR_4),
     (u8)((VAR_36 & VAR_5) >> VAR_6),
     (u8)((VAR_36 & VAR_7) ? 1 : 0),
     VAR_33,
     (u8)((VAR_33 & VAR_2) ? 1 : 0),
     (u8)((VAR_33 & VAR_0) ? 1 : 0),
     (u8)((VAR_33 & VAR_1) ? 1 : 0));
 }

 VAR_33 = FUNC_1(VAR_31, VAR_32, VAR_21);
 if (VAR_33 & VAR_10) {
  u32 VAR_37, VAR_38, VAR_39;

  VAR_37 = FUNC_1(VAR_31, VAR_32,
       VAR_18);
  VAR_38 = FUNC_1(VAR_31, VAR_32,
       VAR_19);
  VAR_39 = FUNC_1(VAR_31, VAR_32,
       VAR_20);

  FUNC_0(VAR_31, 0,
     "Illegal read by chip from [%08x:%08x] blocked. Details: %08x [PFID %02x, VFID %02x, VF_VALID %02x] Details2 %08x [Was_error %02x BME deassert %02x FID_enable deassert %02x]\n",
     VAR_38, VAR_37, VAR_39,
     (u8)((VAR_39 & VAR_3) >> VAR_4),
     (u8)((VAR_39 & VAR_5) >> VAR_6),
     (u8)((VAR_39 & VAR_7) ? 1 : 0),
     VAR_33,
     (u8)((VAR_33 & VAR_2) ? 1 : 0),
     (u8)((VAR_33 & VAR_0) ? 1 : 0),
     (u8)((VAR_33 & VAR_1) ? 1 : 0));
 }

 VAR_33 = FUNC_1(VAR_31, VAR_32, VAR_26);
 if (VAR_33 & VAR_8)
  FUNC_0(VAR_31, 0, "ICPL eror - %08x\n", VAR_33);

 VAR_33 = FUNC_1(VAR_31, VAR_32, VAR_17);
 if (VAR_33 & VAR_12) {
  u32 VAR_40, VAR_41;

  VAR_41 = FUNC_1(VAR_31, VAR_32,
       VAR_15);
  VAR_40 = FUNC_1(VAR_31, VAR_32,
       VAR_16);

  FUNC_0(VAR_31, 0,
     "ICPL eror - %08x [Address %08x:%08x]\n",
     VAR_33, VAR_40, VAR_41);
 }

 VAR_33 = FUNC_1(VAR_31, VAR_32, VAR_30);
 if (VAR_33 & VAR_9) {
  u32 VAR_42, VAR_43, VAR_44;

  VAR_43 = FUNC_1(VAR_31, VAR_32,
       VAR_27);
  VAR_42 = FUNC_1(VAR_31, VAR_32,
       VAR_28);
  VAR_44 = FUNC_1(VAR_31, VAR_32,
       VAR_29);

  FUNC_0(VAR_31, 0,
     "ILT error - Details %08x Details2 %08x [Address %08x:%08x]\n",
     VAR_44, VAR_33, VAR_42, VAR_43);
 }


 FUNC_2(VAR_31, VAR_32, VAR_14, (1 << 2));

 return VAR_13;
}
