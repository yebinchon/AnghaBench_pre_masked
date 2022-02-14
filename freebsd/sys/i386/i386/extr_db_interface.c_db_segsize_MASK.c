
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct trapframe {int tf_eflags; int tf_cs; } ;
struct segment_descriptor {scalar_t__ sd_def32; } ;
struct proc_ldt {struct segment_descriptor ldt_sd; } ;
struct TYPE_10__ {TYPE_2__* td_proc; } ;
struct TYPE_9__ {struct segment_descriptor sd; } ;
struct TYPE_8__ {struct segment_descriptor sd; } ;
struct TYPE_6__ {struct proc_ldt* md_ldt; } ;
struct TYPE_7__ {TYPE_1__ p_md; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 size_t FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 size_t VAR_1 ;
 size_t FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_5__* VAR_5 ;
 TYPE_4__* VAR_6 ;
 TYPE_3__* VAR_7 ;

int
FUNC_4(struct trapframe *VAR_8)
{
 struct proc_ldt *VAR_9;
 struct segment_descriptor *VAR_10;
 int VAR_11;

 if (VAR_8 == ((void*)0))
     return (32);
 if (VAR_8->tf_eflags & VAR_2)
     return (16);
 VAR_11 = VAR_8->tf_cs & 0xffff;
 if (VAR_11 == FUNC_0(VAR_0, VAR_3))
     return (32);

 if (FUNC_2(VAR_11)) {
     VAR_9 = VAR_5->td_proc->p_md.md_ldt;
     VAR_10 = (VAR_9 != ((void*)0)) ? &VAR_9->ldt_sd : &VAR_7[0].sd;
 } else {
     VAR_10 = &VAR_6[FUNC_3(VAR_4) * VAR_1].sd;
 }
 return (VAR_10[FUNC_1(VAR_11)].sd_def32 == 0 ? 16 : 32);
}
