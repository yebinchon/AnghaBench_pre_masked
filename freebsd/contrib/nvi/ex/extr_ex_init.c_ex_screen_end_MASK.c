
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {TYPE_4__* c; } ;
struct TYPE_15__ {TYPE_1__ bp1; } ;
struct TYPE_17__ {TYPE_2__ ibcw; struct TYPE_17__* lastbcomm; struct TYPE_17__* ibp; } ;
struct TYPE_16__ {int * ex_private; } ;
typedef TYPE_3__ SCR ;
typedef TYPE_4__ EX_PRIVATE ;


 TYPE_4__* FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_4__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;

int
FUNC_7(SCR *VAR_1)
{
 EX_PRIVATE *VAR_2;
 int VAR_3;

 if ((VAR_2 = FUNC_0(VAR_1)) == ((void*)0))
  return (0);

 VAR_3 = 0;


 if (FUNC_1(VAR_1, VAR_0) && FUNC_6(VAR_1))
  VAR_3 = 1;

 if (FUNC_2(VAR_1))
  VAR_3 = 1;

 if (VAR_2->ibp != ((void*)0))
  FUNC_5(VAR_2->ibp);

 if (VAR_2->lastbcomm != ((void*)0))
  FUNC_5(VAR_2->lastbcomm);

 if (VAR_2->ibcw.bp1.c != ((void*)0))
  FUNC_5(VAR_2->ibcw.bp1.c);

 if (FUNC_4(VAR_1))
  VAR_3 = 1;

 if (FUNC_3(VAR_1))
  VAR_3 = 1;


 FUNC_5(VAR_2);
 VAR_1->ex_private = ((void*)0);

 return (VAR_3);
}
