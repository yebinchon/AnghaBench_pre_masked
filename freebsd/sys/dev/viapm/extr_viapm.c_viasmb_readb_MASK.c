
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
 int FUNC_0 (int ) ;
 char FUNC_1 (int ) ;
 int FUNC_2 (struct viapm_softc*) ;
 int FUNC_3 (int ,char) ;
 int FUNC_4 (struct viapm_softc*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (char*,int,char,char,int) ;
 scalar_t__ FUNC_7 (struct viapm_softc*) ;
 int FUNC_8 (struct viapm_softc*) ;
 int FUNC_9 (struct viapm_softc*) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_9, u_char VAR_10, char VAR_11, char *VAR_12)
{
 struct viapm_softc *VAR_13 = (struct viapm_softc *)FUNC_5(VAR_9);
 int VAR_14;

 FUNC_2(VAR_13);
 FUNC_8(VAR_13);
 if (FUNC_7(VAR_13)) {
  FUNC_4(VAR_13);
  return (VAR_7);
 }

 FUNC_3(VAR_1, VAR_10 | VAR_0);
 FUNC_3(VAR_2, VAR_11);

 FUNC_3(VAR_3, VAR_5 | VAR_4);

 if ((VAR_14 = FUNC_9(VAR_13)) == VAR_8)
  *VAR_12 = FUNC_1(VAR_6);

 FUNC_0(FUNC_6("viapm: READB from 0x%x, cmd=0x%x, byte=0x%x, error=0x%x\n", VAR_10, VAR_11, *VAR_12, VAR_14));
 FUNC_4(VAR_13);

 return (VAR_14);
}
