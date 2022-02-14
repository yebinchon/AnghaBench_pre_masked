
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ u_int8_t ;
typedef scalar_t__ u_int32_t ;
struct hid_item {scalar_t__ report_ID; int kind; int flags; scalar_t__ usage; } ;
struct hid_data {int dummy; } ;
typedef enum hid_kind { ____Placeholder_hid_kind } hid_kind ;


 int VAR_0 ;
 int FUNC_0 (struct hid_data*) ;
 scalar_t__ FUNC_1 (struct hid_data*,struct hid_item*) ;
 struct hid_data* FUNC_2 (void const*,int,int) ;

__attribute__((used)) static int
FUNC_3(const void *VAR_1, int VAR_2, u_int32_t VAR_3, u_int8_t VAR_4,
    enum hid_kind VAR_5, struct hid_item *VAR_6)
{
 struct hid_data *VAR_7;
 struct hid_item VAR_8;

 VAR_8.report_ID = 0;
 for (VAR_7 = FUNC_2(VAR_1, VAR_2, VAR_5); FUNC_1(VAR_7, &VAR_8); ) {
  if (VAR_8.kind == VAR_5 && !(VAR_8.flags & VAR_0) &&
      ( uint32_t)VAR_8.usage == VAR_3 && VAR_8.report_ID == VAR_4) {
   if (VAR_6 != ((void*)0))
    *VAR_6 = VAR_8;
   FUNC_0(VAR_7);
   return (1);
  }
 }
 FUNC_0(VAR_7);
 return (0);
}
