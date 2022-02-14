
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utrace_engine_ops {int release; } ;
struct utrace_engine {int release; void* data; struct utrace_engine_ops const* ops; scalar_t__ flags; int kref; } ;
struct utrace {int lock; } ;
struct task_struct {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct utrace_engine* FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct utrace_engine* FUNC_1 (struct utrace*,int,struct utrace_engine_ops const*,void*) ;
 struct utrace_engine* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,struct utrace_engine*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct utrace* FUNC_7 (struct task_struct*) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (struct task_struct*,struct utrace*,struct utrace_engine*,int,struct utrace_engine_ops const*,void*) ;
 struct utrace_engine_ops const VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (struct utrace_engine*) ;
 int FUNC_11 (struct task_struct*) ;

struct utrace_engine *FUNC_12(
 struct task_struct *VAR_9, int VAR_10,
 const struct utrace_engine_ops *VAR_11, void *VAR_12)
{
 struct utrace *VAR_13 = FUNC_7(VAR_9);
 struct utrace_engine *VAR_14;
 int VAR_15;

 if (!(VAR_10 & VAR_6)) {
  if (FUNC_8(!VAR_13))
   return FUNC_0(-VAR_1);
  FUNC_5(&VAR_13->lock);
  VAR_14 = FUNC_1(VAR_13, VAR_10, VAR_11, VAR_12);
  if (VAR_14)
   FUNC_10(VAR_14);
  FUNC_6(&VAR_13->lock);
  return VAR_14 ?: FUNC_0(-VAR_1);
 }

 if (FUNC_8(!VAR_11) || FUNC_8(VAR_11 == &VAR_7))
  return FUNC_0(-VAR_0);

 if (FUNC_8(VAR_9->flags & VAR_5))



  return FUNC_0(-VAR_3);

 if (!VAR_13) {
  if (FUNC_8(!FUNC_11(VAR_9)))
   return FUNC_0(-VAR_2);
  VAR_13 = FUNC_7(VAR_9);
 }

 VAR_14 = FUNC_2(VAR_8, VAR_4);
 if (FUNC_8(!VAR_14))
  return FUNC_0(-VAR_2);





 FUNC_4(&VAR_14->kref, 2);
 VAR_14->flags = 0;
 VAR_14->ops = VAR_11;
 VAR_14->data = VAR_12;
 VAR_14->release = VAR_11->release;

 VAR_15 = FUNC_9(VAR_9, VAR_13, VAR_14, VAR_10, VAR_11, VAR_12);

 if (FUNC_8(VAR_15)) {
  FUNC_3(VAR_8, VAR_14);
  VAR_14 = FUNC_0(VAR_15);
 }

 return VAR_14;
}
