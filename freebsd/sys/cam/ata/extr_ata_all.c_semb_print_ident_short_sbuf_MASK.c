
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sep_identify_data {int firmware_rev; int product_rev; int product_id; int vendor_id; } ;
struct sbuf {int dummy; } ;


 int FUNC_0 (struct sbuf*,int ,int,int ) ;
 int FUNC_1 (struct sbuf*,char*) ;

void
FUNC_2(struct sep_identify_data *VAR_0, struct sbuf *VAR_1)
{

 FUNC_1(VAR_1, "<");
 FUNC_0(VAR_1, VAR_0->vendor_id, 8, 0);
 FUNC_1(VAR_1, " ");
 FUNC_0(VAR_1, VAR_0->product_id, 16, 0);
 FUNC_1(VAR_1, " ");
 FUNC_0(VAR_1, VAR_0->product_rev, 4, 0);
 FUNC_1(VAR_1, " ");
 FUNC_0(VAR_1, VAR_0->firmware_rev, 4, 0);
 FUNC_1(VAR_1, ">");
}
