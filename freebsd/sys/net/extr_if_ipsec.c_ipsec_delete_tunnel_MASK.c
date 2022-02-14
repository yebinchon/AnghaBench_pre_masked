
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipsec_softc {scalar_t__ family; int * sp; TYPE_1__* ifp; } ;
struct TYPE_2__ {int if_drv_flags; } ;


 int FUNC_0 (struct ipsec_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int VAR_4 ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void
FUNC_5(struct ipsec_softc *VAR_5)
{
 int VAR_6;

 FUNC_4(&VAR_3, VAR_2);

 VAR_5->ifp->if_drv_flags &= ~VAR_0;
 if (VAR_5->family != 0) {
  FUNC_0(VAR_5, VAR_4);
  VAR_5->family = 0;




  FUNC_1();

  FUNC_3(VAR_5->sp, VAR_1);
  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
   FUNC_2(&VAR_5->sp[VAR_6]);
 }
}
