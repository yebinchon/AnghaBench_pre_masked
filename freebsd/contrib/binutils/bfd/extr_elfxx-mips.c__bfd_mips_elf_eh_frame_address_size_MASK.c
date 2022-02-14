
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_8__ {scalar_t__ reloc_count; } ;
typedef TYPE_2__ asection ;
struct TYPE_10__ {scalar_t__* e_ident; int e_flags; } ;
struct TYPE_9__ {TYPE_1__* relocs; } ;
struct TYPE_7__ {int r_info; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int *,char*) ;
 TYPE_5__* FUNC_2 (int *) ;
 TYPE_3__* FUNC_3 (TYPE_2__*) ;

unsigned int
FUNC_4 (bfd *VAR_5, asection *VAR_6)
{
  if (FUNC_2 (VAR_5)->e_ident[VAR_1] == VAR_2)
    return 8;
  if ((FUNC_2 (VAR_5)->e_flags & VAR_0) == VAR_3)
    {
      bfd_boolean VAR_7, VAR_8;

      VAR_7 = FUNC_1 (VAR_5, ".gcc_compiled_long32") != 0;
      VAR_8 = FUNC_1 (VAR_5, ".gcc_compiled_long64") != 0;
      if (VAR_7 && VAR_8)
 return 0;
      if (VAR_7)
 return 4;
      if (VAR_8)
 return 8;

      if (VAR_6->reloc_count > 0
   && FUNC_3 (VAR_6)->relocs != ((void*)0)
   && (FUNC_0 (FUNC_3 (VAR_6)->relocs[0].r_info)
       == VAR_4))
 return 8;

      return 0;
    }
  return 4;
}
