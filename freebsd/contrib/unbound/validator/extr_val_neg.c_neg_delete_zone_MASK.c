
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct val_neg_zone {int in_use; scalar_t__ count; struct val_neg_zone* name; struct val_neg_zone* nsec3_salt; scalar_t__ len; int node; struct val_neg_zone* parent; } ;
struct val_neg_cache {int use; int tree; } ;


 int FUNC_0 (struct val_neg_zone*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(struct val_neg_cache* VAR_0, struct val_neg_zone* VAR_1)
{
 struct val_neg_zone* VAR_2, *VAR_3;
 if(!VAR_1) return;
 FUNC_1(VAR_1->in_use);
 FUNC_1(VAR_1->count > 0);
 VAR_1->in_use = 0;


 VAR_2 = VAR_1;
 while(VAR_2) {
  FUNC_1(VAR_2->count > 0);
  VAR_2->count --;
  VAR_2 = VAR_2->parent;
 }


 VAR_2 = VAR_1;
 while(VAR_2 && VAR_2->count == 0) {
  VAR_3 = VAR_2->parent;
  (void)FUNC_2(&VAR_0->tree, &VAR_2->node);
  VAR_0->use -= VAR_2->len + sizeof(*VAR_2);
  FUNC_0(VAR_2->nsec3_salt);
  FUNC_0(VAR_2->name);
  FUNC_0(VAR_2);
  VAR_2 = VAR_3;
 }
}
