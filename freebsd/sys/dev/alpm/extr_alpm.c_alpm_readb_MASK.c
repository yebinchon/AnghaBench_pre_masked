
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct alpm_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct alpm_softc*) ;
 char FUNC_2 (struct alpm_softc*,int ) ;
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
 int FUNC_5 (struct alpm_softc*) ;
 int FUNC_6 (struct alpm_softc*) ;
 int FUNC_7 (struct alpm_softc*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (char*,int,char,char,int) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_9, u_char VAR_10, char VAR_11, char *VAR_12)
{
 struct alpm_softc *VAR_13 = (struct alpm_softc *)FUNC_8(VAR_9);
 int VAR_14;

 FUNC_1(VAR_13);
 FUNC_5(VAR_13);
 if (!FUNC_6(VAR_13)) {
  FUNC_4(VAR_13);
  return (VAR_7);
 }

 FUNC_3(VAR_13, VAR_2, VAR_10 | VAR_0);
 FUNC_3(VAR_13, VAR_1, VAR_6);
 FUNC_3(VAR_13, VAR_3, VAR_11);
 FUNC_3(VAR_13, VAR_5, 0xff);

 if ((VAR_14 = FUNC_7(VAR_13)) == VAR_8)
  *VAR_12 = FUNC_2(VAR_13, VAR_4);

 FUNC_0(FUNC_9("alpm: READB from 0x%x, cmd=0x%x, byte=0x%x, error=0x%x\n", VAR_10, VAR_11, *VAR_12, VAR_14));
 FUNC_4(VAR_13);

 return (VAR_14);
}
