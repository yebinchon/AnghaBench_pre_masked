
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {scalar_t__ mode; int list; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct clock_event_device*,scalar_t__) ;
 int FUNC_2 (struct clock_event_device*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;

void FUNC_7(struct clock_event_device *VAR_2,
     struct clock_event_device *VAR_3)
{
 unsigned long VAR_4;

 FUNC_6(VAR_4);




 if (VAR_2) {
  FUNC_1(VAR_2, VAR_0);
  FUNC_4(&VAR_2->list);
  FUNC_3(&VAR_2->list, &VAR_1);
 }

 if (VAR_3) {
  FUNC_0(VAR_3->mode != VAR_0);
  FUNC_2(VAR_3);
 }
 FUNC_5(VAR_4);
}
