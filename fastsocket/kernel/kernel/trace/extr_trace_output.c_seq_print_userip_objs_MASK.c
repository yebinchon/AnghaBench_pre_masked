
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct userstack_entry {unsigned long* caller; int tgid; } ;
struct trace_seq {int dummy; } ;
struct task_struct {int dummy; } ;
struct mm_struct {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 struct task_struct* FUNC_0 (int ) ;
 struct mm_struct* FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct mm_struct*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct trace_seq*,struct mm_struct*,unsigned long,unsigned long) ;
 int VAR_3 ;
 int FUNC_6 (struct trace_seq*,char*) ;

int
FUNC_7(const struct userstack_entry *VAR_4, struct trace_seq *VAR_5,
        unsigned long VAR_6)
{
 struct mm_struct *VAR_7 = ((void*)0);
 int VAR_8 = 1;
 unsigned int VAR_9;

 if (VAR_3 & VAR_1) {
  struct task_struct *VAR_10;




  FUNC_3();
  VAR_10 = FUNC_0(VAR_4->tgid);
  if (VAR_10)
   VAR_7 = FUNC_1(VAR_10);
  FUNC_4();
 }

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  unsigned long VAR_11 = VAR_4->caller[VAR_9];

  if (VAR_11 == VAR_2 || !VAR_8)
   break;
  if (VAR_8)
   VAR_8 = FUNC_6(VAR_5, " => ");
  if (!VAR_11) {
   if (VAR_8)
    VAR_8 = FUNC_6(VAR_5, "??");
   if (VAR_8)
    VAR_8 = FUNC_6(VAR_5, "\n");
   continue;
  }
  if (!VAR_8)
   break;
  if (VAR_8)
   VAR_8 = FUNC_5(VAR_5, VAR_7, VAR_11, VAR_6);
  VAR_8 = FUNC_6(VAR_5, "\n");
 }

 if (VAR_7)
  FUNC_2(VAR_7);
 return VAR_8;
}
