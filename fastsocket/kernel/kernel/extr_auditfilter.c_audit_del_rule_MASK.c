
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct audit_watch {int dummy; } ;
struct audit_tree {int dummy; } ;
struct TYPE_3__ {scalar_t__ listnr; int list; struct audit_tree* tree; struct audit_watch* watch; } ;
struct audit_entry {int rcu; TYPE_1__ rule; int list; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 struct audit_entry* FUNC_1 (struct audit_entry*,struct list_head**) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct audit_entry*) ;
 int VAR_5 ;
 int FUNC_4 (struct audit_tree*) ;
 int FUNC_5 (struct audit_watch*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int VAR_6 ;
 int FUNC_8 (int *,int ) ;
 int VAR_7 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static inline int FUNC_14(struct audit_entry *VAR_8)
{
 struct audit_entry *VAR_9;
 struct audit_watch *VAR_10 = VAR_8->rule.watch;
 struct audit_tree *VAR_11 = VAR_8->rule.tree;
 struct list_head *VAR_12;
 FUNC_0(VAR_7);
 int VAR_13 = 0;
 FUNC_12(&VAR_3);
 VAR_9 = FUNC_1(VAR_8, &VAR_12);
 if (!VAR_9) {
  FUNC_13(&VAR_3);
  VAR_13 = -VAR_2;
  goto out;
 }

 if (VAR_9->rule.watch)
  FUNC_7(&VAR_9->rule, &VAR_7);

 if (VAR_9->rule.tree)
  FUNC_6(&VAR_9->rule);

 FUNC_10(&VAR_9->list);
 FUNC_9(&VAR_9->rule.list);
 FUNC_8(&VAR_9->rcu, VAR_4);
 FUNC_13(&VAR_3);

 if (!FUNC_11(&VAR_7))
  FUNC_2(&VAR_7);

out:
 if (VAR_10)
  FUNC_5(VAR_10);
 if (VAR_11)
  FUNC_4(VAR_11);

 return VAR_13;
}
