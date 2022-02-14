
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct exca_softc {TYPE_1__* mem; } ;
struct TYPE_2__ {scalar_t__ memt; scalar_t__ addr; scalar_t__ size; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct resource*) ;
 scalar_t__ FUNC_1 (struct resource*) ;
 scalar_t__ FUNC_2 (struct resource*) ;

__attribute__((used)) static int
FUNC_3(struct exca_softc *VAR_1, struct resource *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1->mem[VAR_3].memt == FUNC_0(VAR_2) &&
      VAR_1->mem[VAR_3].addr == FUNC_2(VAR_2) &&
      VAR_1->mem[VAR_3].size == FUNC_1(VAR_2))
   return (VAR_3);
 }
 return (-1);
}
