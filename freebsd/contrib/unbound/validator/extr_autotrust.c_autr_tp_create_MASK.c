
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct val_anchors {int lock; int * tree; TYPE_1__* autr; } ;
struct TYPE_4__ {struct trust_anchor* key; } ;
struct trust_anchor {size_t namelen; struct trust_anchor* autr; int lock; struct trust_anchor* name; TYPE_2__ pnode; TYPE_2__ node; int dclass; int namelabs; } ;
struct autr_point_data {size_t namelen; struct autr_point_data* autr; int lock; struct autr_point_data* name; TYPE_2__ pnode; TYPE_2__ node; int dclass; int namelabs; } ;
struct TYPE_3__ {int probe; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct trust_anchor*) ;
 int FUNC_2 (struct trust_anchor*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,struct trust_anchor*,int) ;
 int FUNC_7 (char*) ;
 struct trust_anchor* FUNC_8 (int *,size_t) ;
 int FUNC_9 (int *,struct trust_anchor*) ;
 int FUNC_10 (int *,TYPE_2__*) ;

__attribute__((used)) static struct trust_anchor*
FUNC_11(struct val_anchors* VAR_0, uint8_t* VAR_1, size_t VAR_2,
 uint16_t VAR_3)
{
 struct trust_anchor* VAR_4 = (struct trust_anchor*)FUNC_0(1, sizeof(*VAR_4));
 if(!VAR_4) return ((void*)0);
 VAR_4->name = FUNC_8(VAR_1, VAR_2);
 if(!VAR_4->name) {
  FUNC_2(VAR_4);
  return ((void*)0);
 }
 VAR_4->namelen = VAR_2;
 VAR_4->namelabs = FUNC_1(VAR_4->name);
 VAR_4->node.key = VAR_4;
 VAR_4->dclass = VAR_3;
 VAR_4->autr = (struct autr_point_data*)FUNC_0(1, sizeof(*VAR_4->autr));
 if(!VAR_4->autr) {
  FUNC_2(VAR_4->name);
  FUNC_2(VAR_4);
  return ((void*)0);
 }
 VAR_4->autr->pnode.key = VAR_4;

 FUNC_4(&VAR_0->lock);
 if(!FUNC_10(VAR_0->tree, &VAR_4->node)) {
  FUNC_5(&VAR_0->lock);
  FUNC_7("trust anchor presented twice");
  FUNC_2(VAR_4->name);
  FUNC_2(VAR_4->autr);
  FUNC_2(VAR_4);
  return ((void*)0);
 }
 if(!FUNC_10(&VAR_0->autr->probe, &VAR_4->autr->pnode)) {
  (void)FUNC_9(VAR_0->tree, VAR_4);
  FUNC_5(&VAR_0->lock);
  FUNC_7("trust anchor in probetree twice");
  FUNC_2(VAR_4->name);
  FUNC_2(VAR_4->autr);
  FUNC_2(VAR_4);
  return ((void*)0);
 }
 FUNC_5(&VAR_0->lock);
 FUNC_3(&VAR_4->lock);
 FUNC_6(&VAR_4->lock, VAR_4, sizeof(*VAR_4));
 FUNC_6(&VAR_4->lock, VAR_4->autr, sizeof(*VAR_4->autr));
 return VAR_4;
}
