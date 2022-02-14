
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct viapm_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct viapm_softc*) ;
 int FUNC_3 (int ,char) ;
 int FUNC_4 (struct viapm_softc*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (char*,int,char,short,int) ;
 scalar_t__ FUNC_7 (struct viapm_softc*) ;
 int FUNC_8 (struct viapm_softc*) ;
 int FUNC_9 (struct viapm_softc*) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_10, u_char VAR_11, char VAR_12, short *VAR_13)
{
 struct viapm_softc *VAR_14 = (struct viapm_softc *)FUNC_5(VAR_10);
 int VAR_15;
 u_char VAR_16, VAR_17;

 FUNC_2(VAR_14);
 FUNC_8(VAR_14);
 if (FUNC_7(VAR_14)) {
  FUNC_4(VAR_14);
  return (VAR_8);
 }

 FUNC_3(VAR_1, VAR_11 | VAR_0);
 FUNC_3(VAR_2, VAR_12);

 FUNC_3(VAR_3, VAR_4 | VAR_5);

 if ((VAR_15 = FUNC_9(VAR_14)) == VAR_9) {
  VAR_17 = FUNC_1(VAR_6);
  VAR_16 = FUNC_1(VAR_7);

  *VAR_13 = ((VAR_16 & 0xff) << 8) | (VAR_17 & 0xff);
 }

 FUNC_0(FUNC_6("viapm: READW from 0x%x, cmd=0x%x, word=0x%x, error=0x%x\n", VAR_11, VAR_12, *VAR_13, VAR_15));
 FUNC_4(VAR_14);

 return (VAR_15);
}
