
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct mc146818_softc {int (* sc_mcwrite ) (int ,int ,int ) ;} ;
typedef int device_t ;


 int VAR_0 ;
 struct mc146818_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_1, u_int VAR_2)
{
 struct mc146818_softc *VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 (*VAR_3->sc_mcwrite)(VAR_1, VAR_0, VAR_2);
}
