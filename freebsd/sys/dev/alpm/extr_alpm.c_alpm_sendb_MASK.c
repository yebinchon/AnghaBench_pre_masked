
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct alpm_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct alpm_softc*) ;
 int FUNC_2 (struct alpm_softc*,int ,int) ;
 int FUNC_3 (struct alpm_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct alpm_softc*) ;
 int FUNC_5 (struct alpm_softc*) ;
 int FUNC_6 (struct alpm_softc*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (char*,int,char,int) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_7, u_char VAR_8, char VAR_9)
{
 struct alpm_softc *VAR_10 = (struct alpm_softc *)FUNC_7(VAR_7);
 int VAR_11;

 FUNC_1(VAR_10);
 FUNC_4(VAR_10);
 if (!FUNC_5(VAR_10)) {
  FUNC_3(VAR_10);
  return (VAR_6);
 }

 FUNC_2(VAR_10, VAR_2, VAR_8 & ~VAR_0);
 FUNC_2(VAR_10, VAR_1, VAR_4);
 FUNC_2(VAR_10, VAR_3, VAR_9);
 FUNC_2(VAR_10, VAR_5, 0xff);

 VAR_11 = FUNC_6(VAR_10);

 FUNC_0(FUNC_8("alpm: SENDB to 0x%x, byte=0x%x, error=0x%x\n", VAR_8, VAR_9, VAR_11));
 FUNC_3(VAR_10);

 return (VAR_11);
}
