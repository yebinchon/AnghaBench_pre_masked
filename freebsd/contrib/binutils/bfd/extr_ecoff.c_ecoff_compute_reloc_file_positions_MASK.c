
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int file_ptr ;
typedef int bfd_size_type ;
struct TYPE_9__ {int flags; TYPE_2__* sections; scalar_t__ output_has_begun; } ;
typedef TYPE_1__ bfd ;
struct TYPE_10__ {int const reloc_count; int rel_filepos; struct TYPE_10__* next; } ;
typedef TYPE_2__ asection ;
struct TYPE_12__ {int external_reloc_size; int round; } ;
struct TYPE_11__ {int reloc_filepos; int sym_filepos; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 TYPE_7__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_3__* FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static bfd_size_type
FUNC_4 (bfd *VAR_3)
{
  const bfd_size_type VAR_4 =
    FUNC_1 (VAR_3)->external_reloc_size;
  file_ptr VAR_5;
  bfd_size_type VAR_6;
  asection *VAR_7;
  file_ptr VAR_8;

  if (! VAR_3->output_has_begun)
    {
      if (! FUNC_2 (VAR_3))
 FUNC_0 ();
      VAR_3->output_has_begun = VAR_2;
    }

  VAR_5 = FUNC_3 (VAR_3)->reloc_filepos;

  VAR_6 = 0;
  for (VAR_7 = VAR_3->sections;
       VAR_7 != ((void*)0);
       VAR_7 = VAR_7->next)
    {
      if (VAR_7->reloc_count == 0)
 VAR_7->rel_filepos = 0;
      else
 {
   bfd_size_type VAR_9;

   VAR_7->rel_filepos = VAR_5;
   VAR_9 = VAR_7->reloc_count * VAR_4;
   VAR_6 += VAR_9;
   VAR_5 += VAR_9;
 }
    }

  VAR_8 = FUNC_3 (VAR_3)->reloc_filepos + VAR_6;




  if ((VAR_3->flags & VAR_1) != 0
      && (VAR_3->flags & VAR_0) != 0)
    VAR_8 = ((VAR_8 + FUNC_1 (VAR_3)->round - 1)
  &~ (FUNC_1 (VAR_3)->round - 1));

  FUNC_3 (VAR_3)->sym_filepos = VAR_8;

  return VAR_6;
}
