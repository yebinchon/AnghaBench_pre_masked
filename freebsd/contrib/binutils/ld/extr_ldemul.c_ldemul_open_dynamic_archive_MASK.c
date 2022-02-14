
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int search_dirs_type ;
typedef int lang_input_statement_type ;
typedef int bfd_boolean ;
struct TYPE_2__ {int (* open_dynamic_archive ) (char const*,int *,int *) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char const*,int *,int *) ;

bfd_boolean
FUNC_1 (const char *VAR_2, search_dirs_type *VAR_3,
        lang_input_statement_type *VAR_4)
{
  if (VAR_1->open_dynamic_archive)
    return (*VAR_1->open_dynamic_archive) (VAR_2, VAR_3, VAR_4);
  return VAR_0;
}
