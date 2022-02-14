
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdeque {int size; int cap_mask; size_t* arr; size_t end_pos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct cdeque* VAR_3, void* VAR_4) {
 if(VAR_3 == ((void*)0))
  return VAR_2;

 if(VAR_3->size == VAR_3->cap_mask + 1)
  return VAR_1;

 VAR_3->arr[VAR_3->end_pos] = (size_t) VAR_4;
 VAR_3->end_pos = (VAR_3->end_pos + 1) & VAR_3->cap_mask;
 VAR_3->size++;

 return VAR_0;
}
