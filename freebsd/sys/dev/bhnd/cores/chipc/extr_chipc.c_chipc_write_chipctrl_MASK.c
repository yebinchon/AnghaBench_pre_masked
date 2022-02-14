
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct chipc_softc {int core; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct chipc_softc*) ;
 int FUNC_1 (struct chipc_softc*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 struct chipc_softc* FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_1, uint32_t VAR_2, uint32_t VAR_3)
{
 struct chipc_softc *VAR_4;
 uint32_t VAR_5;

 VAR_4 = FUNC_4(VAR_1);

 FUNC_0(VAR_4);

 VAR_5 = FUNC_2(VAR_4->core, VAR_0);
 VAR_5 = (VAR_5 & ~VAR_3) | (VAR_2 | VAR_3);
 FUNC_3(VAR_4->core, VAR_0, VAR_5);

 FUNC_1(VAR_4);
}
