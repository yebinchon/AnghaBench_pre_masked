
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
struct hid_item {scalar_t__ report_ID; } ;
struct hid_data {scalar_t__* pos; TYPE_1__* last_pos; } ;
typedef scalar_t__ int32_t ;
struct TYPE_2__ {scalar_t__ rid; scalar_t__* pos; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct hid_data *VAR_2, struct hid_item *VAR_3, int32_t VAR_4)
{
 uint8_t VAR_5, VAR_6;



 if (VAR_3->report_ID == VAR_4)
  return;



 if (VAR_3->report_ID == 0) {
  VAR_5 = 0;
 } else {
  for (VAR_5 = 1; VAR_5 != VAR_1; VAR_5++) {
   if (VAR_2->last_pos[VAR_5].rid == VAR_3->report_ID)
    break;
   if (VAR_2->last_pos[VAR_5].rid == 0)
    break;
  }
 }
 if (VAR_5 != VAR_1) {
  VAR_2->last_pos[VAR_5].rid = VAR_3->report_ID;
  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
   VAR_2->last_pos[VAR_5].pos[VAR_6] = VAR_2->pos[VAR_6];
 }



 VAR_3->report_ID = VAR_4;



 if (VAR_4 == 0) {
  VAR_5 = 0;
 } else {
  for (VAR_5 = 1; VAR_5 != VAR_1; VAR_5++) {
   if (VAR_2->last_pos[VAR_5].rid == VAR_4)
    break;
   if (VAR_2->last_pos[VAR_5].rid == 0)
    break;
  }
 }
 if (VAR_5 != VAR_1) {
  VAR_2->last_pos[VAR_5].rid = VAR_4;
  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
   VAR_2->pos[VAR_6] = VAR_2->last_pos[VAR_5].pos[VAR_6];
 } else {
  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
   VAR_2->pos[VAR_6] = 0;
 }
}
