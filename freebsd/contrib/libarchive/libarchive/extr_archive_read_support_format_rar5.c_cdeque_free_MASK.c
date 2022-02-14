
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdeque {int beg_pos; int end_pos; scalar_t__ cap_mask; int * arr; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct cdeque* VAR_0) {
 if(!VAR_0)
  return;

 if(!VAR_0->arr)
  return;

 FUNC_0(VAR_0->arr);

 VAR_0->arr = ((void*)0);
 VAR_0->beg_pos = -1;
 VAR_0->end_pos = -1;
 VAR_0->cap_mask = 0;
}
