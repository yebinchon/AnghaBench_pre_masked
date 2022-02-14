
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad7417_softc {int sc_addr; int sc_dev; int init_done; } ;
struct ad7417_sensor {scalar_t__ type; int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ad7417_sensor*) ;
 scalar_t__ FUNC_1 (int ,int ,int*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 struct ad7417_softc* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct ad7417_sensor *VAR_2)
{
 struct ad7417_softc *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_3(VAR_2->dev);


 if (!VAR_3->init_done)
  if (FUNC_2(VAR_3->sc_dev, VAR_3->sc_addr) < 0)
   return (-1);

 if (VAR_2->type == VAR_0) {
  if (FUNC_1(VAR_3->sc_dev, VAR_3->sc_addr, &VAR_4) < 0)
   return (-1);
  VAR_4 += VAR_1;
 } else {
  VAR_4 = FUNC_0(VAR_2);
 }
 return (VAR_4);
}
