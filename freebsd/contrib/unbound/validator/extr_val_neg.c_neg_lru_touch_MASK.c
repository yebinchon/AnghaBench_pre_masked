
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct val_neg_data {int dummy; } ;
struct val_neg_cache {struct val_neg_data* first; } ;


 int FUNC_0 (struct val_neg_cache*,struct val_neg_data*) ;
 int FUNC_1 (struct val_neg_cache*,struct val_neg_data*) ;

__attribute__((used)) static void FUNC_2(struct val_neg_cache* VAR_0,
 struct val_neg_data* VAR_1)
{
 if(VAR_1 == VAR_0->first)
  return;

 FUNC_1(VAR_0, VAR_1);

 FUNC_0(VAR_0, VAR_1);
}
