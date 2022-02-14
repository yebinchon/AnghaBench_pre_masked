
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_size_t ;
typedef int uint8_t ;
typedef int uint32_t ;
struct hid_location {scalar_t__ size; } ;
struct hid_item {int kind; int flags; scalar_t__ usage; int report_ID; struct hid_location loc; } ;
struct hid_data {int dummy; } ;
typedef scalar_t__ int32_t ;
typedef enum hid_kind { ____Placeholder_hid_kind } hid_kind ;


 int VAR_0 ;
 int FUNC_0 (struct hid_data*) ;
 scalar_t__ FUNC_1 (struct hid_data*,struct hid_item*) ;
 struct hid_data* FUNC_2 (void const*,int ,int) ;

int
FUNC_3(const void *VAR_1, usb_size_t VAR_2, int32_t VAR_3, enum hid_kind VAR_4,
    uint8_t VAR_5, struct hid_location *VAR_6, uint32_t *VAR_7, uint8_t *VAR_8)
{
 struct hid_data *VAR_9;
 struct hid_item VAR_10;

 for (VAR_9 = FUNC_2(VAR_1, VAR_2, 1 << VAR_4); FUNC_1(VAR_9, &VAR_10);) {
  if (VAR_10.kind == VAR_4 && !(VAR_10.flags & VAR_0) && VAR_10.usage == VAR_3) {
   if (VAR_5--)
    continue;
   if (VAR_6 != ((void*)0))
    *VAR_6 = VAR_10.loc;
   if (VAR_7 != ((void*)0))
    *VAR_7 = VAR_10.flags;
   if (VAR_8 != ((void*)0))
    *VAR_8 = VAR_10.report_ID;
   FUNC_0(VAR_9);
   return (1);
  }
 }
 if (VAR_6 != ((void*)0))
  VAR_6->size = 0;
 if (VAR_7 != ((void*)0))
  *VAR_7 = 0;
 if (VAR_8 != ((void*)0))
  *VAR_8 = 0;
 FUNC_0(VAR_9);
 return (0);
}
