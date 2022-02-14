
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct bwi_softc {int sc_dev; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_4(struct bwi_softc *VAR_3, int VAR_4)
{
 uint32_t VAR_5 = FUNC_0(VAR_4);
 int VAR_6;


 for (VAR_6 = 0; VAR_6 < 50; ++VAR_6) {
  FUNC_3(VAR_3->sc_dev, VAR_0, VAR_5, 4);
  if (FUNC_2(VAR_3->sc_dev, VAR_0, 4) == VAR_5)
   return 0;
  FUNC_1(10);
 }


 return VAR_1;
}
