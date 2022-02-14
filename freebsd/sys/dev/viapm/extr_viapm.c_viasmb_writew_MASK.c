
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
 short VAR_4 ;
 short VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct viapm_softc*) ;
 int FUNC_2 (int ,short) ;
 int FUNC_3 (struct viapm_softc*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*,int,char,short,int) ;
 scalar_t__ FUNC_6 (struct viapm_softc*) ;
 int FUNC_7 (struct viapm_softc*) ;
 int FUNC_8 (struct viapm_softc*) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_9, u_char VAR_10, char VAR_11, short VAR_12)
{
 struct viapm_softc *VAR_13 = (struct viapm_softc *)FUNC_4(VAR_9);
 int VAR_14;

 FUNC_1(VAR_13);
 FUNC_7(VAR_13);
 if (FUNC_6(VAR_13)) {
  FUNC_3(VAR_13);
  return (VAR_8);
 }

 FUNC_2(VAR_1, VAR_10 & ~ VAR_0);
 FUNC_2(VAR_2, VAR_11);
 FUNC_2(VAR_6, VAR_12 & 0x00ff);
 FUNC_2(VAR_7, (VAR_12 & 0xff00) >> 8);

 FUNC_2(VAR_3, VAR_4 | VAR_5);

 VAR_14 = FUNC_8(VAR_13);

 FUNC_0(FUNC_5("viapm: WRITEW to 0x%x, cmd=0x%x, word=0x%x, error=0x%x\n", VAR_10, VAR_11, VAR_12, VAR_14));
 FUNC_3(VAR_13);

 return (VAR_14);
}
