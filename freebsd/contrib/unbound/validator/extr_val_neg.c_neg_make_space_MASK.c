
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct val_neg_cache {scalar_t__ max; scalar_t__ use; scalar_t__ last; } ;


 int FUNC_0 (struct val_neg_cache*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct val_neg_cache* VAR_0, size_t VAR_1)
{

 while(VAR_0->last && VAR_0->max < VAR_0->use + VAR_1) {
  FUNC_0(VAR_0, VAR_0->last);
 }
}
