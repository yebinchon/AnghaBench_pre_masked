
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ses_iterator {int global_element_index; size_t type_index; scalar_t__ type_element_index; TYPE_2__* cache; void* saved_individual_element_index; void* individual_element_index; } ;
struct TYPE_7__ {TYPE_1__* hdr; } ;
typedef TYPE_3__ ses_type_t ;
struct TYPE_8__ {size_t ses_ntypes; TYPE_3__* ses_types; } ;
typedef TYPE_4__ ses_cache_t ;
typedef int enc_element_t ;
struct TYPE_6__ {int * elm_map; scalar_t__ nelms; TYPE_4__* private; } ;
struct TYPE_5__ {scalar_t__ etype_maxelt; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int,char*) ;

__attribute__((used)) static enc_element_t *
FUNC_1(struct ses_iterator *VAR_2)
{
 ses_cache_t *VAR_3;
 const ses_type_t *VAR_4;

 VAR_3 = VAR_2->cache->private;






 if (VAR_2->global_element_index >= (int)VAR_2->cache->nelms - 1) {


  VAR_2->type_index = VAR_0;
  VAR_2->type_element_index = VAR_0;
  VAR_2->global_element_index = VAR_0;
  VAR_2->individual_element_index = VAR_0;
  VAR_2->saved_individual_element_index = VAR_0;
  return (((void*)0));
 }

 FUNC_0((VAR_2->type_index < VAR_3->ses_ntypes),
  ("Corrupted element iterator. %d not less than %d",
   VAR_2->type_index, VAR_3->ses_ntypes));

 VAR_4 = &VAR_3->ses_types[VAR_2->type_index];
 VAR_2->global_element_index++;
 VAR_2->type_element_index++;






 if (VAR_2->type_element_index > VAR_4->hdr->etype_maxelt) {





  VAR_2->type_index++;
  VAR_2->type_element_index = 0;
  VAR_2->individual_element_index = VAR_1;
 }

 if (VAR_2->type_element_index > 0) {
  VAR_2->individual_element_index =
      ++VAR_2->saved_individual_element_index;
 }

 return (&VAR_2->cache->elm_map[VAR_2->global_element_index]);
}
