
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct trust_anchor {TYPE_1__* autr; } ;
struct autr_ta {struct autr_ta* next; } ;
struct TYPE_2__ {struct autr_ta* keys; } ;


 scalar_t__ FUNC_0 (struct autr_ta*,int ,int *,size_t) ;

__attribute__((used)) static int
FUNC_1(struct trust_anchor* VAR_0, uint16_t VAR_1, uint8_t* VAR_2, size_t VAR_3,
 struct autr_ta** VAR_4)
{
 struct autr_ta* VAR_5;
 if(!VAR_0 || !VAR_2) {
  *VAR_4 = ((void*)0);
  return 0;
 }
 for(VAR_5=VAR_0->autr->keys; VAR_5; VAR_5=VAR_5->next) {
  if(FUNC_0(VAR_5, VAR_1, VAR_2, VAR_3) == 0) {
   *VAR_4 = VAR_5;
   return 1;
  }
 }
 *VAR_4 = ((void*)0);
 return 1;
}
