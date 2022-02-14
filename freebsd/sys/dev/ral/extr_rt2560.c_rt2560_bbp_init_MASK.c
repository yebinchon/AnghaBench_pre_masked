
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rt2560_softc {TYPE_1__* bbp_prom; int sc_dev; } ;
struct TYPE_5__ {int reg; int val; } ;
struct TYPE_4__ {scalar_t__ reg; scalar_t__ val; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (struct rt2560_softc*,int ) ;
 int FUNC_4 (struct rt2560_softc*,int,int) ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static int
FUNC_5(struct rt2560_softc *VAR_3)
{
 int VAR_4, VAR_5;


 for (VAR_5 = 0; VAR_5 < 100; VAR_5++) {
  if (FUNC_3(VAR_3, VAR_1) != 0)
   break;
  FUNC_0(1);
 }
 if (VAR_5 == 100) {
  FUNC_1(VAR_3->sc_dev, "timeout waiting for BBP\n");
  return VAR_0;
 }


 for (VAR_4 = 0; VAR_4 < FUNC_2(VAR_2); VAR_4++) {
  FUNC_4(VAR_3, VAR_2[VAR_4].reg,
      VAR_2[VAR_4].val);
 }


 for (VAR_4 = 0; VAR_4 < 16; VAR_4++) {
  if (VAR_3->bbp_prom[VAR_4].reg == 0 && VAR_3->bbp_prom[VAR_4].val == 0)
   break;
  FUNC_4(VAR_3, VAR_3->bbp_prom[VAR_4].reg, VAR_3->bbp_prom[VAR_4].val);
 }
 FUNC_4(VAR_3, 17, 0x48);

 return 0;
}
