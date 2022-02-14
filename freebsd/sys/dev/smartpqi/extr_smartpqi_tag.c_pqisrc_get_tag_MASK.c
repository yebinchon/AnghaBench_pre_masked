
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ num_elem; size_t head; int max_elem; int lock; int * elem_array; } ;
typedef TYPE_1__ pqi_taglist_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

uint32_t FUNC_3(pqi_taglist_t *VAR_1)
{
 uint32_t VAR_2 = VAR_0;



 FUNC_1(&VAR_1->lock);

 FUNC_0(VAR_1->num_elem > 0);

 if (VAR_1->num_elem > 0) {
  VAR_2 = VAR_1->elem_array[VAR_1->head];
  VAR_1->num_elem--;
  VAR_1->head = (VAR_1->head + 1) % VAR_1->max_elem;
 }

 FUNC_2(&VAR_1->lock);


 return VAR_2;
}
