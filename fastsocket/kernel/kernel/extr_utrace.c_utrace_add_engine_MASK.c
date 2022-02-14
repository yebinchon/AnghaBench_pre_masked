
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utrace_engine_ops {int dummy; } ;
struct utrace_engine {int entry; } ;
struct utrace {int pending_attach; int lock; int attaching; } ;
struct task_struct {scalar_t__ exit_state; scalar_t__ utrace_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct utrace*,int,struct utrace_engine_ops const*,void*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct task_struct *VAR_5,
        struct utrace *VAR_6,
        struct utrace_engine *VAR_7,
        int VAR_8,
        const struct utrace_engine_ops *VAR_9,
        void *VAR_10)
{
 int VAR_11;

 FUNC_4(&VAR_6->lock);

 VAR_11 = -VAR_0;
 if ((VAR_8 & VAR_4) &&
      FUNC_6(FUNC_1(VAR_6, VAR_8, VAR_9, VAR_10)))
  goto unlock;
 VAR_11 = -VAR_1;
 if (!VAR_5->utrace_flags) {
  VAR_5->utrace_flags = FUNC_0(VAR_3);





  FUNC_3();
  if (FUNC_6(VAR_5->exit_state == VAR_2)) {
   VAR_5->utrace_flags = 0;
   goto unlock;
  }
 }
 FUNC_2(&VAR_7->entry, &VAR_6->attaching);
 VAR_6->pending_attach = 1;
 VAR_11 = 0;
unlock:
 FUNC_5(&VAR_6->lock);

 return VAR_11;
}
