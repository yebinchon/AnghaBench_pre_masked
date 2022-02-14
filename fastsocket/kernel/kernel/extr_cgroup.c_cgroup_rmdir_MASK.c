
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct dentry {int d_lock; struct cgroup* d_fsdata; } ;
struct cgroup {int flags; TYPE_1__* dentry; int root; int sibling; int release_list; int children; int count; struct cgroup* parent; } ;
struct TYPE_2__ {int d_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct cgroup*) ;
 int FUNC_3 (struct cgroup*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct cgroup*) ;
 int FUNC_8 (int ,int *) ;
 int VAR_8 ;
 struct dentry* FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (struct dentry*) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int *,int ) ;
 int VAR_9 ;
 int FUNC_17 () ;
 int FUNC_18 (int ,int *) ;
 scalar_t__ FUNC_19 (int ) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 scalar_t__ FUNC_22 (int ,int *) ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_23(struct inode *VAR_11, struct dentry *VAR_12)
{
 struct cgroup *VAR_13 = VAR_12->d_fsdata;
 struct dentry *VAR_14;
 struct cgroup *VAR_15;
 FUNC_0(VAR_10);
 int VAR_16;


again:
 FUNC_14(&VAR_6);
 if (FUNC_1(&VAR_13->count) != 0) {
  FUNC_15(&VAR_6);
  return -VAR_3;
 }
 if (!FUNC_13(&VAR_13->children)) {
  FUNC_15(&VAR_6);
  return -VAR_3;
 }
 FUNC_15(&VAR_6);
 FUNC_18(VAR_2, &VAR_13->flags);





 VAR_16 = FUNC_2(VAR_13);
 if (VAR_16) {
  FUNC_8(VAR_2, &VAR_13->flags);
  return VAR_16;
 }

 FUNC_14(&VAR_6);
 VAR_15 = VAR_13->parent;
 if (FUNC_1(&VAR_13->count) || !FUNC_13(&VAR_13->children)) {
  FUNC_8(VAR_2, &VAR_13->flags);
  FUNC_15(&VAR_6);
  return -VAR_3;
 }
 FUNC_16(&VAR_7, &VAR_10, VAR_5);
 if (!FUNC_3(VAR_13)) {
  FUNC_15(&VAR_6);




  if (FUNC_22(VAR_2, &VAR_13->flags))
   FUNC_17();
  FUNC_11(&VAR_7, &VAR_10);
  FUNC_8(VAR_2, &VAR_13->flags);
  if (FUNC_19(VAR_8))
   return -VAR_4;
  goto again;
 }

 FUNC_11(&VAR_7, &VAR_10);
 FUNC_8(VAR_2, &VAR_13->flags);

 FUNC_20(&VAR_9);
 FUNC_18(VAR_1, &VAR_13->flags);
 if (!FUNC_13(&VAR_13->release_list))
  FUNC_12(&VAR_13->release_list);
 FUNC_21(&VAR_9);

 FUNC_5(VAR_13->root);

 FUNC_12(&VAR_13->sibling);
 FUNC_6(VAR_13->root);

 FUNC_20(&VAR_13->dentry->d_lock);
 VAR_14 = FUNC_9(VAR_13->dentry);
 FUNC_21(&VAR_14->d_lock);

 FUNC_4(VAR_14);
 FUNC_10(VAR_14);

 FUNC_18(VAR_0, &VAR_15->flags);
 FUNC_7(VAR_15);

 FUNC_15(&VAR_6);
 return 0;
}
