
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfd_elf_special_section {int prefix_length; int suffix_length; scalar_t__ type; int * prefix; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int *,int) ;
 int FUNC_1 (char const*) ;

const struct bfd_elf_special_section *
FUNC_2 (const char *VAR_1,
         const struct bfd_elf_special_section *VAR_2,
         unsigned int VAR_3)
{
  int VAR_4;
  int VAR_5;

  VAR_5 = FUNC_1 (VAR_1);

  for (VAR_4 = 0; VAR_2[VAR_4].prefix != ((void*)0); VAR_4++)
    {
      int VAR_6;
      int VAR_7 = VAR_2[VAR_4].prefix_length;

      if (VAR_5 < VAR_7)
 continue;
      if (FUNC_0 (VAR_1, VAR_2[VAR_4].prefix, VAR_7) != 0)
 continue;

      VAR_6 = VAR_2[VAR_4].suffix_length;
      if (VAR_6 <= 0)
 {
   if (VAR_1[VAR_7] != 0)
     {
       if (VAR_6 == 0)
  continue;
       if (VAR_1[VAR_7] != '.'
    && (VAR_6 == -2
        || (VAR_3 && VAR_2[VAR_4].type == VAR_0)))
  continue;
     }
 }
      else
 {
   if (VAR_5 < VAR_7 + VAR_6)
     continue;
   if (FUNC_0 (VAR_1 + VAR_5 - VAR_6,
        VAR_2[VAR_4].prefix + VAR_7,
        VAR_6) != 0)
     continue;
 }
      return &VAR_2[VAR_4];
    }

  return ((void*)0);
}
