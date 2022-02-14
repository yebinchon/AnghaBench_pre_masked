
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ha_softc {TYPE_1__* ha_lso; } ;
struct TYPE_3__ {int so_rcv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_4(struct ha_softc *VAR_1)
{

 if (VAR_1->ha_lso) {
  FUNC_0(&VAR_1->ha_lso->so_rcv);
  FUNC_3(VAR_1->ha_lso, VAR_0);
  FUNC_1(&VAR_1->ha_lso->so_rcv);
  FUNC_2(VAR_1->ha_lso);
  VAR_1->ha_lso = ((void*)0);
 }
}
