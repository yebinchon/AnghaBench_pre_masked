
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mfi_softc {int mfi_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct mfi_softc*,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct mfi_softc*,int ,int) ;
 int VAR_4 ;
 int FUNC_2 (int ,char*,int,...) ;

int
FUNC_3(struct mfi_softc *VAR_5)
{
 int VAR_6 = 0, VAR_7 = 0;
 int VAR_8;

 FUNC_1(VAR_5, VAR_4, 0xF);
 FUNC_1(VAR_5, VAR_4, 4);
 FUNC_1(VAR_5, VAR_4, 0xB);
 FUNC_1(VAR_5, VAR_4, 2);
 FUNC_1(VAR_5, VAR_4, 7);
 FUNC_1(VAR_5, VAR_4, 0xD);

 for (VAR_7 = 0; VAR_7 < 10000; VAR_7++) ;

 VAR_8 = (uint32_t)FUNC_0(VAR_5, VAR_2);

 while (!( VAR_8 & VAR_1)) {
  for (VAR_7 = 0; VAR_7 < 1000; VAR_7++);
  VAR_8 = (uint32_t)FUNC_0(VAR_5, VAR_2);
  FUNC_2(VAR_5->mfi_dev, "ADP_RESET_TBOLT: retry time=%d, "
      "hostdiag=%#x\n", VAR_6, VAR_8);

  if (VAR_6++ >= 100)
   return 1;
 }

 FUNC_2(VAR_5->mfi_dev, "ADP_RESET_TBOLT: HostDiag=%#x\n", VAR_8);

 FUNC_1(VAR_5, VAR_2, (VAR_8 | VAR_0));

 for (VAR_7=0; VAR_7 < 10; VAR_7++) {
  for (VAR_7 = 0; VAR_7 < 10000; VAR_7++);
 }

 VAR_8 = (uint32_t)FUNC_0(VAR_5, VAR_3);
 while (VAR_8 & VAR_0) {
  for (VAR_7 = 0; VAR_7 < 1000; VAR_7++) ;
  VAR_8 = (uint32_t)FUNC_0(VAR_5, VAR_3);
  FUNC_2(VAR_5->mfi_dev, "ADP_RESET_TBOLT: retry time=%d, "
      "hostdiag=%#x\n", VAR_6, VAR_8);

  if (VAR_6++ >= 1000)
   return 1;
 }
 return 0;
}
