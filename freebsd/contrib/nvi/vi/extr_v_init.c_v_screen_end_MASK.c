
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* ps; struct TYPE_8__* mcs; struct TYPE_8__* rep; struct TYPE_8__* keyw; } ;
typedef TYPE_1__ VI_PRIVATE ;
struct TYPE_9__ {int * vi_private; } ;
typedef TYPE_2__ SCR ;


 TYPE_1__* VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;

int
FUNC_2(SCR *VAR_1)
{
 VI_PRIVATE *VAR_2;

 if ((VAR_2 = FUNC_0(VAR_1)) == ((void*)0))
  return (0);
 if (VAR_2->keyw != ((void*)0))
  FUNC_1(VAR_2->keyw);
 if (VAR_2->rep != ((void*)0))
  FUNC_1(VAR_2->rep);
 if (VAR_2->mcs != ((void*)0))
  FUNC_1(VAR_2->mcs);
 if (VAR_2->ps != ((void*)0))
  FUNC_1(VAR_2->ps);

 if (VAR_0 != ((void*)0))
  FUNC_1(VAR_0);

 FUNC_1(VAR_2);
 VAR_1->vi_private = ((void*)0);

 return (0);
}
