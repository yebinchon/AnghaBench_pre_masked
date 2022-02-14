
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int bfd_boolean ;
struct TYPE_6__ {scalar_t__ xvec; char const* filename; } ;
typedef TYPE_1__ bfd ;
struct TYPE_7__ {char* core_program; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 char* FUNC_3 (char const*,char) ;

bfd_boolean
FUNC_4 (bfd *VAR_3, bfd *VAR_4)
{
  char* VAR_5;



  if (VAR_3->xvec != VAR_4->xvec)
    {
      FUNC_0 (VAR_2);
      return VAR_0;
    }


  VAR_5 = FUNC_1 (VAR_3)->core_program;
  if (VAR_5 != ((void*)0))
    {
      const char* VAR_6 = FUNC_3 (VAR_4->filename, '/');

      VAR_6 = VAR_6 ? VAR_6 + 1 : VAR_4->filename;

      if (FUNC_2 (VAR_6, VAR_5) != 0)
 return VAR_0;
    }

  return VAR_1;
}
