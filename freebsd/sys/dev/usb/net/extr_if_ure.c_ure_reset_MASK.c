
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ue_dev; } ;
struct ure_softc {TYPE_1__ sc_ue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (struct ure_softc*,int ,int ) ;
 int FUNC_3 (struct ure_softc*,int ,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct ure_softc *VAR_5)
{
 int VAR_6;

 FUNC_3(VAR_5, VAR_2, VAR_1, VAR_0);

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  if (!(FUNC_2(VAR_5, VAR_2, VAR_1) &
      VAR_0))
   break;
  FUNC_1(&VAR_5->sc_ue, VAR_4 / 100);
 }
 if (VAR_6 == VAR_3)
  FUNC_0(VAR_5->sc_ue.ue_dev, "reset never completed\n");
}
