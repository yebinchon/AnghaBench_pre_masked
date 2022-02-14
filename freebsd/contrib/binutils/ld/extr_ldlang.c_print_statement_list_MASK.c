
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* next; } ;
struct TYPE_6__ {TYPE_1__ header; } ;
typedef TYPE_2__ lang_statement_union_type ;
typedef int lang_output_section_statement_type ;


 int FUNC_0 (TYPE_2__*,int *) ;

__attribute__((used)) static void
FUNC_1 (lang_statement_union_type *VAR_0,
        lang_output_section_statement_type *VAR_1)
{
  while (VAR_0 != ((void*)0))
    {
      FUNC_0 (VAR_0, VAR_1);
      VAR_0 = VAR_0->header.next;
    }
}
