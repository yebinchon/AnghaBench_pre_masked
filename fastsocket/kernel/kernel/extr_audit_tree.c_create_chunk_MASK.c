
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int inotify_mutex; } ;
struct audit_tree {int same_root; struct audit_chunk* root; int chunks; scalar_t__ goner; } ;
struct audit_chunk {int dead; int trees; TYPE_1__* owners; int watch; } ;
struct TYPE_2__ {unsigned int index; int list; struct audit_tree* owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct audit_chunk* FUNC_0 (int) ;
 int FUNC_1 (struct audit_chunk*) ;
 int FUNC_2 (struct audit_tree*) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int ,int *,struct inode*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct audit_chunk*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_5 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct inode *VAR_6, struct audit_tree *VAR_7)
{
 struct audit_chunk *VAR_8 = FUNC_0(1);
 if (!VAR_8)
  return -VAR_0;

 if (FUNC_3(VAR_5, &VAR_8->watch, VAR_6, VAR_3 | VAR_2) < 0) {
  FUNC_1(VAR_8);
  return -VAR_1;
 }

 FUNC_7(&VAR_6->inotify_mutex);
 FUNC_10(&VAR_4);
 if (VAR_7->goner) {
  FUNC_11(&VAR_4);
  VAR_8->dead = 1;
  FUNC_4(&VAR_8->watch);
  FUNC_8(&VAR_6->inotify_mutex);
  FUNC_9(&VAR_8->watch);
  return 0;
 }
 VAR_8->owners[0].index = (1U << 31);
 VAR_8->owners[0].owner = VAR_7;
 FUNC_2(VAR_7);
 FUNC_6(&VAR_8->owners[0].list, &VAR_7->chunks);
 if (!VAR_7->root) {
  VAR_7->root = VAR_8;
  FUNC_6(&VAR_7->same_root, &VAR_8->trees);
 }
 FUNC_5(VAR_8);
 FUNC_11(&VAR_4);
 FUNC_8(&VAR_6->inotify_mutex);
 return 0;
}
