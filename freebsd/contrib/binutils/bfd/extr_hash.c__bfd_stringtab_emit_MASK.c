
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* string; } ;
struct strtab_hash_entry {TYPE_1__ root; struct strtab_hash_entry* next; } ;
struct bfd_strtab_hash {struct strtab_hash_entry* first; scalar_t__ xcoff; } ;
typedef int bfd_vma ;
typedef int bfd_size_type ;
typedef int bfd_byte ;
typedef scalar_t__ bfd_boolean ;
typedef int bfd ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_0 (void*,int ,int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (char const*) ;

bfd_boolean
FUNC_3 (bfd *VAR_2, struct bfd_strtab_hash *VAR_3)
{
  bfd_boolean VAR_4;
  struct strtab_hash_entry *VAR_5;

  VAR_4 = VAR_3->xcoff;

  for (VAR_5 = VAR_3->first; VAR_5 != ((void*)0); VAR_5 = VAR_5->next)
    {
      const char *VAR_6;
      size_t VAR_7;

      VAR_6 = VAR_5->root.string;
      VAR_7 = FUNC_2 (VAR_6) + 1;

      if (VAR_4)
 {
   bfd_byte VAR_8[2];


   FUNC_1 (VAR_2, (bfd_vma) VAR_7, VAR_8);
   if (FUNC_0 ((void *) VAR_8, (bfd_size_type) 2, VAR_2) != 2)
     return VAR_0;
 }

      if (FUNC_0 ((void *) VAR_6, (bfd_size_type) VAR_7, VAR_2) != VAR_7)
 return VAR_0;
    }

  return VAR_1;
}
