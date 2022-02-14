
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_znode {int child_cnt; TYPE_1__* zbranch; } ;
struct TYPE_2__ {struct ubifs_znode* znode; } ;



__attribute__((used)) static inline struct ubifs_znode *
FUNC_0(struct ubifs_znode *VAR_0, int VAR_1)
{
 while (VAR_1 < VAR_0->child_cnt) {
  if (VAR_0->zbranch[VAR_1].znode)
   return VAR_0->zbranch[VAR_1].znode;
  VAR_1 += 1;
 }

 return ((void*)0);
}
