
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct viapm_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct viapm_softc*) ;
 int VAR_1 ;
 int FUNC_2 (struct viapm_softc*) ;
 struct viapm_softc* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2)
{
 struct viapm_softc *VAR_3 = FUNC_3(VAR_2);
 u_char VAR_4;

 FUNC_1(VAR_3);
 VAR_4 = FUNC_0(VAR_0);
 FUNC_2(VAR_3);
 return ((VAR_4 & VAR_1) != 0);
}
