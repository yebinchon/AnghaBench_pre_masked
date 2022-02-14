
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {struct val_neg_data* key; } ;
struct val_neg_data {size_t len; int labs; int name; TYPE_1__ node; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct val_neg_data*) ;
 int FUNC_2 (int *,size_t) ;

__attribute__((used)) static struct val_neg_data* FUNC_3(
 uint8_t* VAR_0, size_t VAR_1, int VAR_2)
{
 struct val_neg_data* VAR_3;
 VAR_3 = (struct val_neg_data*)FUNC_0(1, sizeof(*VAR_3));
 if(!VAR_3) {
  return ((void*)0);
 }
 VAR_3->node.key = VAR_3;
 VAR_3->name = FUNC_2(VAR_0, VAR_1);
 if(!VAR_3->name) {
  FUNC_1(VAR_3);
  return ((void*)0);
 }
 VAR_3->len = VAR_1;
 VAR_3->labs = VAR_2;
 return VAR_3;
}
