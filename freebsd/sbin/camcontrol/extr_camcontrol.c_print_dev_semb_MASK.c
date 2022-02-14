
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vendor ;
struct sep_identify_data {int firmware_rev; int product_rev; int product_id; int vendor_id; } ;
struct device_match_result {int ident_data; } ;
typedef int revision ;
typedef int product ;
typedef int fw ;


 int FUNC_0 (char*,int ,int,int) ;
 int FUNC_1 (char*,char*,char*,char*,char*,char*) ;

__attribute__((used)) static int
FUNC_2(struct device_match_result *VAR_0, char *VAR_1)
{
 struct sep_identify_data *VAR_2;
 char VAR_3[16], VAR_4[48], VAR_5[16], VAR_6[5];

 VAR_2 = (struct sep_identify_data *)&VAR_0->ident_data;
 FUNC_0(VAR_3, VAR_2->vendor_id,
     sizeof(VAR_2->vendor_id), sizeof(VAR_3));
 FUNC_0(VAR_4, VAR_2->product_id,
     sizeof(VAR_2->product_id), sizeof(VAR_4));
 FUNC_0(VAR_5, VAR_2->product_rev,
     sizeof(VAR_2->product_rev), sizeof(VAR_5));
 FUNC_0(VAR_6, VAR_2->firmware_rev,
     sizeof(VAR_2->firmware_rev), sizeof(VAR_6));
 FUNC_1(VAR_1, "<%s %s %s %s>", VAR_3, VAR_4, VAR_5, VAR_6);

 return (0);
}
