
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_2__ {struct val_neg_zone* key; } ;
struct val_neg_zone {size_t len; TYPE_1__ node; int dclass; int * name; int labs; } ;
struct val_neg_cache {int tree; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,struct val_neg_zone*) ;

struct val_neg_zone* FUNC_2(struct val_neg_cache* VAR_0,
 uint8_t* VAR_1, size_t VAR_2, uint16_t VAR_3)
{
 struct val_neg_zone VAR_4;
 struct val_neg_zone* VAR_5;
 VAR_4.node.key = &VAR_4;
 VAR_4.name = VAR_1;
 VAR_4.len = VAR_2;
 VAR_4.labs = FUNC_0(VAR_4.name);
 VAR_4.dclass = VAR_3;

 VAR_5 = (struct val_neg_zone*)
  FUNC_1(&VAR_0->tree, VAR_4.node.key);
 return VAR_5;
}
