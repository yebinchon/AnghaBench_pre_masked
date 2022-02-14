
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hid_item {int kind; int pos; int report_size; int report_count; scalar_t__ report_ID; } ;
struct hid_data {int dummy; } ;
typedef int report_desc_t ;
typedef enum hid_kind { ____Placeholder_hid_kind } hid_kind ;


 int FUNC_0 (struct hid_data*) ;
 scalar_t__ FUNC_1 (struct hid_data*,struct hid_item*) ;
 struct hid_data* FUNC_2 (int ,int,int) ;
 int FUNC_3 (struct hid_item*,int ,int) ;

int
FUNC_4(report_desc_t VAR_0, enum hid_kind VAR_1, int VAR_2)
{
 struct hid_data *VAR_3;
 struct hid_item VAR_4;
 uint32_t VAR_5;
 uint32_t VAR_6;
 uint32_t VAR_7;
 int VAR_8 = 0;

 VAR_6 = 0;
 VAR_7 = 0xFFFFFFFF;

 FUNC_3(&VAR_4, 0, sizeof VAR_4);
 for (VAR_3 = FUNC_2(VAR_0, 1 << VAR_1, VAR_2); FUNC_1(VAR_3, &VAR_4); ) {
  if (VAR_4.kind == VAR_1) {

   if (VAR_7 > VAR_4.pos)
    VAR_7 = VAR_4.pos;

   VAR_5 = VAR_4.pos + (VAR_4.report_size * VAR_4.report_count);

   if (VAR_6 < VAR_5)
    VAR_6 = VAR_5;
   if (VAR_4.report_ID != 0)
    VAR_8 = 1;
  }
 }
 FUNC_0(VAR_3);


 if (VAR_7 > VAR_6)
  VAR_5 = 0;
 else
  VAR_5 = VAR_6 - VAR_7;


 return ((VAR_5 + 7) / 8 + VAR_8);
}
