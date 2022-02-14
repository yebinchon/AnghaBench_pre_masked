
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int flags; } ;
typedef TYPE_1__ bfd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 () ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_7 (bfd *VAR_9)
{
  VAR_8 = ((VAR_9->flags & (VAR_2 | VAR_1 | VAR_0))
      == VAR_2);



  VAR_7 = FUNC_2 (VAR_9) == 64 ? 8 : 4;

  if (FUNC_1 (VAR_9))
    VAR_3 = VAR_4;
  else if (FUNC_3 (VAR_9))
    VAR_3 = VAR_5;
  else
    FUNC_0 ();

  FUNC_5 (VAR_9);

  FUNC_4 (VAR_9, VAR_6, ((void*)0));

  FUNC_6 ();
}
