
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct autr_ta {size_t rr_len; size_t dname_len; scalar_t__ s; struct autr_ta* next; int * rr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,size_t,size_t) ;

__attribute__((used)) static int
FUNC_1(struct autr_ta** VAR_3, uint8_t** VAR_4, size_t* VAR_5,
 size_t* VAR_6)
{
 while(*VAR_3) {
  if(FUNC_0((*VAR_3)->rr, (*VAR_3)->rr_len,
     (*VAR_3)->dname_len) != VAR_2 &&
   ((*VAR_3)->s == VAR_1 ||
    (*VAR_3)->s == VAR_0)) {
   *VAR_4 = (*VAR_3)->rr;
   *VAR_5 = (*VAR_3)->rr_len;
   *VAR_6 = (*VAR_3)->dname_len;
   *VAR_3 = (*VAR_3)->next;
   return 1;
  }
  *VAR_3 = (*VAR_3)->next;
 }
 return 0;
}
