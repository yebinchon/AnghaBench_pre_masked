
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union descriptor {int dummy; } descriptor ;
typedef int u_int ;
struct thread {int* td_retval; TYPE_2__* td_proc; } ;
struct proc_ldt {int ldt_len; scalar_t__ ldt_base; } ;
struct i386_ldt_args {int start; int num; scalar_t__ descs; } ;
struct TYPE_3__ {struct proc_ldt* md_ldt; } ;
struct TYPE_4__ {TYPE_1__ p_md; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (union descriptor*,char*,int) ;
 int FUNC_1 (char*,scalar_t__,int) ;
 int VAR_4 ;
 int FUNC_2 (char*,int ) ;
 union descriptor* VAR_5 ;
 char* FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int,int,void*) ;

int
FUNC_8(struct thread *VAR_6, struct i386_ldt_args *VAR_7)
{
 struct proc_ldt *VAR_8;
 char *VAR_9;
 u_int VAR_10, VAR_11;
 int VAR_12;






 VAR_11 = FUNC_4(VAR_7->num, VAR_0);
 VAR_9 = FUNC_3(VAR_11 * sizeof(union descriptor), VAR_1, VAR_2);
 FUNC_5(&VAR_4);
 VAR_8 = VAR_6->td_proc->p_md.md_ldt;
 VAR_10 = VAR_8 != ((void*)0) ? VAR_8->ldt_len : VAR_3;
 if (VAR_7->start >= VAR_10) {
  VAR_11 = 0;
 } else {
  VAR_11 = FUNC_4(VAR_11, VAR_10 - VAR_7->start);
  FUNC_0(VAR_8 != ((void*)0) ?
      &((union descriptor *)(VAR_8->ldt_base))[VAR_7->start] :
      &VAR_5[VAR_7->start], VAR_9, VAR_11 * sizeof(union descriptor));
 }
 FUNC_6(&VAR_4);
 VAR_12 = FUNC_1(VAR_9, VAR_7->descs, VAR_11 * sizeof(union descriptor));
 if (VAR_12 == 0)
  VAR_6->td_retval[0] = VAR_11;
 FUNC_2(VAR_9, VAR_1);
 return (VAR_12);
}
