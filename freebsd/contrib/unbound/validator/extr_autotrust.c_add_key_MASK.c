
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct trust_anchor {size_t namelen; TYPE_1__* autr; int * name; } ;
struct autr_ta {struct autr_ta* next; } ;
struct TYPE_2__ {struct autr_ta* keys; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 struct autr_ta* FUNC_0 (int *,size_t,size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (size_t) ;
 scalar_t__ FUNC_3 (size_t) ;
 int FUNC_4 (int *,int *,size_t) ;

__attribute__((used)) static struct autr_ta*
FUNC_5(struct trust_anchor* VAR_2, uint32_t VAR_3, uint8_t* VAR_4, size_t VAR_5)
{
 struct autr_ta* VAR_6;
 uint8_t* VAR_7;
 size_t VAR_8, VAR_9;
 uint16_t VAR_10 = FUNC_2(VAR_1);
 uint16_t VAR_11 = FUNC_2(VAR_0);
 uint16_t VAR_12 = FUNC_2(VAR_5);
 VAR_9 = VAR_2->namelen;
 VAR_3 = FUNC_1(VAR_3);
 VAR_8 = VAR_9 + 10 + VAR_5;
 VAR_7 = (uint8_t*)FUNC_3(VAR_8);
 if(!VAR_7) return ((void*)0);
 FUNC_4(VAR_7, VAR_2->name, VAR_2->namelen);
 FUNC_4(VAR_7+VAR_9, &VAR_10, 2);
 FUNC_4(VAR_7+VAR_9+2, &VAR_11, 2);
 FUNC_4(VAR_7+VAR_9+4, &VAR_3, 4);
 FUNC_4(VAR_7+VAR_9+8, &VAR_12, 2);
 FUNC_4(VAR_7+VAR_9+10, VAR_4, VAR_5);
 VAR_6 = FUNC_0(VAR_7, VAR_8, VAR_9);
 if(!VAR_6) {

  return ((void*)0);
 }

 VAR_6->next = VAR_2->autr->keys;
 VAR_2->autr->keys = VAR_6;
 return VAR_6;
}
