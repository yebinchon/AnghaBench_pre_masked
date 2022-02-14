
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int bfd_target ;
struct TYPE_7__ {char const* filename; int direction; } ;
typedef TYPE_1__ bfd ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 () ;
 int VAR_0 ;
 int * FUNC_2 (char const*,TYPE_1__*) ;
 int * FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;

bfd *
FUNC_5 (const char *VAR_2, const char *VAR_3)
{
  bfd *VAR_4;
  const bfd_target *VAR_5;



  VAR_4 = FUNC_1 ();
  if (VAR_4 == ((void*)0))
    return ((void*)0);

  VAR_5 = FUNC_2 (VAR_3, VAR_4);
  if (VAR_5 == ((void*)0))
    {
      FUNC_0 (VAR_4);
      return ((void*)0);
    }

  VAR_4->filename = VAR_2;
  VAR_4->direction = VAR_1;

  if (FUNC_3 (VAR_4) == ((void*)0))
    {

      FUNC_4 (VAR_0);
      FUNC_0 (VAR_4);
      return ((void*)0);
  }

  return VAR_4;
}
