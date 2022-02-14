
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct elf_strtab_hash {size_t size; size_t sec_size; TYPE_2__** array; } ;
typedef size_t bfd_size_type ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_3__ {char* string; } ;
struct TYPE_4__ {scalar_t__ refcount; unsigned int len; TYPE_1__ root; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_1 (char const*,unsigned int,int *) ;

bfd_boolean
FUNC_2 (register bfd *VAR_2, struct elf_strtab_hash *VAR_3)
{
  bfd_size_type VAR_4 = 1, VAR_5;

  if (FUNC_1 ("", 1, VAR_2) != 1)
    return VAR_0;

  for (VAR_5 = 1; VAR_5 < VAR_3->size; ++VAR_5)
    {
      register const char *VAR_6;
      register unsigned int VAR_7;

      FUNC_0 (VAR_3->array[VAR_5]->refcount == 0);
      VAR_7 = VAR_3->array[VAR_5]->len;
      if ((int) VAR_7 < 0)
 continue;

      VAR_6 = VAR_3->array[VAR_5]->root.string;
      if (FUNC_1 (VAR_6, VAR_7, VAR_2) != VAR_7)
 return VAR_0;

      VAR_4 += VAR_7;
    }

  FUNC_0 (VAR_4 == VAR_3->sec_size);
  return VAR_1;
}
