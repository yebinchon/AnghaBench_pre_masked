
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct wps_parse_attr {int num_vendor_ext; int* vendor_ext_len; int const** vendor_ext; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const*) ;
 int VAR_3 ;

 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct wps_parse_attr*,int const*,int) ;

__attribute__((used)) static int FUNC_3(struct wps_parse_attr *VAR_4, const u8 *VAR_5,
    u16 VAR_6)
{
 u32 VAR_7;

 if (VAR_6 < 3) {
  FUNC_1(VAR_1, "WPS: Skip invalid Vendor Extension");
  return 0;
 }

 VAR_7 = FUNC_0(VAR_5);
 switch (VAR_7) {
 case 128:
  return FUNC_2(VAR_4, VAR_5 + 3, VAR_6 - 3);
 }



 FUNC_1(VAR_2, "WPS: Unknown Vendor Extension (Vendor ID %u)",
     VAR_7);

 if (VAR_6 > VAR_3) {
  FUNC_1(VAR_1, "WPS: Too long Vendor Extension (%u)",
      VAR_6);
  return -1;
 }

 if (VAR_4->num_vendor_ext >= VAR_0) {
  FUNC_1(VAR_1, "WPS: Skipped Vendor Extension "
      "attribute (max %d vendor extensions)",
      VAR_0);
  return -1;
 }
 VAR_4->vendor_ext[VAR_4->num_vendor_ext] = VAR_5;
 VAR_4->vendor_ext_len[VAR_4->num_vendor_ext] = VAR_6;
 VAR_4->num_vendor_ext++;

 return 0;
}
