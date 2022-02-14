
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct val_anchors {int lock; int tree; } ;
struct TYPE_2__ {struct trust_anchor* key; } ;
struct trust_anchor {int namelabs; size_t namelen; scalar_t__ dclass; int lock; struct trust_anchor* parent; int * name; TYPE_1__ node; } ;
typedef int rbnode_type ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,int *,int,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,struct trust_anchor*,int **) ;

struct trust_anchor*
FUNC_5(struct val_anchors* VAR_0,
        uint8_t* VAR_1, size_t VAR_2, uint16_t VAR_3)
{
 struct trust_anchor VAR_4;
 struct trust_anchor* VAR_5;
 rbnode_type* VAR_6 = ((void*)0);
 VAR_4.node.key = &VAR_4;
 VAR_4.name = VAR_1;
 VAR_4.namelabs = FUNC_0(VAR_1);
 VAR_4.namelen = VAR_2;
 VAR_4.dclass = VAR_3;
 FUNC_2(&VAR_0->lock);
 if(FUNC_4(VAR_0->tree, &VAR_4, &VAR_6)) {

  VAR_5 = (struct trust_anchor*)VAR_6;
 } else {

  int VAR_7;
  VAR_5 = (struct trust_anchor*)VAR_6;
  if(!VAR_5 || VAR_5->dclass != VAR_3) {
   FUNC_3(&VAR_0->lock);
   return ((void*)0);
  }

  (void)FUNC_1(VAR_5->name, VAR_5->namelabs, VAR_4.name,
   VAR_4.namelabs, &VAR_7);
  while(VAR_5) {
   if(VAR_5->namelabs <= VAR_7)
    break;
   VAR_5 = VAR_5->parent;
  }
 }
 if(VAR_5) {
  FUNC_2(&VAR_5->lock);
 }
 FUNC_3(&VAR_0->lock);
 return VAR_5;
}
