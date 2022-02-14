
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhndb_softc {int parent_dev; } ;
typedef int device_t ;
typedef int bus_dma_tag_t ;


 int FUNC_0 (int ) ;
 struct bhndb_softc* FUNC_1 (int ) ;

__attribute__((used)) static bus_dma_tag_t
FUNC_2(device_t VAR_0, device_t VAR_1)
{
 struct bhndb_softc *VAR_2 = FUNC_1(VAR_0);
 return (FUNC_0(VAR_2->parent_dev));
}
