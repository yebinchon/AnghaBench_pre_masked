
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ath_softc {int sc_dev; int sc_ah; scalar_t__ sc_invalid; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int ,void**,int*) ;
 int FUNC_2 (struct ath_softc*,int ) ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static void
FUNC_4(void *VAR_1, int VAR_2)
{
 struct ath_softc *VAR_3 = VAR_1;
 u_int32_t *VAR_4;
 u_int32_t VAR_5;
 void *VAR_6;

 if (VAR_3->sc_invalid)
  return;

 FUNC_3(VAR_3->sc_dev, "hardware error; resetting\n");





 if (FUNC_1(VAR_3->sc_ah, &VAR_6, &VAR_5)) {
  FUNC_0(VAR_5 >= 6*sizeof(u_int32_t), ("len %u bytes", VAR_5));
  VAR_4 = VAR_6;
  FUNC_3(VAR_3->sc_dev,
      "0x%08x 0x%08x 0x%08x, 0x%08x 0x%08x 0x%08x\n", VAR_4[0],
      VAR_4[1] , VAR_4[2], VAR_4[3], VAR_4[4], VAR_4[5]);
 }
 FUNC_2(VAR_3, VAR_0);
}
