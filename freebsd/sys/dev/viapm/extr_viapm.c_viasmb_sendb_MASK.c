
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
 int FUNC_0 (int ) ;
 int FUNC_1 (struct viapm_softc*) ;
 int FUNC_2 (int ,char) ;
 int FUNC_3 (struct viapm_softc*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*,int,char,int) ;
 scalar_t__ FUNC_6 (struct viapm_softc*) ;
 int FUNC_7 (struct viapm_softc*) ;
 int FUNC_8 (struct viapm_softc*) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_7, u_char VAR_8, char VAR_9)
{
 struct viapm_softc *VAR_10 = (struct viapm_softc *)FUNC_4(VAR_7);
 int VAR_11;

 FUNC_1(VAR_10);
 FUNC_7(VAR_10);
 if (FUNC_6(VAR_10)) {
  FUNC_3(VAR_10);
  return (VAR_6);
 }

 FUNC_2(VAR_1, VAR_8 & ~ VAR_0);
 FUNC_2(VAR_2, VAR_9);

 FUNC_2(VAR_3, VAR_5 | VAR_4);

 VAR_11 = FUNC_8(VAR_10);

 FUNC_0(FUNC_5("viapm: SENDB to 0x%x, byte=0x%x, error=0x%x\n", VAR_8, VAR_9, VAR_11));
 FUNC_3(VAR_10);

 return (VAR_11);
}
