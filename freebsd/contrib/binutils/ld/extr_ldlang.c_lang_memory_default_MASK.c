
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int flags; int not_flags; struct TYPE_7__* next; } ;
typedef TYPE_1__ lang_memory_region_type ;
typedef int flagword ;
struct TYPE_8__ {int flags; } ;
typedef TYPE_2__ asection ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 TYPE_1__* FUNC_0 (int ,int ) ;

__attribute__((used)) static lang_memory_region_type *
FUNC_1 (asection *VAR_7)
{
  lang_memory_region_type *VAR_8;

  flagword VAR_9 = VAR_7->flags;


  if ((VAR_9 & (VAR_2 | VAR_5 | VAR_3)) == VAR_2)
    VAR_9 |= VAR_4;

  for (VAR_8 = VAR_6; VAR_8 != ((void*)0); VAR_8 = VAR_8->next)
    {
      if ((VAR_8->flags & VAR_9) != 0
   && (VAR_8->not_flags & VAR_9) == 0)
 {
   return VAR_8;
 }
    }
  return FUNC_0 (VAR_0, VAR_1);
}
