
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int link_status; } ;
struct TYPE_6__ {TYPE_1__ s; } ;
struct oce_async_cqe_link_state {TYPE_2__ u0; } ;
struct TYPE_7__ {int link_status; int ifp; } ;
typedef TYPE_3__* POCE_SOFTC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(POCE_SOFTC VAR_5, struct oce_async_cqe_link_state *VAR_6)
{

 if ((VAR_6->u0.s.link_status & ~VAR_2) ==
      VAR_1) {
  VAR_5->link_status = VAR_1;
  FUNC_0(VAR_5->ifp, VAR_4);
 } else {
  VAR_5->link_status = VAR_0;
  FUNC_0(VAR_5->ifp, VAR_3);
 }
}
