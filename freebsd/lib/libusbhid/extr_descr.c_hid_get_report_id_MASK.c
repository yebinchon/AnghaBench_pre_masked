
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int * report_desc_t ;
struct TYPE_3__ {int report_ID; } ;
typedef TYPE_1__ hid_item_t ;
typedef int hid_data_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,TYPE_1__*) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int,int ,int*) ;

int
FUNC_7(int VAR_4)
{
 report_desc_t VAR_5;
 hid_data_t VAR_6;
 hid_item_t VAR_7;
 int VAR_8;
 int VAR_9 = -1;
 int VAR_10;

 if ((VAR_5 = FUNC_3(VAR_4)) == ((void*)0))
  goto use_ioctl;
 VAR_8 = 1 << VAR_2 | 1 << VAR_3 | 1 << VAR_1;
 for (VAR_6 = FUNC_5(VAR_5, VAR_8, -1); FUNC_2(VAR_6, &VAR_7); ) {

  if (VAR_7.report_ID != 0) {
   VAR_9 = VAR_7.report_ID;
   break;
  }
 }
 FUNC_1(VAR_6);
 FUNC_0(VAR_5);

 if (VAR_9 > 0)
  return (VAR_9);

use_ioctl:
 VAR_10 = FUNC_6(VAR_4, VAR_0, &VAR_9);





  VAR_10 = VAR_9;

 return (VAR_10);
}
