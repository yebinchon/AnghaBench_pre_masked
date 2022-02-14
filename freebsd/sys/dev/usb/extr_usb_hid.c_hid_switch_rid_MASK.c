
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_4__ {int pos; } ;
struct hid_item {scalar_t__ report_ID; TYPE_2__ loc; } ;
struct hid_data {TYPE_1__* last_pos; } ;
typedef scalar_t__ int32_t ;
struct TYPE_3__ {scalar_t__ rid; int pos; } ;


 int FUNC_0 (char*) ;
 size_t VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct hid_data *VAR_1, struct hid_item *VAR_2, int32_t VAR_3)
{
 uint8_t VAR_4;



 if (VAR_2->report_ID == VAR_3)
  return;



 if (VAR_2->report_ID == 0) {
  VAR_4 = 0;
 } else {
  for (VAR_4 = 1; VAR_4 != VAR_0; VAR_4++) {
   if (VAR_1->last_pos[VAR_4].rid == VAR_2->report_ID)
    break;
   if (VAR_1->last_pos[VAR_4].rid == 0)
    break;
  }
 }
 if (VAR_4 != VAR_0) {
  VAR_1->last_pos[VAR_4].rid = VAR_2->report_ID;
  VAR_1->last_pos[VAR_4].pos = VAR_2->loc.pos;
 }



 VAR_2->report_ID = VAR_3;



 if (VAR_3 == 0) {
  VAR_4 = 0;
 } else {
  for (VAR_4 = 1; VAR_4 != VAR_0; VAR_4++) {
   if (VAR_1->last_pos[VAR_4].rid == VAR_3)
    break;
   if (VAR_1->last_pos[VAR_4].rid == 0)
    break;
  }
 }
 if (VAR_4 != VAR_0) {
  VAR_1->last_pos[VAR_4].rid = VAR_3;
  VAR_2->loc.pos = VAR_1->last_pos[VAR_4].pos;
 } else {
  FUNC_0("Out of RID entries, position is set to zero!\n");
  VAR_2->loc.pos = 0;
 }
}
