
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* hpriv_p ;
struct TYPE_6__ {int enableDelayedAck; } ;
struct TYPE_7__ {int mtx; TYPE_1__ conf; int sackTimer; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__* const) ;
 int FUNC_4 (TYPE_2__* const,int *) ;

__attribute__((used)) static void
FUNC_5(const hpriv_p VAR_1)
{
 FUNC_1(&VAR_1->mtx, VAR_0);
 if (!(FUNC_0(&VAR_1->sackTimer))) {

  if (!VAR_1->conf.enableDelayedAck) {
   FUNC_4(VAR_1, ((void*)0));

   return;
  }

  FUNC_3(VAR_1);
  FUNC_2(&VAR_1->mtx);
  return;
 }
 FUNC_2(&VAR_1->mtx);
}
