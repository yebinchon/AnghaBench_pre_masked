
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct val_anchors {struct val_anchors* autr; int lock; int tree; } ;


 int VAR_0 ;
 int FUNC_0 (struct val_anchors*) ;
 struct val_anchors* FUNC_1 () ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct val_anchors*,int) ;
 int FUNC_5 (int ) ;

struct val_anchors*
FUNC_6(void)
{
 struct val_anchors* VAR_1 = (struct val_anchors*)FUNC_2(1, sizeof(*VAR_1));
 if(!VAR_1)
  return ((void*)0);
 VAR_1->tree = FUNC_5(VAR_0);
 if(!VAR_1->tree) {
  FUNC_0(VAR_1);
  return ((void*)0);
 }
 VAR_1->autr = FUNC_1();
 if(!VAR_1->autr) {
  FUNC_0(VAR_1);
  return ((void*)0);
 }
 FUNC_3(&VAR_1->lock);
 FUNC_4(&VAR_1->lock, VAR_1, sizeof(*VAR_1));
 FUNC_4(&VAR_1->lock, VAR_1->autr, sizeof(*VAR_1->autr));
 return VAR_1;
}
