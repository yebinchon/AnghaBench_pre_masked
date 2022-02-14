
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
 int FUNC_5 (struct alpm_softc*) ;
 int FUNC_6 (struct alpm_softc*) ;
 int FUNC_7 (struct alpm_softc*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (char*,int,char,short,int) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_10, u_char VAR_11, char VAR_12, short *VAR_13)
{
 struct alpm_softc *VAR_14 = (struct alpm_softc *)FUNC_8(VAR_10);
 int VAR_15;
 u_char VAR_16, VAR_17;

 FUNC_1(VAR_14);
 FUNC_5(VAR_14);
 if (!FUNC_6(VAR_14)) {
  FUNC_4(VAR_14);
  return (VAR_8);
 }

 FUNC_3(VAR_14, VAR_2, VAR_11 | VAR_0);
 FUNC_3(VAR_14, VAR_1, VAR_7);
 FUNC_3(VAR_14, VAR_3, VAR_12);
 FUNC_3(VAR_14, VAR_6, 0xff);

 if ((VAR_15 = FUNC_7(VAR_14)) == VAR_9) {
  VAR_17 = FUNC_2(VAR_14, VAR_4);
  VAR_16 = FUNC_2(VAR_14, VAR_5);

  *VAR_13 = ((VAR_16 & 0xff) << 8) | (VAR_17 & 0xff);
 }

 FUNC_0(FUNC_9("alpm: READW from 0x%x, cmd=0x%x, word=0x%x, error=0x%x\n", VAR_11, VAR_12, *VAR_13, VAR_15));
 FUNC_4(VAR_14);

 return (VAR_15);
}
