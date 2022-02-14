
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int num_elem; int max_elem; size_t tail; int lock; int * elem_array; } ;
typedef TYPE_1__ pqi_taglist_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(pqi_taglist_t *VAR_0, uint32_t VAR_1)
{

 FUNC_1(&(VAR_0->lock));


 FUNC_0(VAR_0->num_elem < VAR_0->max_elem);

 if (VAR_0->num_elem < VAR_0->max_elem) {
  VAR_0->elem_array[VAR_0->tail] = VAR_1;
  VAR_0->num_elem++;
  VAR_0->tail = (VAR_0->tail + 1) % VAR_0->max_elem;
 }

 FUNC_2(&VAR_0->lock);


}
