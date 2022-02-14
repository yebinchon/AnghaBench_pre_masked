
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_base {scalar_t__ event_count; scalar_t__ virtual_event_count; scalar_t__ event_count_active; } ;


 int FUNC_0 (struct event_base*,int ) ;
 int FUNC_1 (struct event_base*,int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;

int
FUNC_2(struct event_base *VAR_4, unsigned int VAR_5)
{
 int VAR_6 = 0;

 FUNC_0(VAR_4, VAR_3);

 if (VAR_5 & VAR_0)
  VAR_6 += VAR_4->event_count_active;

 if (VAR_5 & VAR_2)
  VAR_6 += VAR_4->virtual_event_count;

 if (VAR_5 & VAR_1)
  VAR_6 += VAR_4->event_count;

 FUNC_1(VAR_4, VAR_3);

 return VAR_6;
}
