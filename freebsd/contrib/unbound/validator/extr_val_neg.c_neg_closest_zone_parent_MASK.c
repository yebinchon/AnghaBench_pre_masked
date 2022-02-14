
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_2__ {struct val_neg_zone* key; } ;
struct val_neg_zone {size_t len; int labs; scalar_t__ dclass; struct val_neg_zone* parent; int * name; TYPE_1__ node; } ;
struct val_neg_cache {int tree; } ;
typedef int rbnode_type ;


 int FUNC_0 (int *,int,int *,int,int*) ;
 scalar_t__ FUNC_1 (int *,struct val_neg_zone*,int **) ;

__attribute__((used)) static struct val_neg_zone* FUNC_2(struct val_neg_cache* VAR_0,
 uint8_t* VAR_1, size_t VAR_2, int VAR_3, uint16_t VAR_4)
{
 struct val_neg_zone VAR_5;
 struct val_neg_zone* VAR_6;
 rbnode_type* VAR_7 = ((void*)0);
 VAR_5.node.key = &VAR_5;
 VAR_5.name = VAR_1;
 VAR_5.len = VAR_2;
 VAR_5.labs = VAR_3;
 VAR_5.dclass = VAR_4;
 if(FUNC_1(&VAR_0->tree, &VAR_5, &VAR_7)) {

  VAR_6 = (struct val_neg_zone*)VAR_7;
 } else {

  int VAR_8;
  VAR_6 = (struct val_neg_zone*)VAR_7;
  if(!VAR_6 || VAR_6->dclass != VAR_4)
   return ((void*)0);

  (void)FUNC_0(VAR_6->name, VAR_6->labs, VAR_5.name,
   VAR_5.labs, &VAR_8);
  while(VAR_6) {
   if(VAR_6->labs <= VAR_8)
    break;
   VAR_6 = VAR_6->parent;
  }
 }
 return VAR_6;
}
