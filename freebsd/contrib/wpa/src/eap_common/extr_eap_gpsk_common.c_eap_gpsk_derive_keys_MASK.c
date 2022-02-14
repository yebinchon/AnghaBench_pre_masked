
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const*,size_t,int *,int,int *,int *,int *,size_t*,int *,size_t*) ;
 int FUNC_1 (int const*,size_t,int *,int,int *,int *,int *,size_t*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int *,int const*,size_t) ;
 int FUNC_5 (int ,char*,int *,int) ;
 int FUNC_6 (int ,char*,int const*,size_t) ;
 int FUNC_7 (int ,char*,...) ;

int FUNC_8(const u8 *VAR_3, size_t VAR_4, int VAR_5,
    int VAR_6,
    const u8 *VAR_7, const u8 *VAR_8,
    const u8 *VAR_9, size_t VAR_10,
    const u8 *VAR_11, size_t VAR_12,
    u8 *VAR_13, u8 *VAR_14, u8 *VAR_15, size_t *VAR_16,
    u8 *VAR_17, size_t *VAR_18)
{
 u8 *VAR_19, *VAR_20;
 int VAR_21;

 FUNC_7(VAR_2, "EAP-GPSK: Deriving keys (%d:%d)",
     VAR_5, VAR_6);

 if (VAR_5 != VAR_1)
  return -1;

 FUNC_6(VAR_2, "EAP-GPSK: PSK", VAR_3, VAR_4);


 VAR_19 = FUNC_3(2 * VAR_0 + VAR_12 + VAR_10);
 if (VAR_19 == ((void*)0)) {
  FUNC_7(VAR_2, "EAP-GPSK: Failed to allocate memory "
      "for key derivation");
  return -1;
 }

 VAR_20 = VAR_19;
 FUNC_4(VAR_20, VAR_7, VAR_0);
 VAR_20 += VAR_0;
 FUNC_4(VAR_20, VAR_9, VAR_10);
 VAR_20 += VAR_10;
 FUNC_4(VAR_20, VAR_8, VAR_0);
 VAR_20 += VAR_0;
 FUNC_4(VAR_20, VAR_11, VAR_12);
 VAR_20 += VAR_12;
 FUNC_5(VAR_2, "EAP-GPSK: Seed", VAR_19, VAR_20 - VAR_19);

 switch (VAR_6) {
 case 129:
  VAR_21 = FUNC_0(VAR_3, VAR_4, VAR_19, VAR_20 - VAR_19,
            VAR_13, VAR_14, VAR_15, VAR_16,
            VAR_17, VAR_18);
  break;







 default:
  FUNC_7(VAR_2, "EAP-GPSK: Unknown cipher %d:%d used in "
      "key derivation", VAR_5, VAR_6);
  VAR_21 = -1;
  break;
 }

 FUNC_2(VAR_19);

 return VAR_21;
}
