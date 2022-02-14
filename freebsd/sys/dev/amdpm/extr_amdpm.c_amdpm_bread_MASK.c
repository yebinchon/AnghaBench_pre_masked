
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
 int FUNC_3 (struct amdpm_softc*,int ) ;
 int FUNC_4 (struct amdpm_softc*,int ,char) ;
 int FUNC_5 (struct amdpm_softc*,int ,int) ;
 int FUNC_6 (struct amdpm_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (struct amdpm_softc*) ;
 int FUNC_9 (struct amdpm_softc*) ;
 int FUNC_10 (struct amdpm_softc*) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (char*,int,int,char,int) ;

__attribute__((used)) static int
FUNC_13(device_t VAR_11, u_char VAR_12, char VAR_13, u_char *VAR_14, char *VAR_15)
{
 struct amdpm_softc *VAR_16 = (struct amdpm_softc *)FUNC_11(VAR_11);
 u_char VAR_17, VAR_18, VAR_19;
 int VAR_20;
 u_short VAR_21;

 if (*VAR_14 < 1 || *VAR_14 > 32)
  return (VAR_9);

 FUNC_1(VAR_16);
 FUNC_8(VAR_16);
 if (!FUNC_9(VAR_16)) {
  FUNC_6(VAR_16);
  return (VAR_8);
 }

 FUNC_5(VAR_16, VAR_3, VAR_12 | VAR_7);

 FUNC_4(VAR_16, VAR_4, VAR_13);

 VAR_21 = FUNC_3(VAR_16, VAR_2);
 FUNC_5(VAR_16, VAR_2,
     (VAR_21 & 0xfff8) | VAR_0 | VAR_1);

 if ((VAR_20 = FUNC_10(VAR_16)) != VAR_10)
  goto error;

 VAR_18 = FUNC_3(VAR_16, VAR_5);


 for (VAR_19 = 0; VAR_19 < VAR_18; VAR_19++) {
  VAR_17 = FUNC_2(VAR_16, VAR_6);
  if (VAR_19 < *VAR_14)
   VAR_15[VAR_19] = VAR_17;
  FUNC_7(2);
 }
 *VAR_14 = VAR_18;

error:
 FUNC_0(FUNC_12("amdpm: READBLK to 0x%x, count=0x%x, cmd=0x%x, error=0x%x", VAR_12, *VAR_14, VAR_13, VAR_20));
 FUNC_6(VAR_16);

 return (VAR_20);
}
