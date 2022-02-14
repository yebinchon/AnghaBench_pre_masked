
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int nwqs; int timer; int * wq; } ;
typedef TYPE_1__* POCE_SOFTC ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int ,void (*) (void*),TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_9(void *VAR_1)
{
 POCE_SOFTC VAR_2 = VAR_1;
 int VAR_3 = 0;

 FUNC_3(VAR_2);
 FUNC_6(VAR_2);
 FUNC_7(VAR_2);
 FUNC_5(VAR_2);


 for (VAR_3 = 0; VAR_3 < VAR_2->nwqs; VAR_3++)
  FUNC_8(VAR_2, VAR_2->wq[VAR_3]);


 if (FUNC_0(VAR_2) || FUNC_1(VAR_2))
  FUNC_4(VAR_2);

 FUNC_2(&VAR_2->timer, VAR_0, FUNC_9, VAR_2);
}
