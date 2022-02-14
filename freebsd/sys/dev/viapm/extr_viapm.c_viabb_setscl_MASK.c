
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
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct viapm_softc*) ;
 struct viapm_softc* FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_2, int VAR_3)
{
 struct viapm_softc *VAR_4 = FUNC_4(VAR_2);
 u_char VAR_5;

 FUNC_1(VAR_4);
 VAR_5 = FUNC_0(VAR_0);

 if (VAR_3)
  VAR_5 |= VAR_1;
 else
  VAR_5 &= ~VAR_1;

 FUNC_2(VAR_0, VAR_5);
 FUNC_3(VAR_4);

 return;
}
