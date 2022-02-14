
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct val_anchors {struct val_anchors* autr; struct val_anchors* tree; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct val_anchors*) ;
 int FUNC_1 (struct val_anchors*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct val_anchors*) ;
 int FUNC_4 (struct val_anchors*,int ,int *) ;

void
FUNC_5(struct val_anchors* VAR_1)
{
 if(!VAR_1)
  return;
 FUNC_3(&VAR_1->lock, VAR_1->autr);
 FUNC_3(&VAR_1->lock, VAR_1);
 FUNC_2(&VAR_1->lock);
 if(VAR_1->tree)
  FUNC_4(VAR_1->tree, VAR_0, ((void*)0));
 FUNC_1(VAR_1->tree);
 FUNC_0(VAR_1->autr);
 FUNC_1(VAR_1);
}
