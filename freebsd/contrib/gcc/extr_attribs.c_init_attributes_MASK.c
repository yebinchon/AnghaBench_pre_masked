
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {char* name; int min_length; int max_length; scalar_t__ type_required; int function_type_required; int decl_required; } ;
struct TYPE_7__ {TYPE_3__* format_attribute_table; TYPE_3__* attribute_table; TYPE_3__* common_attribute_table; } ;
struct TYPE_6__ {TYPE_3__* attribute_table; } ;


 size_t FUNC_0 (TYPE_3__**) ;
 TYPE_3__** VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_1 (int) ;
 TYPE_2__ VAR_3 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char const*) ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static void
FUNC_4 (void)
{
  size_t VAR_5;

  VAR_0[0] = VAR_3.common_attribute_table;
  VAR_0[1] = VAR_3.attribute_table;
  VAR_0[2] = VAR_3.format_attribute_table;
  VAR_0[3] = VAR_4.attribute_table;


  for (VAR_5 = 0; VAR_5 < FUNC_0 (VAR_0); VAR_5++)
    if (VAR_0[VAR_5] == ((void*)0))
      VAR_0[VAR_5] = VAR_2;
  VAR_1 = 1;
}
