
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct autr_ta {size_t rr_len; size_t dname_len; struct autr_ta* next; int * rr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,size_t,size_t) ;

__attribute__((used)) static int
FUNC_1(struct autr_ta** VAR_1, uint8_t** VAR_2, size_t* VAR_3,
 size_t* VAR_4)
{
 while(*VAR_1) {
  if(FUNC_0((*VAR_1)->rr, (*VAR_1)->rr_len,
   (*VAR_1)->dname_len) == VAR_0) {
   *VAR_2 = (*VAR_1)->rr;
   *VAR_3 = (*VAR_1)->rr_len;
   *VAR_4 = (*VAR_1)->dname_len;
   *VAR_1 = (*VAR_1)->next;
   return 1;
  }
  *VAR_1 = (*VAR_1)->next;
 }
 return 0;
}
