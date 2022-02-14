
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cbb_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct cbb_softc*,int ) ;
 struct cbb_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int VAR_2 ;
 int FUNC_7 (char*,int) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_3, device_t VAR_4)
{
 struct cbb_softc *VAR_5 = FUNC_5(VAR_3);
 int VAR_6, VAR_7;

 if (!FUNC_0(FUNC_4(VAR_5, VAR_0)))
  return (VAR_1);

 VAR_7 = 10;
 do {
  VAR_6 = FUNC_3(VAR_3);
  if (VAR_6)
   return (VAR_6);
  VAR_6 = FUNC_2(VAR_3, VAR_4, 1);
  if (VAR_6) {
   FUNC_6(VAR_3, "Reset failed, trying again.\n");
   FUNC_1(VAR_3, VAR_4);
   FUNC_7("cbbErr1", VAR_2 / 10);
  }
 } while (VAR_6 != 0 && VAR_7-- > 0);
 return (0);
}
