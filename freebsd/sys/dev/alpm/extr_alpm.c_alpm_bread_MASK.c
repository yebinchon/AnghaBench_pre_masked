
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct alpm_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct alpm_softc*) ;
 int FUNC_2 (struct alpm_softc*,int ) ;
 int FUNC_3 (struct alpm_softc*,int ,int) ;
 int FUNC_4 (struct alpm_softc*) ;
 int FUNC_5 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (struct alpm_softc*) ;
 int FUNC_7 (struct alpm_softc*) ;
 int FUNC_8 (struct alpm_softc*) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (char*,int,int,char,int) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_12, u_char VAR_13, char VAR_14, u_char *VAR_15, char *VAR_16)
{
 struct alpm_softc *VAR_17 = (struct alpm_softc *)FUNC_9(VAR_12);
 u_char VAR_18, VAR_19, VAR_20;
 int VAR_21;

 if (*VAR_15 < 1 || *VAR_15 > 32)
  return (VAR_10);

 FUNC_1(VAR_17);
 FUNC_6(VAR_17);
 if (!FUNC_7(VAR_17)) {
  FUNC_4(VAR_17);
  return (VAR_9);
 }

 FUNC_3(VAR_17, VAR_2, VAR_13 | VAR_0);



 FUNC_3(VAR_17, VAR_1, VAR_7 | VAR_8);

 FUNC_3(VAR_17, VAR_4, VAR_14);
 FUNC_3(VAR_17, VAR_6, 0xff);

 if ((VAR_21 = FUNC_8(VAR_17)) != VAR_11)
   goto error;

 VAR_19 = FUNC_2(VAR_17, VAR_5);


 for (VAR_20 = 0; VAR_20 < VAR_19; VAR_20++) {
  VAR_18 = FUNC_2(VAR_17, VAR_3);
  if (VAR_20 < *VAR_15)
   VAR_16[VAR_20] = VAR_18;
  FUNC_5(2);
 }
 *VAR_15 = VAR_19;

error:
 FUNC_0(FUNC_10("alpm: READBLK to 0x%x, count=0x%x, cmd=0x%x, error=0x%x", VAR_13, *VAR_15, VAR_14, VAR_21));
 FUNC_4(VAR_17);

 return (VAR_21);
}
