
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* sec_ptr ;
typedef scalar_t__ file_ptr ;
typedef scalar_t__ bfd_size_type ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_3__ {int flags; scalar_t__ rawsize; scalar_t__ size; scalar_t__ contents; } ;


 int FUNC_0 (int *,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*,scalar_t__,size_t) ;
 int FUNC_3 (void*,int ,size_t) ;

bfd_boolean
FUNC_4 (bfd *VAR_7,
     sec_ptr VAR_8,
     void *VAR_9,
     file_ptr VAR_10,
     bfd_size_type VAR_11)
{
  bfd_size_type VAR_12;

  if (VAR_8->flags & VAR_1)
    {
      FUNC_3 (VAR_9, 0, (size_t) VAR_11);
      return VAR_4;
    }

  VAR_12 = VAR_8->rawsize ? VAR_8->rawsize : VAR_8->size;
  if ((bfd_size_type) VAR_10 > VAR_12
      || VAR_11 > VAR_12
      || VAR_10 + VAR_11 > VAR_12
      || VAR_11 != (size_t) VAR_11)
    {
      FUNC_1 (VAR_6);
      return VAR_0;
    }

  if (VAR_11 == 0)

    return VAR_4;

  if ((VAR_8->flags & VAR_2) == 0)
    {
      FUNC_3 (VAR_9, 0, (size_t) VAR_11);
      return VAR_4;
    }

  if ((VAR_8->flags & VAR_3) != 0)
    {
      FUNC_2 (VAR_9, VAR_8->contents + VAR_10, (size_t) VAR_11);
      return VAR_4;
    }

  return FUNC_0 (VAR_7, VAR_5,
     (VAR_7, VAR_8, VAR_9, VAR_10, VAR_11));
}
