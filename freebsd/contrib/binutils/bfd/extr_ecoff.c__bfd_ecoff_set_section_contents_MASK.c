
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ file_ptr ;
typedef int bfd_size_type ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
struct TYPE_9__ {int output_has_begun; } ;
typedef TYPE_1__ bfd ;
struct TYPE_10__ {scalar_t__ filepos; int lma; int name; } ;
typedef TYPE_2__ asection ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (void const*,int,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*,scalar_t__,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int ,int ) ;

bfd_boolean
FUNC_6 (bfd *VAR_4,
     asection *VAR_5,
     const void * VAR_6,
     file_ptr VAR_7,
     bfd_size_type VAR_8)
{
  file_ptr VAR_9;



  if (! VAR_4->output_has_begun
      && ! FUNC_4 (VAR_4))
    return VAR_0;



  if (FUNC_5 (VAR_5->name, VAR_3))
    {
      bfd_byte *VAR_10, *VAR_11;

      VAR_10 = (bfd_byte *) VAR_6;
      VAR_11 = VAR_10 + VAR_8;
      while (VAR_10 < VAR_11)
 {
   ++VAR_5->lma;
   VAR_10 += FUNC_2 (VAR_4, VAR_10) * 4;
 }

      FUNC_0 (VAR_10 == VAR_11);
    }

  if (VAR_8 == 0)
    return VAR_2;

  VAR_9 = VAR_5->filepos + VAR_7;
  if (FUNC_3 (VAR_4, VAR_9, VAR_1) != 0
      || FUNC_1 (VAR_6, VAR_8, VAR_4) != VAR_8)
    return VAR_0;

  return VAR_2;
}
