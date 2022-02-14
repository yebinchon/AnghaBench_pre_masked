
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lang_input_statement_type ;
typedef int bfd_boolean ;
struct TYPE_2__ {int (* unrecognized_file ) (int *) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int *) ;

bfd_boolean
FUNC_1 (lang_input_statement_type *VAR_2)
{
  if (VAR_1->unrecognized_file)
    return (*VAR_1->unrecognized_file) (VAR_2);
  return VAR_0;
}
