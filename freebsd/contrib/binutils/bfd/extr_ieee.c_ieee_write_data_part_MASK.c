
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int data_part; } ;
struct TYPE_15__ {TYPE_1__ r; } ;
struct TYPE_16__ {TYPE_2__ w; } ;
typedef TYPE_3__ ieee_data_type ;
typedef int bfd_boolean ;
struct TYPE_17__ {TYPE_5__* sections; } ;
typedef TYPE_4__ bfd ;
struct TYPE_18__ {int flags; scalar_t__ reloc_count; struct TYPE_18__* next; } ;
typedef TYPE_5__ asection ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (TYPE_4__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_5__*) ;

__attribute__((used)) static bfd_boolean
FUNC_4 (bfd *VAR_3)
{
  asection *VAR_4;

  ieee_data_type *VAR_5 = FUNC_0 (VAR_3);
  VAR_5->w.r.data_part = FUNC_1 (VAR_3);

  for (VAR_4 = VAR_3->sections; VAR_4 != (asection *) ((void*)0); VAR_4 = VAR_4->next)
    {


      if ((VAR_4->flags & VAR_1) == 0)
 continue;



      if (VAR_4->reloc_count != 0)
 {
   if (! FUNC_2 (VAR_3, VAR_4))
     return VAR_0;
 }
      else
 {
   if (! FUNC_3 (VAR_3, VAR_4))
     return VAR_0;
 }
    }

  return VAR_2;
}
