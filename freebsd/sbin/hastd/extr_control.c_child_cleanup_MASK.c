
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hast_resource {scalar_t__ hr_workerpid; int * hr_conn; int * hr_event; int * hr_ctrl; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(struct hast_resource *VAR_0)
{

 FUNC_0(VAR_0->hr_ctrl);
 VAR_0->hr_ctrl = ((void*)0);
 if (VAR_0->hr_event != ((void*)0)) {
  FUNC_0(VAR_0->hr_event);
  VAR_0->hr_event = ((void*)0);
 }
 if (VAR_0->hr_conn != ((void*)0)) {
  FUNC_0(VAR_0->hr_conn);
  VAR_0->hr_conn = ((void*)0);
 }
 VAR_0->hr_workerpid = 0;
}
