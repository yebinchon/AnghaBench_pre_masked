
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lang_input_statement_type ;
struct TYPE_2__ {int (* find_potential_libraries ) (char*,int *) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,int *) ;

int
FUNC_1 (char *VAR_1, lang_input_statement_type *VAR_2)
{
  if (VAR_0->find_potential_libraries)
    return VAR_0->find_potential_libraries (VAR_1, VAR_2);

  return 0;
}
