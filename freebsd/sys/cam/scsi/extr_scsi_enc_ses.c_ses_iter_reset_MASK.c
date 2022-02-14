
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ses_iterator {void* saved_individual_element_index; void* individual_element_index; void* global_element_index; void* type_element_index; scalar_t__ type_index; } ;


 void* VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct ses_iterator *VAR_1)
{





 VAR_1->type_index = 0;
 VAR_1->type_element_index = VAR_0;
 VAR_1->global_element_index = VAR_0;
 VAR_1->individual_element_index = VAR_0;
 VAR_1->saved_individual_element_index = VAR_0;
}
