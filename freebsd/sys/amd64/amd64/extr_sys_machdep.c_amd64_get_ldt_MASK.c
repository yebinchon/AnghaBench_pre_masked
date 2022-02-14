
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u_int ;
struct user_segment_descriptor {int dummy; } ;
struct thread {int* td_retval; TYPE_2__* td_proc; } ;
struct proc_ldt {scalar_t__ ldt_base; } ;
struct i386_ldt_args {int start; int num; scalar_t__ descs; } ;
struct TYPE_3__ {struct proc_ldt* md_ldt; } ;
struct TYPE_4__ {TYPE_1__ p_md; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,scalar_t__,int) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (int,int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int,int,void*) ;

int
FUNC_7(struct thread *VAR_4, struct i386_ldt_args *VAR_5)
{
 struct proc_ldt *VAR_6;
 struct user_segment_descriptor *VAR_7;
 uint64_t *VAR_8;
 u_int VAR_9, VAR_10;
 int VAR_11;






 VAR_6 = VAR_4->td_proc->p_md.md_ldt;
 if (VAR_6 == ((void*)0) || VAR_5->start >= VAR_3 || VAR_5->num == 0) {
  VAR_4->td_retval[0] = 0;
  return (0);
 }
 VAR_10 = FUNC_3(VAR_5->num, VAR_3 - VAR_5->start);
 VAR_7 = &((struct user_segment_descriptor *)(VAR_6->ldt_base))[VAR_5->start];
 VAR_8 = FUNC_2(VAR_10 * sizeof(struct user_segment_descriptor), VAR_0,
     VAR_1);
 FUNC_4(&VAR_2);
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++)
  VAR_8[VAR_9] = ((volatile uint64_t *)VAR_7)[VAR_9];
 FUNC_5(&VAR_2);
 VAR_11 = FUNC_0(VAR_8, VAR_5->descs, VAR_10 *
     sizeof(struct user_segment_descriptor));
 FUNC_1(VAR_8, VAR_0);
 if (VAR_11 == 0)
  VAR_4->td_retval[0] = VAR_10;
 return (VAR_11);
}
