
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct rt2661_softc {TYPE_1__* bbp_prom; int sc_dev; } ;
struct TYPE_5__ {scalar_t__ reg; int val; } ;
struct TYPE_4__ {scalar_t__ reg; int val; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct rt2661_softc*,int ) ;
 int FUNC_4 (struct rt2661_softc*,scalar_t__,int ) ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static int
FUNC_5(struct rt2661_softc *VAR_2)
{
 int VAR_3, VAR_4;
 uint8_t VAR_5;


 for (VAR_4 = 0; VAR_4 < 100; VAR_4++) {
  VAR_5 = FUNC_3(VAR_2, 0);
  if (VAR_5 != 0 && VAR_5 != 0xff)
   break;
  FUNC_0(100);
 }
 if (VAR_4 == 100) {
  FUNC_1(VAR_2->sc_dev, "timeout waiting for BBP\n");
  return VAR_0;
 }


 for (VAR_3 = 0; VAR_3 < FUNC_2(VAR_1); VAR_3++) {
  FUNC_4(VAR_2, VAR_1[VAR_3].reg,
      VAR_1[VAR_3].val);
 }


 for (VAR_3 = 0; VAR_3 < 16; VAR_3++) {
  if (VAR_2->bbp_prom[VAR_3].reg == 0)
   continue;
  FUNC_4(VAR_2, VAR_2->bbp_prom[VAR_3].reg, VAR_2->bbp_prom[VAR_3].val);
 }

 return 0;
}
