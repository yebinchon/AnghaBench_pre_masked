
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
typedef int u32 ;




 int VAR_0 ;
 int VAR_1 ;
 int const* VAR_2 ;
 int FUNC_0 (int const*,int ) ;
 int FUNC_1 (int const*,int ) ;
 int FUNC_2 (int const*,int const*,size_t,int const*,size_t) ;
 int FUNC_3 (int const*,int const*,size_t,int const*,size_t) ;
 int FUNC_4 (int const*) ;
 int const* FUNC_5 (size_t) ;
 int FUNC_6 (int const*,int const*,size_t) ;
 size_t FUNC_7 (int const*) ;
 int FUNC_8 (int ,char*,int const*,size_t) ;
 int FUNC_9 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_10(u32 VAR_3,
          u8 *VAR_4, size_t VAR_5,
          const u8 *VAR_6, const u8 *VAR_7,
          size_t VAR_8, u8 VAR_9)
{
 u8 *VAR_10, *VAR_11;
 size_t VAR_12;
 int (*VAR_13)(const u8 *VAR_14, const u8 *VAR_15, size_t VAR_16,
      u8 *VAR_17, size_t VAR_18);

 VAR_13 = ((void*)0);
 switch (VAR_3) {
 case 129:
  VAR_13 = FUNC_2;
  break;





 default:
  FUNC_9(VAR_1, "EAP-GPSK: Unknown cipher %d used in "
      "Session-Id derivation", VAR_3);
  return -1;
 }



 VAR_12 = FUNC_7("Method ID") + 1 + 6 + VAR_8;
 VAR_11 = FUNC_5(VAR_12);
 if (VAR_11 == ((void*)0))
  return -1;
 VAR_10 = VAR_11;
 FUNC_6(VAR_10, "Method ID", FUNC_7("Method ID"));
 VAR_10 += FUNC_7("Method ID");

 FUNC_6(VAR_10, &VAR_9, 1);
 VAR_10 += 1;
 FUNC_1(VAR_10, VAR_0);
 VAR_10 += 4;
 FUNC_0(VAR_10, VAR_3);
 VAR_10 += 2;
 FUNC_6(VAR_10, VAR_7, VAR_8);
 FUNC_8(VAR_1, "EAP-GPSK: Data to Method ID derivation",
      VAR_11, VAR_12);

 if (VAR_13(VAR_6, VAR_11, VAR_12, VAR_4, VAR_5) < 0) {
  FUNC_4(VAR_11);
  return -1;
 }
 FUNC_4(VAR_11);
 FUNC_8(VAR_1, "EAP-GPSK: Method ID", VAR_4, VAR_5);

 return 0;
}
