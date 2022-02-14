
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct freezer {int state; int lock; } ;
struct cgroup {int dummy; } ;
struct cftype {int dummy; } ;
typedef enum freezer_state { ____Placeholder_freezer_state } freezer_state ;


 int VAR_0 ;
 int VAR_1 ;
 struct freezer* FUNC_0 (struct cgroup*) ;
 int FUNC_1 (struct cgroup*) ;
 int FUNC_2 () ;
 int * VAR_2 ;
 int FUNC_3 (struct seq_file*,char) ;
 int FUNC_4 (struct seq_file*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct cgroup*,struct freezer*) ;

__attribute__((used)) static int FUNC_8(struct cgroup *VAR_3, struct cftype *VAR_4,
   struct seq_file *VAR_5)
{
 struct freezer *VAR_6;
 enum freezer_state VAR_7;

 if (!FUNC_1(VAR_3))
  return -VAR_1;

 VAR_6 = FUNC_0(VAR_3);
 FUNC_5(&VAR_6->lock);
 VAR_7 = VAR_6->state;
 if (VAR_7 == VAR_0) {


  FUNC_7(VAR_3, VAR_6);
  VAR_7 = VAR_6->state;
 }
 FUNC_6(&VAR_6->lock);
 FUNC_2();

 FUNC_4(VAR_5, VAR_2[VAR_7]);
 FUNC_3(VAR_5, '\n');
 return 0;
}
