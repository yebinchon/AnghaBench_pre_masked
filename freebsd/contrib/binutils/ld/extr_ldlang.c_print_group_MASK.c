
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int lang_output_section_statement_type ;
struct TYPE_5__ {int head; } ;
struct TYPE_6__ {TYPE_1__ children; } ;
typedef TYPE_2__ lang_group_statement_type ;
struct TYPE_7__ {int map_file; } ;


 TYPE_4__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void
FUNC_2 (lang_group_statement_type *VAR_1,
      lang_output_section_statement_type *VAR_2)
{
  FUNC_0 (VAR_0.map_file, "START GROUP\n");
  FUNC_1 (VAR_1->children.head, VAR_2);
  FUNC_0 (VAR_0.map_file, "END GROUP\n");
}
