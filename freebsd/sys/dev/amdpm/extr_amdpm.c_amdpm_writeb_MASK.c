
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef int u_char ;
struct amdpm_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct amdpm_softc*) ;
 int FUNC_2 (struct amdpm_softc*,int ) ;
 int FUNC_3 (struct amdpm_softc*,int ,char) ;
 int FUNC_4 (struct amdpm_softc*,int ,int) ;
 int FUNC_5 (struct amdpm_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (struct amdpm_softc*) ;
 int FUNC_7 (struct amdpm_softc*) ;
 int FUNC_8 (struct amdpm_softc*) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (char*,int,char,char,int) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_8, u_char VAR_9, char VAR_10, char VAR_11)
{
 struct amdpm_softc *VAR_12 = (struct amdpm_softc *)FUNC_9(VAR_8);
 int VAR_13;
 u_short VAR_14;

 FUNC_1(VAR_12);
 FUNC_6(VAR_12);
 if (!FUNC_7(VAR_12)) {
  FUNC_5(VAR_12);
  return (VAR_7);
 }

 FUNC_4(VAR_12, VAR_3, VAR_9 & ~VAR_6);
 FUNC_4(VAR_12, VAR_5, VAR_11);
 FUNC_3(VAR_12, VAR_4, VAR_10);
 VAR_14 = FUNC_2(VAR_12, VAR_2);
 FUNC_4(VAR_12, VAR_2, (VAR_14 & 0xfff8) | VAR_0 | VAR_1);

 VAR_13 = FUNC_8(VAR_12);

 FUNC_0(FUNC_10("amdpm: WRITEB to 0x%x, cmd=0x%x, byte=0x%x, error=0x%x\n", VAR_9, VAR_10, VAR_11, VAR_13));
 FUNC_5(VAR_12);

 return (VAR_13);
}
