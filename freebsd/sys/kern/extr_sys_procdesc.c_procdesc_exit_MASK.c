
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int si_note; } ;
struct procdesc {int pd_flags; TYPE_1__ pd_selinfo; int * pd_proc; int pd_xstat; } ;
struct proc {scalar_t__ p_pptr; scalar_t__ p_reaper; struct procdesc* p_procdesc; int p_xsig; int p_xexit; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct procdesc*) ;
 int FUNC_4 (struct procdesc*) ;
 int FUNC_5 (struct proc*,int ) ;
 int VAR_5 ;
 int FUNC_6 (struct procdesc*) ;
 int VAR_6 ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *,int ) ;

int
FUNC_9(struct proc *VAR_7)
{
 struct procdesc *VAR_8;

 FUNC_8(&VAR_6, VAR_5);
 FUNC_5(VAR_7, VAR_0);
 FUNC_0(VAR_7->p_procdesc != ((void*)0), ("procdesc_exit: p_procdesc NULL"));

 VAR_8 = VAR_7->p_procdesc;

 FUNC_3(VAR_8);
 FUNC_0((VAR_8->pd_flags & VAR_2) == 0 || VAR_7->p_pptr == VAR_7->p_reaper,
     ("procdesc_exit: closed && parent not reaper"));

 VAR_8->pd_flags |= VAR_3;
 VAR_8->pd_xstat = FUNC_2(VAR_7->p_xexit, VAR_7->p_xsig);







 if (VAR_8->pd_flags & VAR_2) {
  FUNC_4(VAR_8);
  VAR_8->pd_proc = ((void*)0);
  VAR_7->p_procdesc = ((void*)0);
  FUNC_6(VAR_8);
  return (1);
 }
 if (VAR_8->pd_flags & VAR_4) {
  VAR_8->pd_flags &= ~VAR_4;
  FUNC_7(&VAR_8->pd_selinfo);
 }
 FUNC_1(&VAR_8->pd_selinfo.si_note, VAR_1);
 FUNC_4(VAR_8);
 return (0);
}
