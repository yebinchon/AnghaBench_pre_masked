
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union descriptor {int dummy; } descriptor ;
struct thread {TYPE_1__* td_proc; } ;
struct proc_ldt {int ldt_len; scalar_t__ ldt_base; int ldt_sd; } ;
struct mdproc {struct proc_ldt* md_ldt; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_2__ {struct mdproc p_md; int p_vmspace; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct proc_ldt*,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (struct mdproc*) ;
 int VAR_7 ;
 int FUNC_6 (int *,int ,int *,int ) ;
 struct proc_ldt* FUNC_7 (struct mdproc*,int) ;

__attribute__((used)) static int
FUNC_8(struct thread *VAR_8, int VAR_9)
{
 struct mdproc *VAR_10;
 struct proc_ldt *VAR_11, *VAR_12;
 caddr_t VAR_13;
 int VAR_14;

 FUNC_1(&VAR_6, VAR_2);

 if (VAR_9 > VAR_1)
  return (VAR_0);
 if (VAR_9 < VAR_4 + 1)
  VAR_9 = VAR_4 + 1;

 VAR_10 = &VAR_8->td_proc->p_md;
 VAR_13 = VAR_5;
 VAR_14 = 0;


 if ((VAR_12 = VAR_10->md_ldt) == ((void*)0) || VAR_9 > VAR_12->ldt_len) {
  VAR_11 = FUNC_7(VAR_10, VAR_9);
  if (VAR_11 == ((void*)0))
   return (VAR_0);
  VAR_12 = VAR_10->md_ldt;

  if (VAR_12 != ((void*)0)) {
   if (VAR_11->ldt_len <= VAR_12->ldt_len) {




    FUNC_3(&VAR_6);
    FUNC_4(VAR_11->ldt_base,
       VAR_11->ldt_len * sizeof(union descriptor));
    FUNC_0(VAR_11, VAR_3);
    FUNC_2(&VAR_6);
    return (0);
   }





   VAR_13 = VAR_12->ldt_base;
   VAR_14 = VAR_12->ldt_len;
   VAR_12->ldt_sd = VAR_11->ldt_sd;
   VAR_12->ldt_base = VAR_11->ldt_base;
   VAR_12->ldt_len = VAR_11->ldt_len;
  } else
   VAR_10->md_ldt = VAR_12 = VAR_11;
  FUNC_5(&VAR_8->td_proc->p_md);
  FUNC_3(&VAR_6);

  if (VAR_13 != VAR_5) {
   FUNC_4(VAR_13, VAR_14 *
       sizeof(union descriptor));
   FUNC_0(VAR_11, VAR_3);
  }
  FUNC_2(&VAR_6);
 }
 return (0);
}
