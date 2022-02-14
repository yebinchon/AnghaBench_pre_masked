
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
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 char FUNC_1 (int ) ;
 int FUNC_2 (struct viapm_softc*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct viapm_softc*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (char*,int,char,int) ;
 scalar_t__ FUNC_7 (struct viapm_softc*) ;
 int FUNC_8 (struct viapm_softc*) ;
 int FUNC_9 (struct viapm_softc*) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_8, u_char VAR_9, char *VAR_10)
{
 struct viapm_softc *VAR_11 = (struct viapm_softc *)FUNC_5(VAR_8);
 int VAR_12;

 FUNC_2(VAR_11);
 FUNC_8(VAR_11);
 if (FUNC_7(VAR_11)) {
  FUNC_4(VAR_11);
  return (VAR_6);
 }

 FUNC_3(VAR_1, VAR_9 | VAR_0);

 FUNC_3(VAR_2, VAR_4 | VAR_3);

 if ((VAR_12 = FUNC_9(VAR_11)) == VAR_7)
  *VAR_10 = FUNC_1(VAR_5);

 FUNC_0(FUNC_6("viapm: RECVB from 0x%x, byte=0x%x, error=0x%x\n", VAR_9, *VAR_10, VAR_12));
 FUNC_4(VAR_11);

 return (VAR_12);
}
