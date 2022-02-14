
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bfd_in_memory {scalar_t__ buffer; scalar_t__ size; } ;
typedef int bfd_boolean ;
struct TYPE_3__ {scalar_t__ direction; scalar_t__ where; int flags; struct bfd_in_memory* iostream; } ;
typedef TYPE_1__ bfd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct bfd_in_memory* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

bfd_boolean
FUNC_2 (bfd *VAR_6)
{
  struct bfd_in_memory *VAR_7;

  if (VAR_6->direction != VAR_4)
    {
      FUNC_1 (VAR_3);
      return VAR_1;
    }

  VAR_7 = FUNC_0 (sizeof (struct bfd_in_memory));
  VAR_6->iostream = VAR_7;

  VAR_7->size = 0;
  VAR_7->buffer = 0;

  VAR_6->flags |= VAR_0;
  VAR_6->direction = VAR_5;
  VAR_6->where = 0;

  return VAR_2;
}
