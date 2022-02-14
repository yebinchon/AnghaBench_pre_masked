
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sysentvec {int sv_flags; scalar_t__ sv_shared_page_base; scalar_t__ sv_timekeep_base; int sv_sigcode; int * sv_szsigcode; scalar_t__ sv_sigcode_base; int sv_shared_page_obj; } ;
struct TYPE_6__ {scalar_t__ sv_timekeep_off; } ;
struct TYPE_5__ {scalar_t__ sv_timekeep_off; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_1 () ;
 TYPE_2__* FUNC_2 () ;
 TYPE_2__* VAR_5 ;
 TYPE_1__* VAR_6 ;
 scalar_t__ FUNC_3 (int ,int,int ) ;
 int VAR_7 ;

void
FUNC_4(void *VAR_8)
{
 struct sysentvec *VAR_9;

 VAR_9 = (struct sysentvec *)VAR_8;
 if ((VAR_9->sv_flags & VAR_3) == 0)
  return;
 VAR_9->sv_shared_page_obj = VAR_7;
 VAR_9->sv_sigcode_base = VAR_9->sv_shared_page_base +
     FUNC_3(*(VAR_9->sv_szsigcode), 16, VAR_9->sv_sigcode);
 if ((VAR_9->sv_flags & VAR_1) != VAR_0)
  return;
 if ((VAR_9->sv_flags & VAR_4) != 0) {
   FUNC_0(VAR_6 == ((void*)0), ("Host already registered"));
   VAR_6 = FUNC_1();
   VAR_9->sv_timekeep_base = VAR_9->sv_shared_page_base +
       VAR_6->sv_timekeep_off;



 }
}
