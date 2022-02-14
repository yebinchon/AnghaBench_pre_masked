
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
 int FUNC_6 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (struct amdpm_softc*) ;
 int FUNC_8 (struct amdpm_softc*) ;
 int FUNC_9 (struct amdpm_softc*) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (char*,int,int,char,int) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_10, u_char VAR_11, char VAR_12, u_char VAR_13, char *VAR_14)
{
 struct amdpm_softc *VAR_15 = (struct amdpm_softc *)FUNC_10(VAR_10);
 u_char VAR_16;
 int VAR_17;
 u_short VAR_18;

 if (VAR_13 < 1 || VAR_13 > 32)
  return (VAR_9);

 FUNC_1(VAR_15);
 FUNC_7(VAR_15);
 if (!FUNC_8(VAR_15)) {
  FUNC_5(VAR_15);
  return (VAR_8);
 }

 FUNC_4(VAR_15, VAR_3, VAR_11 & ~VAR_7);





 FUNC_4(VAR_15, VAR_5, VAR_13);


 for (VAR_16 = 0; VAR_16 < VAR_13; VAR_16++) {
  FUNC_3(VAR_15, VAR_6, VAR_14[VAR_16]);
  FUNC_6(2);
 }
 FUNC_3(VAR_15, VAR_4, VAR_12);
 VAR_18 = FUNC_2(VAR_15, VAR_2);
 FUNC_4(VAR_15, VAR_2,
     (VAR_18 & 0xfff8) | VAR_0 | VAR_1);

 VAR_17 = FUNC_9(VAR_15);

 FUNC_0(FUNC_11("amdpm: WRITEBLK to 0x%x, count=0x%x, cmd=0x%x, error=0x%x", VAR_11, VAR_13, VAR_12, VAR_17));
 FUNC_5(VAR_15);

 return (VAR_17);
}
