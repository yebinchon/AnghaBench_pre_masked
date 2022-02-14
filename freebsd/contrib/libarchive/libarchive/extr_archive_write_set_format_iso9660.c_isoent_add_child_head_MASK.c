
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cnt; struct isoent* first; struct isoent** last; } ;
struct TYPE_3__ {int cnt; struct isoent* first; struct isoent** last; } ;
struct isoent {struct isoent* drnext; struct isoent* parent; TYPE_2__ subdirs; scalar_t__ dir; TYPE_1__ children; struct isoent* chnext; int rbtree; } ;
struct archive_rb_node {int dummy; } ;


 int FUNC_0 (int *,struct archive_rb_node*) ;

__attribute__((used)) static int
FUNC_1(struct isoent *VAR_0, struct isoent *VAR_1)
{

 if (!FUNC_0(
     &(VAR_0->rbtree), (struct archive_rb_node *)VAR_1))
  return (0);
 if ((VAR_1->chnext = VAR_0->children.first) == ((void*)0))
  VAR_0->children.last = &(VAR_1->chnext);
 VAR_0->children.first = VAR_1;
 VAR_0->children.cnt++;
 VAR_1->parent = VAR_0;


 if (VAR_1->dir) {
  if ((VAR_1->drnext = VAR_0->subdirs.first) == ((void*)0))
   VAR_0->subdirs.last = &(VAR_1->drnext);
  VAR_0->subdirs.first = VAR_1;
  VAR_0->subdirs.cnt++;
  VAR_1->parent = VAR_0;
 } else
  VAR_1->drnext = ((void*)0);
 return (1);
}
