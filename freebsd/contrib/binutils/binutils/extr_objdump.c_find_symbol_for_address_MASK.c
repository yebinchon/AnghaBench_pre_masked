
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct objdump_disasm_info {scalar_t__ require_sec; int * sec; TYPE_1__* abfd; } ;
struct disassemble_info {scalar_t__ (* symbol_is_valid ) (TYPE_2__*,struct disassemble_info*) ;scalar_t__ application_data; } ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_boolean ;
struct TYPE_13__ {int flags; } ;
typedef TYPE_1__ bfd ;
struct TYPE_14__ {int * section; } ;
typedef TYPE_2__ asymbol ;
typedef int asection ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *) ;
 unsigned int FUNC_2 (TYPE_1__*) ;
 unsigned int FUNC_3 (TYPE_1__*,int *) ;
 int VAR_1 ;
 TYPE_2__** VAR_2 ;
 scalar_t__ FUNC_4 (TYPE_2__*,struct disassemble_info*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,struct disassemble_info*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,struct disassemble_info*) ;
 scalar_t__ FUNC_7 (TYPE_2__*,struct disassemble_info*) ;

__attribute__((used)) static asymbol *
FUNC_8 (bfd_vma VAR_3,
    struct disassemble_info *VAR_4,
    long *VAR_5)
{






  long VAR_6 = 0;
  long VAR_7 = VAR_1;
  long VAR_8;
  struct objdump_disasm_info *VAR_9;
  bfd *VAR_10;
  asection *VAR_11;
  unsigned int VAR_12;
  bfd_boolean VAR_13;

  if (VAR_1 < 1)
    return ((void*)0);

  VAR_9 = (struct objdump_disasm_info *) VAR_4->application_data;
  VAR_10 = VAR_9->abfd;
  VAR_11 = VAR_9->sec;
  VAR_12 = FUNC_2 (VAR_10);



  while (VAR_6 + 1 < VAR_7)
    {
      asymbol *VAR_14;

      VAR_8 = (VAR_7 + VAR_6) / 2;
      VAR_14 = VAR_2[VAR_8];

      if (FUNC_0 (VAR_14) > VAR_3)
 VAR_7 = VAR_8;
      else if (FUNC_0 (VAR_14) < VAR_3)
 VAR_6 = VAR_8;
      else
 {
   VAR_6 = VAR_8;
   break;
 }
    }




  VAR_8 = VAR_6;
  while (VAR_8 > 0
  && (FUNC_0 (VAR_2[VAR_8])
      == FUNC_0 (VAR_2[VAR_8 - 1])))
    --VAR_8;
  VAR_13 = (VAR_9->require_sec
    || ((VAR_10->flags & VAR_0) != 0
        && VAR_3 >= FUNC_1 (VAR_10, VAR_11)
        && VAR_3 < (FUNC_1 (VAR_10, VAR_11)
    + FUNC_3 (VAR_10, VAR_11) / VAR_12)));
  if ((VAR_2[VAR_8]->section != VAR_11 && VAR_13)
      || !VAR_4->symbol_is_valid (VAR_2[VAR_8], VAR_4))
    {
      long VAR_15;
      long VAR_16;

      for (VAR_15 = VAR_8 + 1; VAR_15 < VAR_1; VAR_15++)
 {
   if (FUNC_0 (VAR_2[VAR_15])
       != FUNC_0 (VAR_2[VAR_8]))
     break;
 }

      --VAR_15;
      VAR_16 = VAR_1;

      for (; VAR_15 >= 0; VAR_15--)
 {
   if ((VAR_2[VAR_15]->section == VAR_11 || !VAR_13)
       && VAR_4->symbol_is_valid (VAR_2[VAR_15], VAR_4))
     {
       if (VAR_16 == VAR_1)
  VAR_16 = VAR_15;

       if (FUNC_0 (VAR_2[VAR_15])
    != FUNC_0 (VAR_2[VAR_16]))
  break;



       VAR_16 = VAR_15;
     }
 }

      if (VAR_16 != VAR_1)
 VAR_8 = VAR_16;
      else
 {


   for (VAR_15 = VAR_8 + 1; VAR_15 < VAR_1; VAR_15++)
     {
       if ((VAR_2[VAR_15]->section == VAR_11 || !VAR_13)
    && VAR_4->symbol_is_valid (VAR_2[VAR_15], VAR_4))
  {
    VAR_8 = VAR_15;
    break;
  }
     }
 }

      if ((VAR_2[VAR_8]->section != VAR_11 && VAR_13)
   || !VAR_4->symbol_is_valid (VAR_2[VAR_8], VAR_4))

 return ((void*)0);
    }

  if (VAR_5 != ((void*)0))
    *VAR_5 = VAR_8;

  return VAR_2[VAR_8];
}
