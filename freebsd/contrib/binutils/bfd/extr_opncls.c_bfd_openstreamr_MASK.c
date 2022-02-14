
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int bfd_target ;
struct TYPE_7__ {char const* filename; int direction; int * iostream; } ;
typedef TYPE_1__ bfd ;
typedef int FILE ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int * FUNC_3 (char const*,TYPE_1__*) ;
 int VAR_0 ;

bfd *
FUNC_4 (const char *VAR_1, const char *VAR_2, void *VAR_3)
{
  FILE *VAR_4 = VAR_3;
  bfd *VAR_5;
  const bfd_target *VAR_6;

  VAR_5 = FUNC_1 ();
  if (VAR_5 == ((void*)0))
    return ((void*)0);

  VAR_6 = FUNC_3 (VAR_2, VAR_5);
  if (VAR_6 == ((void*)0))
    {
      FUNC_0 (VAR_5);
      return ((void*)0);
    }

  VAR_5->iostream = VAR_4;
  VAR_5->filename = VAR_1;
  VAR_5->direction = VAR_0;

  if (! FUNC_2 (VAR_5))
    {
      FUNC_0 (VAR_5);
      return ((void*)0);
    }

  return VAR_5;
}
