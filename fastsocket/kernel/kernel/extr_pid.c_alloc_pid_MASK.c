
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct upid {int nr; struct pid_namespace* ns; int pid_chain; } ;
struct pid_namespace {int level; int pid_cachep; int nr_hashed; struct pid_namespace* parent; } ;
struct pid {int level; struct upid* numbers; int * tasks; int count; } ;
typedef enum pid_type { ____Placeholder_pid_type } pid_type ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (struct pid_namespace*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct upid*) ;
 int FUNC_4 (struct pid_namespace*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct pid*) ;
 struct pid* FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,struct pid*) ;
 int * VAR_2 ;
 size_t FUNC_9 (int,struct pid_namespace*) ;
 scalar_t__ FUNC_10 (struct pid_namespace*) ;
 int VAR_3 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int ) ;

struct pid *FUNC_14(struct pid_namespace *VAR_4)
{
 struct pid *VAR_5;
 enum pid_type VAR_6;
 int VAR_7, VAR_8;
 struct pid_namespace *VAR_9;
 struct upid *VAR_10;

 VAR_5 = FUNC_7(VAR_4->pid_cachep, VAR_0);
 if (!VAR_5)
  goto out;

 VAR_9 = VAR_4;
 VAR_5->level = VAR_4->level;
 for (VAR_7 = VAR_4->level; VAR_7 >= 0; VAR_7--) {
  VAR_8 = FUNC_1(VAR_9);
  if (VAR_8 < 0)
   goto out_free;

  VAR_5->numbers[VAR_7].nr = VAR_8;
  VAR_5->numbers[VAR_7].ns = VAR_9;
  VAR_9 = VAR_9->parent;
 }

 if (FUNC_13(FUNC_6(VAR_5))) {
  if (FUNC_10(VAR_4))
   goto out_free;
 }

 FUNC_4(VAR_4);
 FUNC_2(&VAR_5->count, 1);
 for (VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6)
  FUNC_0(&VAR_5->tasks[VAR_6]);

 VAR_10 = VAR_5->numbers + VAR_4->level;
 FUNC_11(&VAR_3);
 for ( ; VAR_10 >= VAR_5->numbers; --VAR_10) {
  FUNC_5(&VAR_10->pid_chain,
    &VAR_2[FUNC_9(VAR_10->nr, VAR_10->ns)]);
  VAR_10->ns->nr_hashed++;
 }
 FUNC_12(&VAR_3);

out:
 return VAR_5;

out_free:
 while (++VAR_7 <= VAR_4->level)
  FUNC_3(VAR_5->numbers + VAR_7);

 FUNC_8(VAR_4->pid_cachep, VAR_5);
 VAR_5 = ((void*)0);
 goto out;
}
