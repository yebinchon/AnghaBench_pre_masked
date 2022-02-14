
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_znode {scalar_t__ level; int child_cnt; struct ubifs_zbranch* zbranch; int flags; int * cnext; } ;
struct ubifs_zbranch {TYPE_1__* znode; } ;
struct ubifs_info {int dirty_zn_cnt; int max_znode_sz; } ;
struct TYPE_2__ {struct ubifs_znode* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ubifs_znode* FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 struct ubifs_znode* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct ubifs_znode*,struct ubifs_znode*,int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static struct ubifs_znode *FUNC_9(struct ubifs_info *VAR_5,
          struct ubifs_znode *VAR_6)
{
 struct ubifs_znode *VAR_7;

 VAR_7 = FUNC_4(VAR_5->max_znode_sz, VAR_3);
 if (FUNC_8(!VAR_7))
  return FUNC_0(-VAR_2);

 FUNC_5(VAR_7, VAR_6, VAR_5->max_znode_sz);
 VAR_7->cnext = ((void*)0);
 FUNC_2(VAR_1, &VAR_7->flags);
 FUNC_1(VAR_0, &VAR_7->flags);

 FUNC_7(!FUNC_6(VAR_4, &VAR_6->flags));
 FUNC_2(VAR_4, &VAR_6->flags);

 if (VAR_6->level != 0) {
  int VAR_8;
  const int VAR_9 = VAR_7->child_cnt;


  for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
   struct ubifs_zbranch *VAR_10 = &VAR_7->zbranch[VAR_8];

   if (VAR_10->znode)
    VAR_10->znode->parent = VAR_7;
  }
 }

 FUNC_3(&VAR_5->dirty_zn_cnt);
 return VAR_7;
}
