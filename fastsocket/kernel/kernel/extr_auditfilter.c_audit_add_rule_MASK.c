
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct list_head {int dummy; } ;
struct audit_watch {int dummy; } ;
struct audit_tree {int dummy; } ;
struct TYPE_3__ {size_t listnr; unsigned long long prio; int flags; int list; struct audit_watch* watch; struct audit_tree* tree; } ;
struct audit_entry {int list; TYPE_1__ rule; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_5 ;
 struct audit_entry* FUNC_2 (struct audit_entry*,struct list_head**) ;
 int FUNC_3 (int ) ;
 struct list_head* VAR_6 ;
 int FUNC_4 (struct audit_entry*) ;
 int VAR_7 ;
 int FUNC_5 (struct audit_tree*) ;
 int FUNC_6 (struct audit_watch*) ;
 int * VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_7 (struct audit_watch*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,struct list_head*) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,struct list_head*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 unsigned long long VAR_10 ;
 unsigned long long VAR_11 ;

__attribute__((used)) static inline int FUNC_14(struct audit_entry *VAR_12)
{
 struct audit_entry *VAR_13;
 struct audit_watch *VAR_14 = VAR_12->rule.watch;
 struct audit_tree *VAR_15 = VAR_12->rule.tree;
 struct list_head *VAR_16;
 int VAR_17, VAR_18;
 FUNC_12(&VAR_5);
 VAR_13 = FUNC_2(VAR_12, &VAR_16);
 if (VAR_13) {
  FUNC_13(&VAR_5);
  VAR_18 = -VAR_4;

  if (VAR_15)
   FUNC_5(VAR_15);
  goto error;
 }

 if (VAR_14) {

  VAR_18 = FUNC_1(&VAR_12->rule);
  if (VAR_18) {
   FUNC_13(&VAR_5);
   goto error;
  }

  VAR_14 = VAR_12->rule.watch;
  VAR_17 = FUNC_3((u32)FUNC_7(VAR_14));
  VAR_16 = &VAR_6[VAR_17];
 }
 if (VAR_15) {
  VAR_18 = FUNC_0(&VAR_12->rule);
  if (VAR_18) {
   FUNC_13(&VAR_5);
   goto error;
  }
 }

 VAR_12->rule.prio = ~0ULL;
 if (VAR_12->rule.listnr == VAR_0) {
  if (VAR_12->rule.flags & VAR_1)
   VAR_12->rule.prio = ++VAR_10;
  else
   VAR_12->rule.prio = --VAR_11;
 }

 if (VAR_12->rule.flags & VAR_1) {
  FUNC_8(&VAR_12->rule.list,
    &VAR_8[VAR_12->rule.listnr]);
  FUNC_9(&VAR_12->list, VAR_16);
  VAR_12->rule.flags &= ~VAR_1;
 } else {
  FUNC_10(&VAR_12->rule.list,
         &VAR_8[VAR_12->rule.listnr]);
  FUNC_11(&VAR_12->list, VAR_16);
 }







 FUNC_13(&VAR_5);

  return 0;

error:
 if (VAR_14)
  FUNC_6(VAR_14);
 return VAR_18;
}
