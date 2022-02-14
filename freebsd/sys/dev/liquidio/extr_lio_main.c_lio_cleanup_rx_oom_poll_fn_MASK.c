
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * tq; int work; } ;
struct lio {TYPE_1__ rx_status_tq; } ;
struct ifnet {int dummy; } ;


 struct lio* FUNC_0 (struct ifnet*) ;
 scalar_t__ FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct ifnet *VAR_0)
{
 struct lio *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->rx_status_tq.tq != ((void*)0)) {
  while (FUNC_1(VAR_1->rx_status_tq.tq,
      &VAR_1->rx_status_tq.work, ((void*)0)))
   FUNC_2(VAR_1->rx_status_tq.tq,
      &VAR_1->rx_status_tq.work);

  FUNC_3(VAR_1->rx_status_tq.tq);

  VAR_1->rx_status_tq.tq = ((void*)0);
 }
}
