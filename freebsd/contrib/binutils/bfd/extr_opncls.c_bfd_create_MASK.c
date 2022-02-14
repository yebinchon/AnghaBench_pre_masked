
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char const* filename; int direction; int xvec; } ;
typedef TYPE_1__ bfd ;


 TYPE_1__* FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_1 ;

bfd *
FUNC_2 (const char *VAR_2, bfd *VAR_3)
{
  bfd *VAR_4;

  VAR_4 = FUNC_0 ();
  if (VAR_4 == ((void*)0))
    return ((void*)0);
  VAR_4->filename = VAR_2;
  if (VAR_3)
    VAR_4->xvec = VAR_3->xvec;
  VAR_4->direction = VAR_1;
  FUNC_1 (VAR_4, VAR_0);

  return VAR_4;
}
