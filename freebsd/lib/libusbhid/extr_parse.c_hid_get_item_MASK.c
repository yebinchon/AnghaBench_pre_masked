
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int report_ID; } ;
typedef TYPE_1__ hid_item_t ;
typedef TYPE_2__* hid_data_t ;
struct TYPE_8__ {int reportid; } ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;

int
FUNC_1(hid_data_t VAR_0, hid_item_t *VAR_1)
{
 int VAR_2;

 for (;;) {
  VAR_2 = FUNC_0(VAR_0, VAR_1);
  if (VAR_2 <= 0 || VAR_0->reportid == -1 || VAR_1->report_ID == VAR_0->reportid)
   break;
 }
 return (VAR_2);
}
