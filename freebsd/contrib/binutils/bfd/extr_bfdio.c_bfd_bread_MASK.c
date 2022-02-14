
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct bfd_in_memory {size_t size; size_t buffer; } ;
struct areltdata {size_t parsed_size; } ;
typedef size_t bfd_size_type ;
struct TYPE_6__ {int flags; size_t where; TYPE_1__* iovec; struct bfd_in_memory* iostream; int * arelt_data; } ;
typedef TYPE_2__ bfd ;
struct TYPE_5__ {size_t (* bread ) (TYPE_2__*,void*,size_t) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void*,size_t,size_t) ;
 size_t FUNC_2 (TYPE_2__*,void*,size_t) ;

bfd_size_type
FUNC_3 (void *VAR_2, bfd_size_type VAR_3, bfd *VAR_4)
{
  size_t VAR_5;



  if (VAR_4->arelt_data != ((void*)0))
    {
      size_t VAR_6 = ((struct areltdata *) VAR_4->arelt_data)->parsed_size;
      if (VAR_3 > VAR_6)
 VAR_3 = VAR_6;
    }

  if ((VAR_4->flags & VAR_0) != 0)
    {
      struct bfd_in_memory *VAR_7;
      bfd_size_type VAR_8;

      VAR_7 = VAR_4->iostream;
      VAR_8 = VAR_3;
      if (VAR_4->where + VAR_8 > VAR_7->size)
 {
   if (VAR_7->size < (bfd_size_type) VAR_4->where)
     VAR_8 = 0;
   else
     VAR_8 = VAR_7->size - VAR_4->where;
   FUNC_0 (VAR_1);
 }
      FUNC_1 (VAR_2, VAR_7->buffer + VAR_4->where, (size_t) VAR_8);
      VAR_4->where += VAR_8;
      return VAR_8;
    }

  if (VAR_4->iovec)
    VAR_5 = VAR_4->iovec->bread (VAR_4, VAR_2, VAR_3);
  else
    VAR_5 = 0;
  if (VAR_5 != (size_t) -1)
    VAR_4->where += VAR_5;

  return VAR_5;
}
