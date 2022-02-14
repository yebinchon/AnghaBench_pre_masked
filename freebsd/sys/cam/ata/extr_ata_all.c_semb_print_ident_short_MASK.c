
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vendor ;
struct sep_identify_data {int firmware_rev; int product_rev; int product_id; int vendor_id; } ;
typedef int revision ;
typedef int product ;
typedef int fw ;


 int FUNC_0 (char*,int ,int,int) ;
 int FUNC_1 (char*,char*,char*,char*,char*) ;

void
FUNC_2(struct sep_identify_data *VAR_0)
{
 char VAR_1[9], VAR_2[17], VAR_3[5], VAR_4[5];

 FUNC_0(VAR_1, VAR_0->vendor_id, 8, sizeof(VAR_1));
 FUNC_0(VAR_2, VAR_0->product_id, 16, sizeof(VAR_2));
 FUNC_0(VAR_3, VAR_0->product_rev, 4, sizeof(VAR_3));
 FUNC_0(VAR_4, VAR_0->firmware_rev, 4, sizeof(VAR_4));
 FUNC_1("<%s %s %s %s>", VAR_1, VAR_2, VAR_3, VAR_4);
}
