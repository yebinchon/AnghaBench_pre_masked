
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* sections; } ;
typedef TYPE_2__ bfd ;
struct TYPE_10__ {int flags; int size; struct TYPE_10__* next; } ;
typedef TYPE_3__ asection ;
typedef int arelent ;
struct TYPE_8__ {scalar_t__ sh_link; scalar_t__ sh_type; int sh_entsize; } ;
struct TYPE_11__ {TYPE_1__ this_hdr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 TYPE_4__* FUNC_2 (TYPE_3__*) ;

long
FUNC_3 (bfd *VAR_4)
{
  long VAR_5;
  asection *VAR_6;

  if (FUNC_1 (VAR_4) == 0)
    {
      FUNC_0 (VAR_3);
      return -1;
    }

  VAR_5 = sizeof (arelent *);
  for (VAR_6 = VAR_4->sections; VAR_6 != ((void*)0); VAR_6 = VAR_6->next)
    if ((VAR_6->flags & VAR_0) != 0
 && FUNC_2 (VAR_6)->this_hdr.sh_link == FUNC_1 (VAR_4)
 && (FUNC_2 (VAR_6)->this_hdr.sh_type == VAR_1
     || FUNC_2 (VAR_6)->this_hdr.sh_type == VAR_2))
      VAR_5 += ((VAR_6->size / FUNC_2 (VAR_6)->this_hdr.sh_entsize)
       * sizeof (arelent *));

  return VAR_5;
}
