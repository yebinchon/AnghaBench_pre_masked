
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cnt; struct isoent** last; struct isoent* first; } ;
struct TYPE_3__ {int cnt; struct isoent** last; struct isoent* first; } ;
struct isoent {int rbtree; TYPE_2__ subdirs; struct isoent* drnext; scalar_t__ dir; TYPE_1__ children; struct isoent* chnext; } ;
struct archive_rb_node {int dummy; } ;


 int FUNC_0 (int *,struct archive_rb_node*) ;

__attribute__((used)) static void
FUNC_1(struct isoent *VAR_0, struct isoent *VAR_1)
{
 struct isoent *VAR_2;


 VAR_2 = VAR_0->children.first;
 while (VAR_2->chnext != VAR_1)
  VAR_2 = VAR_2->chnext;
 if ((VAR_2->chnext = VAR_2->chnext->chnext) == ((void*)0))
  VAR_0->children.last = &(VAR_2->chnext);
 VAR_0->children.cnt--;

 if (VAR_1->dir) {

  VAR_2 = VAR_0->subdirs.first;
  while (VAR_2->drnext != VAR_1)
   VAR_2 = VAR_2->drnext;
  if ((VAR_2->drnext = VAR_2->drnext->drnext) == ((void*)0))
   VAR_0->subdirs.last = &(VAR_2->drnext);
  VAR_0->subdirs.cnt--;
 }

 FUNC_0(&(VAR_0->rbtree),
     (struct archive_rb_node *)VAR_1);
}
