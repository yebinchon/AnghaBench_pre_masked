
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_znode {int child_cnt; int alt; struct ubifs_zbranch* zbranch; scalar_t__ level; } ;
struct ubifs_zbranch {TYPE_1__* znode; } ;
struct TYPE_2__ {int iip; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ubifs_znode*) ;

__attribute__((used)) static void FUNC_2(struct ubifs_znode *VAR_0,
      const struct ubifs_zbranch *VAR_1, int VAR_2)
{
 int VAR_3;

 FUNC_0(FUNC_1(VAR_0));

 if (VAR_0->level) {
  for (VAR_3 = VAR_0->child_cnt; VAR_3 > VAR_2; VAR_3--) {
   VAR_0->zbranch[VAR_3] = VAR_0->zbranch[VAR_3 - 1];
   if (VAR_0->zbranch[VAR_3].znode)
    VAR_0->zbranch[VAR_3].znode->iip = VAR_3;
  }
  if (VAR_1->znode)
   VAR_1->znode->iip = VAR_2;
 } else
  for (VAR_3 = VAR_0->child_cnt; VAR_3 > VAR_2; VAR_3--)
   VAR_0->zbranch[VAR_3] = VAR_0->zbranch[VAR_3 - 1];

 VAR_0->zbranch[VAR_2] = *VAR_1;
 VAR_0->child_cnt += 1;
 if (VAR_2 == 0)
  VAR_0->alt = 1;
}
