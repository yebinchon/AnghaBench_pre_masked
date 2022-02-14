
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct val_neg_zone {int tree; } ;
struct TYPE_2__ {struct val_neg_data* key; } ;
struct val_neg_data {size_t len; int labs; TYPE_1__ node; int * name; } ;


 scalar_t__ FUNC_0 (int *,struct val_neg_data*) ;

__attribute__((used)) static struct val_neg_data* FUNC_1(struct val_neg_zone* VAR_0,
 uint8_t* VAR_1, size_t VAR_2, int VAR_3)
{
 struct val_neg_data VAR_4;
 struct val_neg_data* VAR_5;
 VAR_4.node.key = &VAR_4;
 VAR_4.name = VAR_1;
 VAR_4.len = VAR_2;
 VAR_4.labs = VAR_3;

 VAR_5 = (struct val_neg_data*)
  FUNC_0(&VAR_0->tree, VAR_4.node.key);
 return VAR_5;
}
