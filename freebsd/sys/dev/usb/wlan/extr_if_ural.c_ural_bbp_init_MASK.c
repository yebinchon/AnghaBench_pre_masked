
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ural_softc {TYPE_1__* bbp_prom; int sc_dev; } ;
struct TYPE_5__ {int reg; int val; } ;
struct TYPE_4__ {int reg; int val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (struct ural_softc*,int ) ;
 int FUNC_3 (struct ural_softc*,int,int ) ;
 TYPE_2__* VAR_3 ;
 scalar_t__ FUNC_4 (struct ural_softc*,int) ;

__attribute__((used)) static int
FUNC_5(struct ural_softc *VAR_4)
{
 int VAR_5, VAR_6;


 for (VAR_6 = 0; VAR_6 < 100; VAR_6++) {
  if (FUNC_2(VAR_4, VAR_1) != 0)
   break;
  if (FUNC_4(VAR_4, VAR_2 / 100))
   break;
 }
 if (VAR_6 == 100) {
  FUNC_0(VAR_4->sc_dev, "timeout waiting for BBP\n");
  return VAR_0;
 }


 for (VAR_5 = 0; VAR_5 < FUNC_1(VAR_3); VAR_5++)
  FUNC_3(VAR_4, VAR_3[VAR_5].reg, VAR_3[VAR_5].val);
 return 0;
}
