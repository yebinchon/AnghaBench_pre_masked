
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct chipc_softc {int core; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct chipc_softc* FUNC_1 (int ) ;

__attribute__((used)) static uint32_t
FUNC_2(device_t VAR_1)
{
 struct chipc_softc *VAR_2 = FUNC_1(VAR_1);
 return (FUNC_0(VAR_2->core, VAR_0));
}
