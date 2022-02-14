
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
typedef size_t u32 ;


 size_t VAR_0 ;


 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int const*,size_t) ;
 int FUNC_1 (int const*,int ) ;
 int FUNC_2 (int const*,int const*,size_t,int const*,size_t) ;
 int FUNC_3 (int const*,int const*,size_t,int const*,size_t) ;
 int FUNC_4 (int const*) ;
 int const* FUNC_5 (size_t) ;
 int FUNC_6 (int const*,int const*,size_t) ;
 int FUNC_7 (int ,char*,int const*,size_t) ;

__attribute__((used)) static int FUNC_8(u32 VAR_5,
           u8 *VAR_6, size_t VAR_7,
           const u8 *VAR_8, size_t VAR_9,
           const u8 *VAR_10, size_t VAR_11,
           u8 *VAR_12, u8 *VAR_13,
           u8 *VAR_14, size_t VAR_15,
           u8 *VAR_16, size_t VAR_17)
{
 u8 VAR_18[32], *VAR_19, *VAR_20;
 size_t VAR_21, VAR_22;
 int (*VAR_23)(const u8 *VAR_24, const u8 *VAR_25, size_t VAR_26,
      u8 *VAR_27, size_t VAR_28);

 VAR_23 = ((void*)0);
 switch (VAR_5) {
 case 129:
  VAR_23 = FUNC_2;
  VAR_22 = 16;
  break;






 default:
  return -1;
 }

 if (VAR_9 < VAR_22)
  return -1;

 VAR_21 = 2 + VAR_9 + 6 + VAR_11;
 VAR_20 = FUNC_5(VAR_21);
 if (VAR_20 == ((void*)0))
  return -1;
 VAR_19 = VAR_20;
 FUNC_0(VAR_19, VAR_9);
 VAR_19 += 2;
 FUNC_6(VAR_19, VAR_8, VAR_9);
 VAR_19 += VAR_9;
 FUNC_1(VAR_19, VAR_1);
 VAR_19 += 4;
 FUNC_0(VAR_19, VAR_5);
 VAR_19 += 2;
 FUNC_6(VAR_19, VAR_10, VAR_11);
 FUNC_7(VAR_3, "EAP-GPSK: Data to MK derivation",
   VAR_20, VAR_21);

 if (VAR_23(VAR_8, VAR_20, VAR_21, VAR_18, VAR_22) < 0) {
  FUNC_4(VAR_20);
  return -1;
 }
 FUNC_4(VAR_20);
 FUNC_7(VAR_3, "EAP-GPSK: MK", VAR_18, VAR_22);

 if (VAR_23(VAR_18, VAR_10, VAR_11, VAR_6, VAR_7) < 0)
  return -1;

 VAR_19 = VAR_6;
 FUNC_7(VAR_3, "EAP-GPSK: MSK", VAR_19, VAR_2);
 FUNC_6(VAR_12, VAR_19, VAR_2);
 VAR_19 += VAR_2;

 FUNC_7(VAR_3, "EAP-GPSK: EMSK", VAR_19, VAR_0);
 FUNC_6(VAR_13, VAR_19, VAR_0);
 VAR_19 += VAR_0;

 FUNC_7(VAR_3, "EAP-GPSK: SK", VAR_19, VAR_15);
 FUNC_6(VAR_14, VAR_19, VAR_15);
 VAR_19 += VAR_15;

 if (VAR_16) {
  FUNC_7(VAR_3, "EAP-GPSK: PK", VAR_19, VAR_17);
  FUNC_6(VAR_16, VAR_19, VAR_17);
 }

 return 0;
}
