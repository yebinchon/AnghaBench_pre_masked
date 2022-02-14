
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_base {int virtual_event_count; int virtual_event_count_max; } ;


 int FUNC_0 (struct event_base*,int ) ;
 int FUNC_1 (struct event_base*,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;

void
FUNC_3(struct event_base *VAR_1)
{
 FUNC_0(VAR_1, VAR_0);
 VAR_1->virtual_event_count++;
 FUNC_2(VAR_1->virtual_event_count_max, VAR_1->virtual_event_count);
 FUNC_1(VAR_1, VAR_0);
}
