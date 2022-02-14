
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int bfd_size_type ;
struct TYPE_3__ {char* printable_name; struct TYPE_3__* next; } ;
typedef TYPE_1__ bfd_arch_info_type ;


 TYPE_1__** VAR_0 ;
 char** FUNC_0 (int) ;

const char **
FUNC_1 (void)
{
  int VAR_1 = 0;
  const char **VAR_2;
  const char **VAR_3;
  const bfd_arch_info_type * const *VAR_4;
  bfd_size_type VAR_5;


  VAR_1 = 0;
  for (VAR_4 = VAR_0; *VAR_4 != ((void*)0); VAR_4++)
    {
      const bfd_arch_info_type *VAR_6;
      for (VAR_6 = *VAR_4; VAR_6 != ((void*)0); VAR_6 = VAR_6->next)
 {
   VAR_1++;
 }
    }

  VAR_5 = (VAR_1 + 1) * sizeof (char **);
  VAR_3 = FUNC_0 (VAR_5);
  if (VAR_3 == ((void*)0))
    return ((void*)0);


  VAR_2 = VAR_3;
  for (VAR_4 = VAR_0; *VAR_4 != ((void*)0); VAR_4++)
    {
      const bfd_arch_info_type *VAR_7;
      for (VAR_7 = *VAR_4; VAR_7 != ((void*)0); VAR_7 = VAR_7->next)
 {
   *VAR_2 = VAR_7->printable_name;
   VAR_2++;
 }
    }
  *VAR_2 = ((void*)0);

  return VAR_3;
}
