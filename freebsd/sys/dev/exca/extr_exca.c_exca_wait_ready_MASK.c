
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exca_softc {int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct exca_softc*,int ) ;

__attribute__((used)) static void
FUNC_4(struct exca_softc *VAR_2)
{
 int VAR_3;
 FUNC_1(VAR_2->dev, "exca_wait_ready: status 0x%02x\n",
     FUNC_3(VAR_2, VAR_0));
 for (VAR_3 = 0; VAR_3 < 10000; VAR_3++) {
  if (FUNC_3(VAR_2, VAR_0) & VAR_1)
   return;
  FUNC_0(500);
 }
 FUNC_2(VAR_2->dev, "ready never happened, status = %02x\n",
     FUNC_3(VAR_2, VAR_0));
}
