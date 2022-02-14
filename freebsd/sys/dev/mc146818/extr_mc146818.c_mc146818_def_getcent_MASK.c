
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct mc146818_softc {int (* sc_mcread ) (int ,int ) ;} ;
typedef int device_t ;


 int VAR_0 ;
 struct mc146818_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static u_int
FUNC_2(device_t VAR_1)
{
 struct mc146818_softc *VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 return ((*VAR_2->sc_mcread)(VAR_1, VAR_0));
}
