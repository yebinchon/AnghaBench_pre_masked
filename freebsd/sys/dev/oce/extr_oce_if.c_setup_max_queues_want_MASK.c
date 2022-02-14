
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int function_mode; int nrqs; int nwqs; int nrssqs; } ;
typedef TYPE_1__* POCE_SOFTC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(POCE_SOFTC VAR_4)
{

 if ((VAR_4->function_mode & VAR_0) ||
     (VAR_4->function_mode & VAR_1) ||
     (VAR_4->function_mode & VAR_2) ||
     (!FUNC_2(VAR_4)) ||
     FUNC_0(VAR_4)) {
  VAR_4->nrqs = 1;
  VAR_4->nwqs = 1;
 } else {
  VAR_4->nrqs = FUNC_1(VAR_3, VAR_4->nrssqs) + 1;
  VAR_4->nwqs = FUNC_1(VAR_3, VAR_4->nrssqs);
 }

 if (FUNC_0(VAR_4) && FUNC_2(VAR_4))
  VAR_4->nrqs = FUNC_1(VAR_3, VAR_4->nrssqs) + 1;
}
