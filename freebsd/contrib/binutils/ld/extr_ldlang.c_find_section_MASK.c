
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int name; } ;
struct wildcard_list {TYPE_1__ spec; } ;
struct TYPE_7__ {int * found_section; int multiple_sections_found; int member_1; int * member_0; } ;
typedef TYPE_2__ section_iterator_callback_data ;
struct TYPE_8__ {int the_bfd; } ;
typedef TYPE_3__ lang_input_statement_type ;
typedef int bfd_boolean ;
typedef int asection ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,TYPE_2__*) ;
 int VAR_1 ;

__attribute__((used)) static asection *
FUNC_1 (lang_input_statement_type *VAR_2,
       struct wildcard_list *VAR_3,
       bfd_boolean *VAR_4)
{
  section_iterator_callback_data VAR_5 = { ((void*)0), VAR_0 };

  FUNC_0 (VAR_2->the_bfd, VAR_3->spec.name,
         VAR_1, &VAR_5);
  *VAR_4 = VAR_5.multiple_sections_found;
  return VAR_5.found_section;
}
