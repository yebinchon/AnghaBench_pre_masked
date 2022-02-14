
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
 int FUNC_3 (struct amdpm_softc*,int ,int) ;
 int FUNC_4 (struct amdpm_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (struct amdpm_softc*) ;
 int FUNC_6 (struct amdpm_softc*) ;
 int FUNC_7 (struct amdpm_softc*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (char*,int,char,int) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_7, u_char VAR_8, char VAR_9)
{
 struct amdpm_softc *VAR_10 = (struct amdpm_softc *)FUNC_8(VAR_7);
 int VAR_11;
 u_short VAR_12;

 FUNC_1(VAR_10);
 FUNC_5(VAR_10);
 if (!FUNC_6(VAR_10)) {
  FUNC_4(VAR_10);
  return (VAR_6);
 }

 FUNC_3(VAR_10, VAR_3, VAR_8 & ~VAR_5);
 FUNC_3(VAR_10, VAR_4, VAR_9);
 VAR_12 = FUNC_2(VAR_10, VAR_2);
 FUNC_3(VAR_10, VAR_2, (VAR_12 & 0xfff8) | VAR_0 | VAR_1);

 VAR_11 = FUNC_7(VAR_10);

 FUNC_0(FUNC_9("amdpm: SENDB to 0x%x, byte=0x%x, error=0x%x\n", VAR_8, VAR_9, VAR_11));
 FUNC_4(VAR_10);

 return (VAR_11);
}
