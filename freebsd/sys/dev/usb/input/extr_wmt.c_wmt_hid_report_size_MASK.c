
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_2__ {int pos; int size; int count; } ;
struct hid_item {int kind; scalar_t__ report_ID; TYPE_1__ loc; } ;
struct hid_data {int dummy; } ;
typedef enum hid_kind { ____Placeholder_hid_kind } hid_kind ;


 int FUNC_0 (struct hid_data*) ;
 scalar_t__ FUNC_1 (struct hid_data*,struct hid_item*) ;
 struct hid_data* FUNC_2 (void const*,int ,int) ;

__attribute__((used)) static int
FUNC_3(const void *VAR_0, uint16_t VAR_1, enum hid_kind VAR_2, uint8_t VAR_3)
{
 struct hid_data *VAR_4;
 struct hid_item VAR_5;
 uint32_t VAR_6;
 uint32_t VAR_7;
 uint32_t VAR_8;
 int VAR_9 = 0;

 VAR_7 = 0;
 VAR_8 = 0xFFFFFFFF;

 for (VAR_4 = FUNC_2(VAR_0, VAR_1, 1 << VAR_2); FUNC_1(VAR_4, &VAR_5);) {
  if (VAR_5.kind == VAR_2 && VAR_5.report_ID == VAR_3) {

   if (VAR_8 > VAR_5.loc.pos)
    VAR_8 = VAR_5.loc.pos;

   VAR_6 = VAR_5.loc.pos + (VAR_5.loc.size * VAR_5.loc.count);

   if (VAR_7 < VAR_6)
    VAR_7 = VAR_6;
   if (VAR_5.report_ID != 0)
    VAR_9 = 1;
  }
 }
 FUNC_0(VAR_4);


 if (VAR_8 > VAR_7)
  VAR_6 = 0;
 else
  VAR_6 = VAR_7 - VAR_8;


 return ((VAR_6 + 7) / 8 + VAR_9);
}
