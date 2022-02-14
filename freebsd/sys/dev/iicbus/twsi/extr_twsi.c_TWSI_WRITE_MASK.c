
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct twsi_softc {int * res; int dev; } ;
typedef int bus_size_t ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,char*,int ,int ) ;

__attribute__((used)) static __inline void
FUNC_2(struct twsi_softc *VAR_0, bus_size_t VAR_1, uint32_t VAR_2)
{

 FUNC_1(VAR_0->dev, "Writing %x to %lx\n", VAR_2, VAR_1);
 FUNC_0(VAR_0->res[0], VAR_1, VAR_2);
}
