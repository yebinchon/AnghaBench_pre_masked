
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list {int dummy; } ;
struct ndis_softc {int ndis_dev; } ;
typedef int device_t ;


 struct resource_list* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 struct ndis_softc* FUNC_2 (int ) ;

__attribute__((used)) static struct resource_list *
FUNC_3(device_t VAR_0, device_t VAR_1)
{
 struct ndis_softc *VAR_2;

 VAR_2 = FUNC_2(VAR_0);
 return (FUNC_0(FUNC_1(VAR_2->ndis_dev), VAR_0));
}
