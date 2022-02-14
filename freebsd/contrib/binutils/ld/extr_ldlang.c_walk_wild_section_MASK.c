
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int (* walk_wild_section_handler ) (TYPE_1__*,TYPE_2__*,int ,void*) ;} ;
typedef TYPE_1__ lang_wild_statement_type ;
struct TYPE_8__ {scalar_t__ just_syms_flag; } ;
typedef TYPE_2__ lang_input_statement_type ;
typedef int callback_t ;


 int FUNC_0 (TYPE_1__*,TYPE_2__*,int ,void*) ;

__attribute__((used)) static void
FUNC_1 (lang_wild_statement_type *VAR_0,
     lang_input_statement_type *VAR_1,
     callback_t VAR_2,
     void *VAR_3)
{
  if (VAR_1->just_syms_flag)
    return;

  (*VAR_0->walk_wild_section_handler) (VAR_0, VAR_1, VAR_2, VAR_3);
}
