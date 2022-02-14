
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct hid_data {int dummy; } ;
typedef int report_desc_t ;
struct TYPE_4__ {int kind; int flags; unsigned int usage; scalar_t__ report_size; } ;
typedef TYPE_1__ hid_item_t ;
typedef enum hid_kind { ____Placeholder_hid_kind } hid_kind ;


 int VAR_0 ;
 int FUNC_0 (struct hid_data*) ;
 scalar_t__ FUNC_1 (struct hid_data*,TYPE_1__*) ;
 struct hid_data* FUNC_2 (int ,int,int) ;

int
FUNC_3(report_desc_t VAR_1, unsigned int VAR_2, enum hid_kind VAR_3,
    hid_item_t *VAR_4, int VAR_5)
{
 struct hid_data *VAR_6;

 for (VAR_6 = FUNC_2(VAR_1, 1 << VAR_3, VAR_5); FUNC_1(VAR_6, VAR_4); ) {
  if (VAR_4->kind == VAR_3 && !(VAR_4->flags & VAR_0) && VAR_4->usage == VAR_2) {
   FUNC_0(VAR_6);
   return (1);
  }
 }
 FUNC_0(VAR_6);
 VAR_4->report_size = 0;
 return (0);
}
