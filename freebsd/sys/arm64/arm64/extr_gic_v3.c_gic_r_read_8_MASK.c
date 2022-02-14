
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct resource {int dummy; } ;
struct TYPE_4__ {TYPE_1__** pcpu; } ;
struct gic_v3_softc {TYPE_2__ gic_redists; } ;
typedef int device_t ;
typedef int bus_size_t ;
struct TYPE_3__ {struct resource res; } ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (struct resource*,int ) ;
 int VAR_0 ;
 struct gic_v3_softc* FUNC_2 (int ) ;

uint64_t
FUNC_3(device_t VAR_1, bus_size_t VAR_2)
{
 struct gic_v3_softc *VAR_3;
 struct resource *VAR_4;

 VAR_3 = FUNC_2(VAR_1);
 VAR_4 = &VAR_3->gic_redists.pcpu[FUNC_0(VAR_0)]->res;
 return (FUNC_1(VAR_4, VAR_2));
}
