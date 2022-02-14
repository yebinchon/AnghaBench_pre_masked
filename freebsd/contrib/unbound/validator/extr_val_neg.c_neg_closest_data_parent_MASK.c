
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct val_neg_zone {int tree; } ;
struct TYPE_2__ {struct val_neg_data* key; } ;
struct val_neg_data {size_t len; int labs; struct val_neg_data* parent; int * name; TYPE_1__ node; } ;
typedef int rbnode_type ;


 int FUNC_0 (int *,int,int *,int,int*) ;
 scalar_t__ FUNC_1 (int *,struct val_neg_data*,int **) ;

__attribute__((used)) static struct val_neg_data* FUNC_2(
 struct val_neg_zone* VAR_0, uint8_t* VAR_1, size_t VAR_2, int VAR_3)
{
 struct val_neg_data VAR_4;
 struct val_neg_data* VAR_5;
 rbnode_type* VAR_6 = ((void*)0);
 VAR_4.node.key = &VAR_4;
 VAR_4.name = VAR_1;
 VAR_4.len = VAR_2;
 VAR_4.labs = VAR_3;
 if(FUNC_1(&VAR_0->tree, &VAR_4, &VAR_6)) {

  VAR_5 = (struct val_neg_data*)VAR_6;
 } else {

  int VAR_7;
  VAR_5 = (struct val_neg_data*)VAR_6;
  if(!VAR_5)
   return ((void*)0);

  (void)FUNC_0(VAR_5->name, VAR_5->labs, VAR_4.name,
   VAR_4.labs, &VAR_7);
  while(VAR_5) {
   if(VAR_5->labs <= VAR_7)
    break;
   VAR_5 = VAR_5->parent;
  }
 }
 return VAR_5;
}
