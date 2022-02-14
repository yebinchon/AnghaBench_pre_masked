
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int file_ptr ;
struct TYPE_10__ {int origin; scalar_t__ my_archive; } ;
typedef TYPE_1__ bfd ;
struct TYPE_11__ {int first_file_filepos; } ;


 TYPE_1__* FUNC_0 (TYPE_1__*,int) ;
 unsigned int FUNC_1 (TYPE_1__*) ;
 TYPE_5__* FUNC_2 (TYPE_1__*) ;

bfd *
FUNC_3 (bfd *VAR_0, bfd *VAR_1)
{
  file_ptr VAR_2;

  if (!VAR_1)
    VAR_2 = FUNC_2 (VAR_0)->first_file_filepos;
  else
    {
      unsigned int VAR_3 = FUNC_1 (VAR_1);
      VAR_2 = VAR_1->origin + VAR_3;
      if (VAR_0->my_archive)
 VAR_2 -= VAR_0->origin;



      VAR_2 += VAR_2 % 2;
    }

  return FUNC_0 (VAR_0, VAR_2);
}
