
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ count; } ;
struct val_neg_zone {TYPE_1__ tree; } ;
struct val_neg_data {int in_use; scalar_t__ count; struct val_neg_data* name; scalar_t__ len; int node; struct val_neg_data* parent; struct val_neg_zone* zone; } ;
struct val_neg_cache {int use; struct val_neg_data* last; struct val_neg_data* first; } ;


 int FUNC_0 (struct val_neg_data*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct val_neg_cache*,struct val_neg_zone*) ;
 int FUNC_3 (struct val_neg_cache*,struct val_neg_data*) ;
 int FUNC_4 (TYPE_1__*,int *) ;

void FUNC_5(struct val_neg_cache* VAR_0, struct val_neg_data* VAR_1)
{
 struct val_neg_zone* VAR_2;
 struct val_neg_data* VAR_3, *VAR_4;
 if(!VAR_1) return;
 VAR_2 = VAR_1->zone;
 FUNC_1(VAR_1->in_use);
 FUNC_1(VAR_1->count > 0);
 VAR_1->in_use = 0;


 FUNC_3(VAR_0, VAR_1);
 FUNC_1(VAR_0->first != VAR_1 && VAR_0->last != VAR_1);


 VAR_3 = VAR_1;
 while(VAR_3) {
  FUNC_1(VAR_3->count > 0);
  VAR_3->count --;
  VAR_3 = VAR_3->parent;
 }


 VAR_3 = VAR_1;
 while(VAR_3 && VAR_3->count == 0) {
  VAR_4 = VAR_3->parent;
  (void)FUNC_4(&VAR_2->tree, &VAR_3->node);
  VAR_0->use -= VAR_3->len + sizeof(*VAR_3);
  FUNC_0(VAR_3->name);
  FUNC_0(VAR_3);
  VAR_3 = VAR_4;
 }


 if(VAR_2->tree.count == 0) {
  FUNC_2(VAR_0, VAR_2);
 }
}
