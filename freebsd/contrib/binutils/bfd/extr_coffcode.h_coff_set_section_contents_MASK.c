
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* sec_ptr ;
typedef scalar_t__ file_ptr ;
typedef int bfd_size_type ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
struct TYPE_10__ {int output_has_begun; } ;
typedef TYPE_2__ bfd ;
struct TYPE_9__ {scalar_t__ filepos; int lma; int name; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (void const*,int,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_3 (TYPE_2__*,scalar_t__,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int ,int ) ;

__attribute__((used)) static bfd_boolean
FUNC_6 (bfd * VAR_4,
      sec_ptr VAR_5,
      const void * VAR_6,
      file_ptr VAR_7,
      bfd_size_type VAR_8)
{
  if (! VAR_4->output_has_begun)
    {
      if (! FUNC_4 (VAR_4))
 return VAR_0;
    }
  if (VAR_5->filepos == 0)
    return VAR_2;

  if (FUNC_3 (VAR_4, VAR_5->filepos + VAR_7, VAR_1) != 0)
    return VAR_0;

  if (VAR_8 == 0)
    return VAR_2;

  return FUNC_1 (VAR_6, VAR_8, VAR_4) == VAR_8;
}
