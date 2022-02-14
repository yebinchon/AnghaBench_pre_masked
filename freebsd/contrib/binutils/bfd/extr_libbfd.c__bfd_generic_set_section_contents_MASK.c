
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
struct TYPE_3__ {scalar_t__ filepos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void const*,scalar_t__,int *) ;
 scalar_t__ FUNC_1 (int *,scalar_t__,int ) ;

bfd_boolean
FUNC_2 (bfd *VAR_3,
       sec_ptr VAR_4,
       const void *VAR_5,
       file_ptr VAR_6,
       bfd_size_type VAR_7)
{
  if (VAR_7 == 0)
    return VAR_2;

  if (FUNC_1 (VAR_3, VAR_4->filepos + VAR_6, VAR_1) != 0
      || FUNC_0 (VAR_5, VAR_7, VAR_3) != VAR_7)
    return VAR_0;

  return VAR_2;
}
