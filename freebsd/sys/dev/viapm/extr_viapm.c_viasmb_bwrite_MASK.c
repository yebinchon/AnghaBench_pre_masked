
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct viapm_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct viapm_softc*) ;
 int FUNC_4 (int ,char) ;
 int FUNC_5 (struct viapm_softc*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (char*,int,int,char,int) ;
 scalar_t__ FUNC_8 (struct viapm_softc*) ;
 int FUNC_9 (struct viapm_softc*) ;
 int FUNC_10 (struct viapm_softc*) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_10, u_char VAR_11, char VAR_12, u_char VAR_13, char *VAR_14)
{
 struct viapm_softc *VAR_15 = (struct viapm_softc *)FUNC_6(VAR_10);
 u_char VAR_16;
 int VAR_17;

 if (VAR_13 < 1 || VAR_13 > 32)
  return (VAR_9);

 FUNC_3(VAR_15);
 FUNC_9(VAR_15);
 if (FUNC_8(VAR_15)) {
  FUNC_5(VAR_15);
  return (VAR_8);
 }

 FUNC_4(VAR_1, VAR_11 & ~VAR_0);
 FUNC_4(VAR_3, VAR_12);
 FUNC_4(VAR_7, VAR_13);
 VAR_16 = FUNC_2(VAR_4);


 for (VAR_16 = 0; VAR_16 < VAR_13; VAR_16++) {
  FUNC_4(VAR_2, VAR_14[VAR_16]);
  FUNC_0(2);
 }
 FUNC_4(VAR_3, VAR_12);
 FUNC_4(VAR_4, VAR_6 | VAR_5);

 VAR_17 = FUNC_10(VAR_15);

 FUNC_1(FUNC_7("viapm: WRITEBLK to 0x%x, count=0x%x, cmd=0x%x, error=0x%x", VAR_11, VAR_13, VAR_12, VAR_17));
 FUNC_5(VAR_15);

 return (VAR_17);

}
