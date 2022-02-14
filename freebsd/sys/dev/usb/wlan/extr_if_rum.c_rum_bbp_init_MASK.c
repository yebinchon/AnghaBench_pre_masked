
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct rum_softc {TYPE_1__* bbp_prom; int sc_dev; } ;
struct TYPE_5__ {int reg; int val; } ;
struct TYPE_4__ {int reg; int val; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct rum_softc*,int ) ;
 int FUNC_3 (struct rum_softc*,int,int ) ;
 TYPE_2__* VAR_2 ;
 scalar_t__ FUNC_4 (struct rum_softc*,int) ;

__attribute__((used)) static int
FUNC_5(struct rum_softc *VAR_3)
{
 int VAR_4, VAR_5;


 for (VAR_5 = 0; VAR_5 < 100; VAR_5++) {
  const uint8_t VAR_6 = FUNC_2(VAR_3, 0);
  if (VAR_6 != 0 && VAR_6 != 0xff)
   break;
  if (FUNC_4(VAR_3, VAR_1 / 100))
   break;
 }
 if (VAR_5 == 100) {
  FUNC_0(VAR_3->sc_dev, "timeout waiting for BBP\n");
  return VAR_0;
 }


 for (VAR_4 = 0; VAR_4 < FUNC_1(VAR_2); VAR_4++)
  FUNC_3(VAR_3, VAR_2[VAR_4].reg, VAR_2[VAR_4].val);


 for (VAR_4 = 0; VAR_4 < 16; VAR_4++) {
  if (VAR_3->bbp_prom[VAR_4].reg == 0 || VAR_3->bbp_prom[VAR_4].reg == 0xff)
   continue;
  FUNC_3(VAR_3, VAR_3->bbp_prom[VAR_4].reg, VAR_3->bbp_prom[VAR_4].val);
 }

 return 0;
}
