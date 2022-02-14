
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int bfd_target ;
struct TYPE_8__ {char const* filename; int opened_once; int direction; int * iostream; } ;
typedef TYPE_1__ bfd ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 int * FUNC_3 (char const*,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 int * FUNC_6 (int,char const*) ;
 int VAR_3 ;
 int * FUNC_7 (char const*,char const*) ;
 int VAR_4 ;

bfd *
FUNC_8 (const char *VAR_5, const char *VAR_6, const char *VAR_7, int VAR_8)
{
  bfd *VAR_9;
  const bfd_target *VAR_10;

  VAR_9 = FUNC_1 ();
  if (VAR_9 == ((void*)0))
    return ((void*)0);

  VAR_10 = FUNC_3 (VAR_6, VAR_9);
  if (VAR_10 == ((void*)0))
    {
      FUNC_0 (VAR_9);
      return ((void*)0);
    }






    VAR_9->iostream = FUNC_7 (VAR_5, VAR_7);
  if (VAR_9->iostream == ((void*)0))
    {
      FUNC_5 (VAR_1);
      FUNC_0 (VAR_9);
      return ((void*)0);
    }


  VAR_9->filename = VAR_5;



  if ((VAR_7[0] == 'r' || VAR_7[0] == 'w' || VAR_7[0] == 'a')
      && VAR_7[1] == '+')
    VAR_9->direction = VAR_2;
  else if (VAR_7[0] == 'r')
    VAR_9->direction = VAR_3;
  else
    VAR_9->direction = VAR_4;

  if (! FUNC_2 (VAR_9))
    {
      FUNC_0 (VAR_9);
      return ((void*)0);
    }
  VAR_9->opened_once = VAR_0;




  if (VAR_8 == -1)
    (void) FUNC_4 (VAR_9, VAR_0);

  return VAR_9;
}
