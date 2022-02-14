
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_flags; int sa_mask; int sa_handler; } ;
struct event_base {int dummy; } ;
struct event {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct event_base*) ;
 struct event_base* FUNC_2 () ;
 int FUNC_3 (struct event*,int *) ;
 int FUNC_4 (struct event*) ;
 int FUNC_5 (struct event*,int ,int ,struct event*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,struct sigaction*,int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_10(void)
{
 struct event VAR_5;
 struct event_base *VAR_6 = FUNC_2();




 VAR_4 = 0;







 if (FUNC_9(VAR_0, VAR_3) == VAR_1)
  goto out;

 FUNC_5(&VAR_5, VAR_0, VAR_2, &VAR_5);
 FUNC_3(&VAR_5, ((void*)0));
 FUNC_4(&VAR_5);

 FUNC_6(VAR_0);

 if (VAR_4 != 2)
  VAR_4 = 0;
out:
 FUNC_1(VAR_6);
 FUNC_0();
 return;
}
