
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef scalar_t__ vm_offset_t ;
struct user_segment_descriptor {int dummy; } ;
struct soft_segment_descriptor {int ssd_limit; int ssd_p; scalar_t__ ssd_gran; scalar_t__ ssd_def32; scalar_t__ ssd_long; int ssd_dpl; int ssd_type; scalar_t__ ssd_base; } ;
struct proc_ldt {int ldt_refcnt; scalar_t__ ldt_base; } ;
struct mdproc {struct proc_ldt* md_ldt; int md_ldt_sd; } ;
struct proc {int p_vmspace; struct mdproc p_md; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__,scalar_t__,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_6 ;
 int FUNC_4 (struct proc_ldt*,int ) ;
 int FUNC_5 (scalar_t__,int) ;
 scalar_t__ FUNC_6 (int,int) ;
 struct proc_ldt* FUNC_7 (int,int ,int) ;
 int VAR_7 ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (scalar_t__,scalar_t__,int) ;
 int FUNC_12 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_8 ;
 int FUNC_13 (int *,void (*) (void*),int *,int ) ;
 int FUNC_14 (struct soft_segment_descriptor*,int *) ;
 int FUNC_15 (struct proc_ldt*) ;

struct proc_ldt *
FUNC_16(struct proc *VAR_9, int VAR_10)
{
 struct proc_ldt *VAR_11, *VAR_12;
 struct mdproc *VAR_13;
 struct soft_segment_descriptor VAR_14;
 vm_offset_t VAR_15;
 vm_size_t VAR_16;

 FUNC_8(&VAR_6, VAR_0);
 VAR_13 = &VAR_9->p_md;
 if (!VAR_10 && VAR_13->md_ldt != ((void*)0))
  return (VAR_13->md_ldt);
 FUNC_10(&VAR_6);
 VAR_12 = FUNC_7(sizeof(struct proc_ldt), VAR_1, VAR_2);
 VAR_16 = VAR_7 * sizeof(struct user_segment_descriptor);
 VAR_15 = FUNC_6(VAR_16, VAR_2 | VAR_3);
 VAR_12->ldt_base = (caddr_t)VAR_15;
 FUNC_11(VAR_15, VAR_15 + VAR_16, 0);
 VAR_12->ldt_refcnt = 1;
 VAR_14.ssd_base = VAR_15;
 VAR_14.ssd_limit = VAR_16 - 1;
 VAR_14.ssd_type = VAR_4;
 VAR_14.ssd_dpl = VAR_5;
 VAR_14.ssd_p = 1;
 VAR_14.ssd_long = 0;
 VAR_14.ssd_def32 = 0;
 VAR_14.ssd_gran = 0;
 FUNC_9(&VAR_6);
 VAR_11 = VAR_13->md_ldt;
 if (VAR_11 != ((void*)0) && !VAR_10) {
  FUNC_12(VAR_15, VAR_15 + VAR_16);
  FUNC_5(VAR_15, VAR_16);
  FUNC_4(VAR_12, VAR_1);
  return (VAR_11);
 }

 if (VAR_11 != ((void*)0)) {
  FUNC_1(VAR_11->ldt_base, VAR_12->ldt_base, VAR_7 *
      sizeof(struct user_segment_descriptor));
  FUNC_15(VAR_11);
 }
 FUNC_2();
 FUNC_14(&VAR_14, &VAR_9->p_md.md_ldt_sd);
 FUNC_0();
 VAR_13->md_ldt = VAR_12;
 FUNC_3();
 FUNC_13(((void*)0), (void (*)(void *))VAR_8, ((void*)0),
     VAR_9->p_vmspace);

 return (VAR_13->md_ldt);
}
