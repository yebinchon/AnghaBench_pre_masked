
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {scalar_t__ mode; int list; int cpumask; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,struct clock_event_device*) ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(struct clock_event_device *VAR_4)
{
 unsigned long VAR_5;

 FUNC_0(VAR_4->mode != VAR_0);
 FUNC_0(!VAR_4->cpumask);

 FUNC_4(&VAR_3, VAR_5);

 FUNC_3(&VAR_4->list, &VAR_2);
 FUNC_1(VAR_1, VAR_4);
 FUNC_2();

 FUNC_5(&VAR_3, VAR_5);
}
