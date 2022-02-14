
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_base {int event_break; } ;


 int FUNC_0 (struct event_base*,int ) ;
 scalar_t__ FUNC_1 (struct event_base*) ;
 int FUNC_2 (struct event_base*,int ) ;
 int FUNC_3 (struct event_base*) ;
 int VAR_0 ;

int
FUNC_4(struct event_base *VAR_1)
{
 int VAR_2 = 0;
 if (VAR_1 == ((void*)0))
  return (-1);

 FUNC_0(VAR_1, VAR_0);
 VAR_1->event_break = 1;

 if (FUNC_1(VAR_1)) {
  VAR_2 = FUNC_3(VAR_1);
 } else {
  VAR_2 = (0);
 }
 FUNC_2(VAR_1, VAR_0);
 return VAR_2;
}
