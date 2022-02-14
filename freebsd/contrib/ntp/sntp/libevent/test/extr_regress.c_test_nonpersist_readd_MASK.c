
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct event*,int *) ;
 int FUNC_2 (struct event*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct event*,int ,int *) ;
 int FUNC_5 (struct event*,int ,int ,int ,struct event*) ;
 int FUNC_6 (int) ;
 int * VAR_2 ;
 int VAR_3 ;
 struct event* VAR_4 ;
 int FUNC_7 (char*) ;
 int VAR_5 ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_10(void)
{
 struct event VAR_6, VAR_7;

 FUNC_7("Re-add nonpersistent events: ");
 FUNC_5(&VAR_6, VAR_2[0], VAR_1, VAR_3, &VAR_7);
 FUNC_5(&VAR_7, VAR_2[1], VAR_1, VAR_3, &VAR_6);

 if (FUNC_9(VAR_2[0], "Hello", 5) < 0) {
  FUNC_8("write(pair[0])");
 }

 if (FUNC_9(VAR_2[1], "Hello", 5) < 0) {
  FUNC_8("write(pair[1])\n");
 }

 if (FUNC_1(&VAR_6, ((void*)0)) == -1 ||
     FUNC_1(&VAR_7, ((void*)0)) == -1) {
  VAR_5 = 0;
 }
 if (VAR_5 != 0)
  FUNC_6(1);
 FUNC_3(VAR_0);
 if (VAR_5 != 2)
  FUNC_6(1);





 if (!VAR_4) {
  VAR_5 = 0;
 } else if (VAR_4 == &VAR_6) {
  if (!FUNC_4(&VAR_6, VAR_1, ((void*)0)) ||
      FUNC_4(&VAR_7, VAR_1, ((void*)0)))
   VAR_5 = 0;
 } else {
  if (FUNC_4(&VAR_6, VAR_1, ((void*)0)) ||
      !FUNC_4(&VAR_7, VAR_1, ((void*)0)))
   VAR_5 = 0;
 }

 FUNC_2(&VAR_6);
 FUNC_2(&VAR_7);

 FUNC_0();
}
