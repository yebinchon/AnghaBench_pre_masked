
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trust_anchor {TYPE_1__* autr; } ;
struct autr_ta {scalar_t__ fetched; struct autr_ta* next; } ;
struct TYPE_2__ {struct autr_ta* keys; } ;



__attribute__((used)) static void
FUNC_0(struct trust_anchor* VAR_0)
{
 struct autr_ta* VAR_1;
 for(VAR_1=VAR_0->autr->keys; VAR_1; VAR_1=VAR_1->next) {
  VAR_1->fetched = 0;
 }
}
