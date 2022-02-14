
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* eq; int task; int tq; int sc; } ;
struct TYPE_3__ {int intr; int eq_id; } ;
typedef int POCE_SOFTC ;
typedef TYPE_2__* POCE_INTR_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int
FUNC_2(void *VAR_4)
{
 POCE_INTR_INFO VAR_5 = (POCE_INTR_INFO) VAR_4;
 POCE_SOFTC VAR_6 = VAR_5->sc;

 if (VAR_5->eq == ((void*)0))
  return VAR_2;

 FUNC_0(VAR_6, VAR_5->eq->eq_id, 0, VAR_0, VAR_3);

 FUNC_1(VAR_5->tq, &VAR_5->task);

  VAR_5->eq->intr++;

 return VAR_1;
}
