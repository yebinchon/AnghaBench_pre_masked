
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct bfd_in_memory {int size; int buffer; } ;
typedef scalar_t__ file_ptr ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_size_type ;
struct TYPE_7__ {int flags; int where; scalar_t__ direction; scalar_t__ format; scalar_t__ origin; TYPE_1__* iovec; int * my_archive; struct bfd_in_memory* iostream; } ;
typedef TYPE_2__ bfd ;
struct TYPE_6__ {int (* bseek ) (TYPE_2__*,scalar_t__,int) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (TYPE_2__*,scalar_t__,int) ;
 scalar_t__ VAR_9 ;

int
FUNC_5 (bfd *VAR_10, file_ptr VAR_11, int VAR_12)
{
  int VAR_13;
  file_ptr VAR_14;




  FUNC_0 (VAR_12 == VAR_3 || VAR_12 == VAR_2);

  if (VAR_12 == VAR_2 && VAR_11 == 0)
    return 0;

  if ((VAR_10->flags & VAR_0) != 0)
    {
      struct bfd_in_memory *VAR_15;

      VAR_15 = VAR_10->iostream;

      if (VAR_12 == VAR_3)
 VAR_10->where = VAR_11;
      else
 VAR_10->where += VAR_11;

      if (VAR_10->where > VAR_15->size)
 {
   if ((VAR_10->direction == VAR_9) ||
       (VAR_10->direction == VAR_7))
     {
       bfd_size_type VAR_16, VAR_17;

       VAR_17 = (VAR_15->size + 127) & ~(bfd_size_type) 127;
       VAR_15->size = VAR_10->where;

       VAR_16 = (VAR_15->size + 127) & ~(bfd_size_type) 127;
       if (VAR_16 > VAR_17)
         {
    VAR_15->buffer = FUNC_1 (VAR_15->buffer, VAR_16);
    if (VAR_15->buffer == 0)
      {
        VAR_15->size = 0;
        return -1;
      }
         }
     }
   else
     {
       VAR_10->where = VAR_15->size;
       FUNC_2 (VAR_5);
       return -1;
     }
 }
      return 0;
    }

  if (VAR_10->format != VAR_4 && VAR_10->my_archive == 0)
    {
      if (VAR_12 == VAR_3 && (bfd_vma) VAR_11 == VAR_10->where)
 return 0;
    }
  else
    {
    }

  VAR_14 = VAR_11;
  if (VAR_12 == VAR_3 && VAR_10->my_archive != ((void*)0))
    VAR_14 += VAR_10->origin;

  if (VAR_10->iovec)
    VAR_13 = VAR_10->iovec->bseek (VAR_10, VAR_14, VAR_12);
  else
    VAR_13 = -1;

  if (VAR_13 != 0)
    {
      int VAR_18 = VAR_8;


      FUNC_3 (VAR_10);



      if (VAR_18 == VAR_1)
 FUNC_2 (VAR_5);
      else
 {
   FUNC_2 (VAR_6);
   VAR_8 = VAR_18;
 }
    }
  else
    {

      if (VAR_12 == VAR_3)
 VAR_10->where = VAR_11;
      else
 VAR_10->where += VAR_11;
    }
  return VAR_13;
}
