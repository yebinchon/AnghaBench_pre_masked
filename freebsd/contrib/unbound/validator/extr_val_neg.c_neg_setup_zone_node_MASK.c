
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_2__ {struct val_neg_zone* key; } ;
struct val_neg_zone {size_t len; int labs; int tree; int dclass; int name; TYPE_1__ node; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct val_neg_zone*) ;
 int FUNC_2 (int *,size_t) ;
 int FUNC_3 (int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static struct val_neg_zone* FUNC_4(
 uint8_t* VAR_1, size_t VAR_2, int VAR_3, uint16_t VAR_4)
{
 struct val_neg_zone* VAR_5 =
  (struct val_neg_zone*)FUNC_0(1, sizeof(*VAR_5));
 if(!VAR_5) {
  return ((void*)0);
 }
 VAR_5->node.key = VAR_5;
 VAR_5->name = FUNC_2(VAR_1, VAR_2);
 if(!VAR_5->name) {
  FUNC_1(VAR_5);
  return ((void*)0);
 }
 VAR_5->len = VAR_2;
 VAR_5->labs = VAR_3;
 VAR_5->dclass = VAR_4;

 FUNC_3(&VAR_5->tree, &VAR_0);
 return VAR_5;
}
