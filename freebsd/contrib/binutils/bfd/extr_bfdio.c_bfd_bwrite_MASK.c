
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct bfd_in_memory {int size; scalar_t__ buffer; } ;
typedef int bfd_size_type ;
struct TYPE_6__ {int flags; int where; TYPE_1__* iovec; struct bfd_in_memory* iostream; } ;
typedef TYPE_2__ bfd ;
struct TYPE_5__ {size_t (* bwrite ) (TYPE_2__*,void const*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__,void const*,size_t) ;
 size_t FUNC_3 (TYPE_2__*,void const*,int) ;

bfd_size_type
FUNC_4 (const void *VAR_4, bfd_size_type VAR_5, bfd *VAR_6)
{
  size_t VAR_7;

  if ((VAR_6->flags & VAR_0) != 0)
    {
      struct bfd_in_memory *VAR_8 = VAR_6->iostream;

      VAR_5 = (size_t) VAR_5;
      if (VAR_6->where + VAR_5 > VAR_8->size)
 {
   bfd_size_type VAR_9, VAR_10;

   VAR_10 = (VAR_8->size + 127) & ~(bfd_size_type) 127;
   VAR_8->size = VAR_6->where + VAR_5;

   VAR_9 = (VAR_8->size + 127) & ~(bfd_size_type) 127;
   if (VAR_9 > VAR_10)
     {
       VAR_8->buffer = FUNC_0 (VAR_8->buffer, VAR_9);
       if (VAR_8->buffer == 0)
  {
    VAR_8->size = 0;
    return 0;
  }
     }
 }
      FUNC_2 (VAR_8->buffer + VAR_6->where, VAR_4, (size_t) VAR_5);
      VAR_6->where += VAR_5;
      return VAR_5;
    }

  if (VAR_6->iovec)
    VAR_7 = VAR_6->iovec->bwrite (VAR_6, VAR_4, VAR_5);
  else
    VAR_7 = 0;

  if (VAR_7 != (size_t) -1)
    VAR_6->where += VAR_7;
  if (VAR_7 != VAR_5)
    {



      FUNC_1 (VAR_2);
    }
  return VAR_7;
}
