
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vendor_id ;
typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct radius_msg {int dummy; } ;
struct radius_attr_vendor {int vendor_length; int vendor_type; } ;
struct radius_attr_hdr {int dummy; } ;
typedef int salt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int const*,size_t,int,int const*,int const*,size_t,int *,size_t*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int * FUNC_5 (int) ;
 int FUNC_6 (int *,int *,int) ;
 struct radius_attr_hdr* FUNC_7 (struct radius_msg*,int ,int *,int) ;

int FUNC_8(struct radius_msg *VAR_4,
        const u8 *VAR_5,
        const u8 *VAR_6, size_t VAR_7,
        const u8 *VAR_8, size_t VAR_9,
        const u8 *VAR_10, size_t VAR_11)
{
 struct radius_attr_hdr *VAR_12;
 u32 VAR_13 = FUNC_2(VAR_3);
 u8 *VAR_14;
 struct radius_attr_vendor *VAR_15;
 u8 *VAR_16;
 size_t VAR_17;
 int VAR_18;
 u16 VAR_19;

 VAR_18 = sizeof(VAR_13) + sizeof(*VAR_15) + 2;


 VAR_14 = FUNC_5(VAR_18 + VAR_9 + 16);
 if (VAR_14 == ((void*)0)) {
  return 0;
 }
 VAR_16 = VAR_14;
 FUNC_6(VAR_16, &VAR_13, sizeof(VAR_13));
 VAR_16 += sizeof(VAR_13);
 VAR_15 = (struct radius_attr_vendor *) VAR_16;
 VAR_15->vendor_type = VAR_2;
 VAR_16 = (u8 *) (VAR_15 + 1);
 if (FUNC_4((u8 *) &VAR_19, sizeof(VAR_19)) < 0) {
  FUNC_3(VAR_14);
  return 0;
 }
 VAR_19 |= 0x8000;
 FUNC_0(VAR_16, VAR_19);
 VAR_16 += 2;
 FUNC_1(VAR_8, VAR_9, VAR_19, VAR_5, VAR_6,
         VAR_7, VAR_16, &VAR_17);
 VAR_15->vendor_length = VAR_18 + VAR_17 - sizeof(VAR_13);

 VAR_12 = FUNC_7(VAR_4, VAR_0,
       VAR_14, VAR_18 + VAR_17);
 FUNC_3(VAR_14);
 if (VAR_12 == ((void*)0)) {
  return 0;
 }


 VAR_14 = FUNC_5(VAR_18 + VAR_11 + 16);
 if (VAR_14 == ((void*)0)) {
  return 0;
 }
 VAR_16 = VAR_14;
 FUNC_6(VAR_16, &VAR_13, sizeof(VAR_13));
 VAR_16 += sizeof(VAR_13);
 VAR_15 = (struct radius_attr_vendor *) VAR_16;
 VAR_15->vendor_type = VAR_1;
 VAR_16 = (u8 *) (VAR_15 + 1);
 VAR_19 ^= 1;
 FUNC_0(VAR_16, VAR_19);
 VAR_16 += 2;
 FUNC_1(VAR_10, VAR_11, VAR_19, VAR_5, VAR_6,
         VAR_7, VAR_16, &VAR_17);
 VAR_15->vendor_length = VAR_18 + VAR_17 - sizeof(VAR_13);

 VAR_12 = FUNC_7(VAR_4, VAR_0,
       VAR_14, VAR_18 + VAR_17);
 FUNC_3(VAR_14);
 if (VAR_12 == ((void*)0)) {
  return 0;
 }

 return 1;
}
