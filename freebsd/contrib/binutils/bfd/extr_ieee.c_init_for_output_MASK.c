
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ bfd_size_type ;
typedef int bfd_boolean ;
struct TYPE_7__ {TYPE_2__* sections; } ;
typedef TYPE_1__ bfd ;
struct TYPE_8__ {int flags; scalar_t__ size; struct TYPE_8__* next; } ;
typedef TYPE_2__ asection ;
struct TYPE_9__ {int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 TYPE_4__* FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (bfd *VAR_3)
{
  asection *VAR_4;

  for (VAR_4 = VAR_3->sections; VAR_4 != (asection *) ((void*)0); VAR_4 = VAR_4->next)
    {
      if ((VAR_4->flags & VAR_1) != 0)
 continue;
      if (VAR_4->size != 0)
 {
   bfd_size_type VAR_5 = VAR_4->size;
   FUNC_1 (VAR_4)->data = FUNC_0 (VAR_3, VAR_5);
   if (!FUNC_1 (VAR_4)->data)
     return VAR_0;
 }
    }
  return VAR_2;
}
