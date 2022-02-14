
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
struct TYPE_3__ {scalar_t__ rawsize; scalar_t__ size; scalar_t__ filepos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*,scalar_t__,int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *,scalar_t__,int ) ;
 int FUNC_2 (int ) ;

bfd_boolean
FUNC_3 (bfd *VAR_4,
       sec_ptr VAR_5,
       void *VAR_6,
       file_ptr VAR_7,
       bfd_size_type VAR_8)
{
  bfd_size_type VAR_9;
  if (VAR_8 == 0)
    return VAR_2;

  VAR_9 = VAR_5->rawsize ? VAR_5->rawsize : VAR_5->size;
  if (VAR_7 + VAR_8 > VAR_9)
    {
      FUNC_2 (VAR_3);
      return VAR_0;
    }

  if (FUNC_1 (VAR_4, VAR_5->filepos + VAR_7, VAR_1) != 0
      || FUNC_0 (VAR_6, VAR_8, VAR_4) != VAR_8)
    return VAR_0;

  return VAR_2;
}
