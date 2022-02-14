
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int bfd_boolean ;
struct TYPE_9__ {TYPE_1__* xvec; } ;
typedef TYPE_2__ bfd ;
struct TYPE_8__ {scalar_t__ byteorder; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char const*,TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char const*,TYPE_2__*) ;

bfd_boolean
FUNC_5 (bfd *VAR_4, bfd *VAR_5)
{
  if (VAR_4->xvec->byteorder != VAR_5->xvec->byteorder
      && VAR_4->xvec->byteorder != VAR_0
      && VAR_5->xvec->byteorder != VAR_0)
    {
      const char *VAR_6;

      if (FUNC_2 (VAR_4))
 VAR_6 = FUNC_0("%B: compiled for a big endian system and target is little endian");
      else
 VAR_6 = FUNC_0("%B: compiled for a little endian system and target is big endian");

      FUNC_1) (VAR_6, VAR_4);

      FUNC_3 (VAR_3);
      return VAR_1;
    }

  return VAR_2;
}
