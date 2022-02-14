
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_base {int dummy; } ;
struct event {int dummy; } ;
struct basic_test_data {int * pair; } ;
struct basic_cb_args {scalar_t__ callcount; struct event* ev; struct event_base* eb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct event*,int *) ;
 int FUNC_1 (struct event*,struct event_base*,int ,int,int ,struct basic_cb_args*) ;
 int FUNC_2 (struct event_base*) ;
 scalar_t__ FUNC_3 (struct event_base*,int ) ;
 struct event_base* FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_11(void *VAR_5)
{
 struct basic_test_data *VAR_6 = VAR_5;
 struct event_base *VAR_7 = 0;
 struct event VAR_8;
 struct basic_cb_args VAR_9;

 int VAR_10 = (int)FUNC_6(VAR_3)+1;
 int VAR_11 = FUNC_10(VAR_6->pair[0], VAR_3, VAR_10);

 if (VAR_11 < 0)
  FUNC_8("initial write");
 else if (VAR_11 != VAR_10)
  FUNC_9(("initial write fell short (%d of %d bytes)",
     VAR_11, VAR_10));

 if (FUNC_5(VAR_6->pair[0], VAR_0))
  FUNC_8("initial write shutdown");

 VAR_7 = FUNC_4();
 if (!VAR_7)
  FUNC_7("failed to create event base");

 VAR_9.eb = VAR_7;
 VAR_9.ev = &VAR_8;
 VAR_9.callcount = 0;
 FUNC_1(&VAR_8, VAR_7, VAR_6->pair[1],
       VAR_2|VAR_1, VAR_4, &VAR_9);

 if (FUNC_0(&VAR_8, ((void*)0)))
  FUNC_8("initial event_add");

 if (FUNC_3(VAR_7, 0))
  FUNC_7("unsuccessful exit from event loop");

end:
 if (VAR_7)
  FUNC_2(VAR_7);
}
