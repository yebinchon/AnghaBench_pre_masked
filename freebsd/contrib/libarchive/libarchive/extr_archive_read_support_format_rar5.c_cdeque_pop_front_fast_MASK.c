
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdeque {size_t beg_pos; int cap_mask; int size; scalar_t__* arr; } ;



__attribute__((used)) static void FUNC_0(struct cdeque* VAR_0, void** VAR_1) {
 *VAR_1 = (void*) VAR_0->arr[VAR_0->beg_pos];
 VAR_0->beg_pos = (VAR_0->beg_pos + 1) & VAR_0->cap_mask;
 VAR_0->size--;
}
