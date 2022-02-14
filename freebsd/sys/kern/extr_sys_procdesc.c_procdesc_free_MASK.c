
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int si_note; } ;
struct procdesc {int pd_flags; TYPE_1__ pd_selinfo; int * pd_proc; int pd_refcount; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct procdesc*) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,struct procdesc*) ;

__attribute__((used)) static void
FUNC_5(struct procdesc *VAR_2)
{







 if (FUNC_3(&VAR_2->pd_refcount)) {
  FUNC_0(VAR_2->pd_proc == ((void*)0),
      ("procdesc_free: pd_proc != NULL"));
  FUNC_0((VAR_2->pd_flags & VAR_0),
      ("procdesc_free: !PDF_CLOSED"));

  FUNC_2(&VAR_2->pd_selinfo.si_note);
  FUNC_1(VAR_2);
  FUNC_4(VAR_1, VAR_2);
 }
}
