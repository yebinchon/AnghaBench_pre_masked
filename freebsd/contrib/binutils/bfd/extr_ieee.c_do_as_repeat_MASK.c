
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int bfd_vma ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
struct TYPE_8__ {int flags; } ;
typedef TYPE_1__ bfd ;
struct TYPE_9__ {scalar_t__ size; int symbol; scalar_t__ lma; scalar_t__ index; } ;
typedef TYPE_2__ asection ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static bfd_boolean
FUNC_3 (bfd *VAR_8, asection *VAR_9)
{
  if (VAR_9->size)
    {
      if (! FUNC_0 (VAR_8, VAR_7)
   || ! FUNC_0 (VAR_8,
    (bfd_byte) (VAR_9->index
         + VAR_2))
   || ! FUNC_0 (VAR_8, VAR_6 >> 8)
   || ! FUNC_0 (VAR_8, VAR_6 & 0xff)
   || ! FUNC_0 (VAR_8,
    (bfd_byte) (VAR_9->index
         + VAR_2)))
 return VAR_1;

      if ((VAR_8->flags & VAR_0) != 0)
 {
   if (! FUNC_2 (VAR_8, VAR_9->lma))
     return VAR_1;
 }
      else
 {
   if (! FUNC_1 (VAR_8, (bfd_vma) 0, VAR_9->symbol, 0, 0))
     return VAR_1;
 }

      if (! FUNC_0 (VAR_8, VAR_5)
   || ! FUNC_2 (VAR_8, VAR_9->size)
   || ! FUNC_0 (VAR_8, VAR_4)
   || ! FUNC_0 (VAR_8, 1)
   || ! FUNC_0 (VAR_8, 0))
 return VAR_1;
    }

  return VAR_3;
}
