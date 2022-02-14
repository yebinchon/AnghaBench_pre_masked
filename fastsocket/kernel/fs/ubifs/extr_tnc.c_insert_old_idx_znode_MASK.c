
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ubifs_znode {size_t iip; TYPE_2__* parent; } ;
struct ubifs_zbranch {int offs; int lnum; scalar_t__ len; } ;
struct TYPE_3__ {int offs; int lnum; scalar_t__ len; } ;
struct ubifs_info {TYPE_1__ zroot; } ;
struct TYPE_4__ {struct ubifs_zbranch* zbranch; } ;


 int FUNC_0 (struct ubifs_info*,int ,int ) ;

int FUNC_1(struct ubifs_info *VAR_0, struct ubifs_znode *VAR_1)
{
 if (VAR_1->parent) {
  struct ubifs_zbranch *VAR_2;

  VAR_2 = &VAR_1->parent->zbranch[VAR_1->iip];
  if (VAR_2->len)
   return FUNC_0(VAR_0, VAR_2->lnum, VAR_2->offs);
 } else
  if (VAR_0->zroot.len)
   return FUNC_0(VAR_0, VAR_0->zroot.lnum,
           VAR_0->zroot.offs);
 return 0;
}
