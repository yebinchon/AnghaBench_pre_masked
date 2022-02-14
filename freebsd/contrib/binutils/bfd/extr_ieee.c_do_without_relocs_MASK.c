
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ bfd_byte ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_7__ {int flags; unsigned int size; } ;
typedef TYPE_1__ asection ;
struct TYPE_8__ {scalar_t__* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 TYPE_2__* FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static bfd_boolean
FUNC_3 (bfd *VAR_3, asection *VAR_4)
{
  bfd_byte *VAR_5 = FUNC_2 (VAR_4)->data;

  if (VAR_5 == 0 || ((VAR_4->flags & VAR_1) == 0))
    {
      if (! FUNC_0 (VAR_3, VAR_4))
 return VAR_0;
    }
  else
    {
      unsigned int VAR_6;

      for (VAR_6 = 0; VAR_6 < VAR_4->size; VAR_6++)
 {
   if (VAR_5[VAR_6] != 0)
     {
       if (! FUNC_1 (VAR_3, VAR_4))
  return VAR_0;
       return VAR_2;
     }
 }
      if (! FUNC_0 (VAR_3, VAR_4))
 return VAR_0;
    }

  return VAR_2;
}
