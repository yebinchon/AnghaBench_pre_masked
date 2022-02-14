
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct vmbus_softc {int vmbus_mmio_res; } ;
struct resource {int dummy; } ;
typedef int rman_res_t ;
typedef int device_t ;


 struct resource* FUNC_0 (int ,int ,int,int*,int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 struct vmbus_softc* FUNC_2 (int ) ;
 struct resource* FUNC_3 (int *,int ,int,int*,int ,int ,int ,int ) ;

__attribute__((used)) static struct resource *
FUNC_4(device_t VAR_1, device_t VAR_2, int VAR_3, int *VAR_4,
    rman_res_t VAR_5, rman_res_t VAR_6, rman_res_t VAR_7, u_int VAR_8)
{
 device_t VAR_9 = FUNC_1(VAR_1);
 struct resource *VAR_10;
 {
  VAR_10 = FUNC_0(VAR_9, VAR_2, VAR_3, VAR_4, VAR_5,
      VAR_6, VAR_7, VAR_8);
 }

 return (VAR_10);
}
