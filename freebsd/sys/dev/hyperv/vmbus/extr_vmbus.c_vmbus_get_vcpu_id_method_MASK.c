
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vmbus_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct vmbus_softc const*,int ,int) ;
 struct vmbus_softc* FUNC_1 (int ) ;
 int VAR_0 ;

__attribute__((used)) static uint32_t
FUNC_2(device_t VAR_1, device_t VAR_2, int VAR_3)
{
 const struct vmbus_softc *VAR_4 = FUNC_1(VAR_1);

 return (FUNC_0(VAR_4, VAR_0, VAR_3));
}
