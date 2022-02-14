
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfiscsi_target {int ct_online; struct cfiscsi_softc* ct_softc; } ;
struct cfiscsi_softc {int * listener; int lock; int online; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(void *VAR_1)
{
 struct cfiscsi_softc *VAR_2;
 struct cfiscsi_target *VAR_3;
 int VAR_4;

 VAR_3 = (struct cfiscsi_target *)VAR_1;
 VAR_2 = VAR_3->ct_softc;

 FUNC_2(&VAR_2->lock);
 if (VAR_3->ct_online) {
  FUNC_3(&VAR_2->lock);
  return;
 }
 VAR_3->ct_online = 1;
 VAR_4 = VAR_2->online++;
 FUNC_3(&VAR_2->lock);
 if (VAR_4 > 0)
  return;






}
