
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_callback {int evcb_flags; } ;
struct event_base {int dummy; } ;


 scalar_t__ FUNC_0 (struct event_base*) ;


 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct event_base*,struct event_callback*) ;
 int FUNC_3 (struct event_base*,struct event_callback*) ;
 int FUNC_4 (struct event_base*) ;

int
FUNC_5(struct event_base *VAR_1,
    struct event_callback *VAR_2)
{
 int VAR_3 = 1;

 if (VAR_2->evcb_flags & VAR_0)
  return 0;

 switch (VAR_2->evcb_flags & (129|128)) {
 default:
  FUNC_1(0);
 case 128:
  FUNC_3(VAR_1, VAR_2);
  VAR_3 = 0;
  break;
 case 129:
  return 0;
 case 0:
  break;
 }

 FUNC_2(VAR_1, VAR_2);

 if (FUNC_0(VAR_1))
  FUNC_4(VAR_1);

 return VAR_3;
}
