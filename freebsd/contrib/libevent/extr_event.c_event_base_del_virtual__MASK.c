
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_base {scalar_t__ virtual_event_count; } ;


 int FUNC_0 (struct event_base*,int ) ;
 scalar_t__ FUNC_1 (struct event_base*) ;
 int FUNC_2 (struct event_base*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct event_base*) ;
 int VAR_0 ;

void
FUNC_5(struct event_base *VAR_1)
{
 FUNC_0(VAR_1, VAR_0);
 FUNC_3(VAR_1->virtual_event_count > 0);
 VAR_1->virtual_event_count--;
 if (VAR_1->virtual_event_count == 0 && FUNC_1(VAR_1))
  FUNC_4(VAR_1);
 FUNC_2(VAR_1, VAR_0);
}
