
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_2__* bus_dmamap_t ;
struct TYPE_4__ {TYPE_1__* dmat; } ;
struct TYPE_3__ {int map_count; } ;



__attribute__((used)) static void
FUNC_0(void *VAR_0, int VAR_1, void *VAR_2)
{
 bus_dmamap_t VAR_3;

 VAR_3 = (bus_dmamap_t)VAR_0;

 VAR_3->dmat->map_count--;
}
