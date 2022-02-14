
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ue_dev; } ;
struct rue_softc {TYPE_1__ sc_ue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;
 int FUNC_1 (struct rue_softc*,int ) ;
 int FUNC_2 (struct rue_softc*,int ,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_4(struct rue_softc *VAR_4)
{
 int VAR_5;

 FUNC_2(VAR_4, VAR_0, VAR_1);

 for (VAR_5 = 0; VAR_5 != VAR_2; VAR_5++) {
  if (FUNC_3(&VAR_4->sc_ue, VAR_3 / 1000))
   break;
  if (!(FUNC_1(VAR_4, VAR_0) & VAR_1))
   break;
 }
 if (VAR_5 == VAR_2)
  FUNC_0(VAR_4->sc_ue.ue_dev, "reset never completed\n");

 FUNC_3(&VAR_4->sc_ue, VAR_3 / 100);
}
