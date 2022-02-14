
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
 int FUNC_5 (struct alpm_softc*) ;
 int FUNC_6 (struct alpm_softc*) ;
 int FUNC_7 (struct alpm_softc*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (char*,int,char,int) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_8, u_char VAR_9, char *VAR_10)
{
 struct alpm_softc *VAR_11 = (struct alpm_softc *)FUNC_8(VAR_8);
 int VAR_12;

 FUNC_1(VAR_11);
 FUNC_5(VAR_11);
 if (!FUNC_6(VAR_11)) {
  FUNC_4(VAR_11);
  return (VAR_6);
 }

 FUNC_3(VAR_11, VAR_2, VAR_9 | VAR_0);
 FUNC_3(VAR_11, VAR_1, VAR_4);
 FUNC_3(VAR_11, VAR_5, 0xff);

 if ((VAR_12 = FUNC_7(VAR_11)) == VAR_7)
  *VAR_10 = FUNC_2(VAR_11, VAR_3);

 FUNC_0(FUNC_9("alpm: RECVB from 0x%x, byte=0x%x, error=0x%x\n", VAR_9, *VAR_10, VAR_12));
 FUNC_4(VAR_11);

 return (VAR_12);
}
