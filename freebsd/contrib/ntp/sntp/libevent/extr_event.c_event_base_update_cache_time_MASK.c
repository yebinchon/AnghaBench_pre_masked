
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_base {scalar_t__ running_loop; } ;


 int FUNC_0 (struct event_base*,int ) ;
 int FUNC_1 (struct event_base*,int ) ;
 struct event_base* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct event_base*) ;

int
FUNC_3(struct event_base *VAR_2)
{

 if (!VAR_2) {
  VAR_2 = VAR_0;
  if (!VAR_0)
   return -1;
 }

 FUNC_0(VAR_2, VAR_1);
 if (VAR_2->running_loop)
  FUNC_2(VAR_2);
 FUNC_1(VAR_2, VAR_1);
 return 0;
}
