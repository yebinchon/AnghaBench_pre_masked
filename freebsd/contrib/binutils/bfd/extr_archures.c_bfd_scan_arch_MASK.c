
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ (* scan ) (TYPE_1__ const*,char const*) ;struct TYPE_5__* next; } ;
typedef TYPE_1__ bfd_arch_info_type ;


 TYPE_1__** VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__ const*,char const*) ;

const bfd_arch_info_type *
FUNC_1 (const char *VAR_1)
{
  const bfd_arch_info_type * const *VAR_2, *VAR_3;


  for (VAR_2 = VAR_0; *VAR_2 != ((void*)0); VAR_2++)
    {
      for (VAR_3 = *VAR_2; VAR_3 != ((void*)0); VAR_3 = VAR_3->next)
 {
   if (VAR_3->scan (VAR_3, VAR_1))
     return VAR_3;
 }
    }

  return ((void*)0);
}
