
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int dummy; } ;
struct intr_event {int ie_flags; scalar_t__ ie_count; char* ie_name; int ie_source; int (* ie_post_ithread ) (int ) ;int ie_warncnt; int ie_warntm; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct proc*,struct intr_event*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (int *,int *,int) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(struct proc *VAR_2, struct intr_event *VAR_3)
{


 if (!(VAR_3->ie_flags & VAR_0))
  FUNC_0();
 FUNC_2(VAR_2, VAR_3);
 if (!(VAR_3->ie_flags & VAR_0))
  FUNC_1();
 if (VAR_1 != 0 && VAR_3->ie_count >= VAR_1 &&
     !(VAR_3->ie_flags & VAR_0)) {

  if (FUNC_4(&VAR_3->ie_warntm, &VAR_3->ie_warncnt, 1)) {
   FUNC_5(
 "interrupt storm detected on \"%s\"; throttling interrupt source\n",
       VAR_3->ie_name);
  }
  FUNC_3("istorm", 1);
 } else
  VAR_3->ie_count++;





 if (VAR_3->ie_post_ithread != ((void*)0))
  VAR_3->ie_post_ithread(VAR_3->ie_source);
}
