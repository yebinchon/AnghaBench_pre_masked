
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct simplebus_softc {int nranges; TYPE_1__* ranges; } ;
struct resource {int dummy; } ;
typedef scalar_t__ rman_res_t ;
struct TYPE_2__ {scalar_t__ host; scalar_t__ size; int bus; } ;


 scalar_t__ FUNC_0 (struct resource*) ;
 scalar_t__ FUNC_1 (struct resource*) ;

__attribute__((used)) static int
FUNC_2(struct simplebus_softc *VAR_0, struct resource *VAR_1,
    u_int *VAR_2)
{
 rman_res_t VAR_3, VAR_4;
 int VAR_5;

 VAR_3 = FUNC_1(VAR_1);
 VAR_4 = FUNC_0(VAR_1);


 for (VAR_5 = 0; VAR_5 < VAR_0->nranges; VAR_5++) {
  if (VAR_3 >= VAR_0->ranges[VAR_5].host && VAR_4 <
      VAR_0->ranges[VAR_5].host + VAR_0->ranges[VAR_5].size) {
   *VAR_2 = (VAR_0->ranges[VAR_5].bus >> 32);
   return (0);
  }
 }
 return (1);
}
