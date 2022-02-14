
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct val_anchors {int dummy; } ;
struct trust_anchor {int lock; TYPE_1__* autr; } ;
struct autr_ta {struct autr_ta* next; struct autr_ta* rr; } ;
struct TYPE_2__ {struct autr_ta* keys; } ;


 struct autr_ta* FUNC_0 (int *,size_t,size_t) ;
 struct trust_anchor* FUNC_1 (struct val_anchors*,int *,size_t,size_t) ;
 int FUNC_2 (struct autr_ta*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct autr_ta*
FUNC_4(struct val_anchors* VAR_0, uint8_t* VAR_1, size_t VAR_2,
        size_t VAR_3, struct trust_anchor** VAR_4)
{
 struct autr_ta* VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if(!VAR_5)
  return ((void*)0);
 *VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 if(!*VAR_4) {
  FUNC_2(VAR_5->rr);
  FUNC_2(VAR_5);
  return ((void*)0);
 }

 VAR_5->next = (*VAR_4)->autr->keys;
 (*VAR_4)->autr->keys = VAR_5;
 FUNC_3(&(*VAR_4)->lock);
 return VAR_5;
}
