
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct et_softc {TYPE_1__* ifp; } ;
typedef int device_t ;
struct TYPE_2__ {int if_drv_flags; } ;


 int FUNC_0 (struct et_softc*,int ) ;
 int FUNC_1 (struct et_softc*,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (struct et_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct et_softc*) ;
 int VAR_6 ;
 struct et_softc* FUNC_4 (int ) ;
 int FUNC_5 (struct et_softc*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_7)
{
 struct et_softc *VAR_8;
 uint32_t VAR_9;

 VAR_8 = FUNC_4(VAR_7);
 FUNC_2(VAR_8);
 if ((VAR_8->ifp->if_drv_flags & VAR_6) != 0)
  FUNC_5(VAR_8);

 VAR_9 = FUNC_0(VAR_8, VAR_1);
 VAR_9 &= ~(VAR_0 | VAR_4 | VAR_5 |
     VAR_3);
 VAR_9 |= VAR_2;
 FUNC_1(VAR_8, VAR_1, VAR_9);
 FUNC_3(VAR_8);
 return (0);
}
