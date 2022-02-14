
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event {int ev_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct event*) ;
 int FUNC_1 (struct event*) ;

void
FUNC_2(struct event *VAR_1)
{
 FUNC_0(VAR_1);
 FUNC_1(VAR_1);

 VAR_1->ev_flags &= ~VAR_0;
}
