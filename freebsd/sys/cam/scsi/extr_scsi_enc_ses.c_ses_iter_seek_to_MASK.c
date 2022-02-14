
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ses_iterator {int global_element_index; int individual_element_index; TYPE_1__* cache; } ;
typedef scalar_t__ ses_elem_index_type_t ;
typedef int enc_element_t ;
struct TYPE_2__ {int * elm_map; } ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (struct ses_iterator*) ;
 int FUNC_1 (struct ses_iterator*) ;

__attribute__((used)) static enc_element_t *
FUNC_2(struct ses_iterator *VAR_1, int VAR_2,
   ses_elem_index_type_t VAR_3)
{
 enc_element_t *VAR_4;
 int *VAR_5;

 if (VAR_3 == VAR_0)
  VAR_5 = &VAR_1->global_element_index;
 else
  VAR_5 = &VAR_1->individual_element_index;

 if (*VAR_5 == VAR_2) {

  return (&VAR_1->cache->elm_map[VAR_1->global_element_index]);
 }

 FUNC_1(VAR_1);
 while ((VAR_4 = FUNC_0(VAR_1)) != ((void*)0)
     && *VAR_5 != VAR_2)
  ;

 if (*VAR_5 != VAR_2)
  return (((void*)0));

 return (VAR_4);
}
