
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct val_anchors {int lock; int tree; } ;
struct TYPE_4__ {struct trust_anchor* key; } ;
struct trust_anchor {int namelabs; size_t namelen; int lock; int dclass; int * name; TYPE_1__ node; } ;
struct TYPE_5__ {scalar_t__ key; } ;
typedef TYPE_2__ rbnode_type ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (int ,struct trust_anchor*) ;

struct trust_anchor*
FUNC_3(struct val_anchors* VAR_0, uint8_t* VAR_1, int VAR_2,
 size_t VAR_3, uint16_t VAR_4)
{
 struct trust_anchor VAR_5;
 rbnode_type* VAR_6;
 if(!VAR_1) return ((void*)0);
 VAR_5.node.key = &VAR_5;
 VAR_5.name = VAR_1;
 VAR_5.namelabs = VAR_2;
 VAR_5.namelen = VAR_3;
 VAR_5.dclass = VAR_4;
 FUNC_0(&VAR_0->lock);
 VAR_6 = FUNC_2(VAR_0->tree, &VAR_5);
 if(VAR_6) {
  FUNC_0(&((struct trust_anchor*)VAR_6->key)->lock);
 }
 FUNC_1(&VAR_0->lock);
 if(!VAR_6)
  return ((void*)0);
 return (struct trust_anchor*)VAR_6->key;
}
