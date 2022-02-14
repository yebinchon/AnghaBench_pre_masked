
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct autr_ta {size_t rr_len; size_t dname_len; int * rr; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static struct autr_ta*
FUNC_2(uint8_t* VAR_0, size_t VAR_1, size_t VAR_2)
{
 struct autr_ta* VAR_3 = (struct autr_ta*)FUNC_0(1, sizeof(*VAR_3));
 if(!VAR_3) {
  FUNC_1(VAR_0);
  return ((void*)0);
 }
 VAR_3->rr = VAR_0;
 VAR_3->rr_len = VAR_1;
 VAR_3->dname_len = VAR_2;
 return VAR_3;
}
