
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* bsym; } ;
typedef TYPE_1__ symbolS ;
typedef int flagword ;
struct TYPE_9__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 char* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int ,TYPE_2__*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_6 (char const*,int ) ;

int
FUNC_7 (symbolS *VAR_11)
{
  flagword VAR_12;
  const char *VAR_13;

  if (FUNC_0 (VAR_11))
    return 1;

  VAR_12 = VAR_11->bsym->flags;


  if ((VAR_12 & VAR_2) && (VAR_12 & VAR_1))
    FUNC_3 ();

  if (FUNC_4 (VAR_11->bsym) == VAR_9)
    return 1;

  if (VAR_8


      && (VAR_12 & (VAR_1 | VAR_0)) == 0
      && FUNC_4 (VAR_11->bsym) == VAR_5)
    return 1;

  VAR_13 = FUNC_1 (VAR_11);
  return (VAR_13 != ((void*)0)
   && ! FUNC_2 (VAR_11)
   && (FUNC_6 (VAR_13, VAR_3)
       || FUNC_6 (VAR_13, VAR_4)
       || (! VAR_6
    && (FUNC_5 (VAR_10, VAR_11->bsym)
        || (VAR_7
     && VAR_13[0] == '?'
     && VAR_13[1] == '?')))));
}
