
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct resource {int dummy; } ;
struct exca_softc {TYPE_1__* mem; int dev; } ;
struct TYPE_2__ {int realsize; int size; int cardaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct exca_softc*,int) ;
 int FUNC_2 (struct exca_softc*,struct resource*) ;
 int FUNC_3 (int,int) ;

int
FUNC_4(struct exca_softc *VAR_2, struct resource *VAR_3,
    uint32_t VAR_4, uint32_t *VAR_5)
{
 int VAR_6;
 uint32_t VAR_7;

 VAR_6 = FUNC_2(VAR_2, VAR_3);
 if (VAR_6 < 0) {
  FUNC_0(VAR_2->dev,
      "set_memory_offset: specified resource not active\n");
  return (VAR_0);
 }
 VAR_2->mem[VAR_6].cardaddr = FUNC_3(VAR_4, VAR_1);
 VAR_7 = VAR_4 % VAR_1;
 if (VAR_5)
  *VAR_5 = VAR_7;
 VAR_2->mem[VAR_6].realsize = VAR_2->mem[VAR_6].size + VAR_7 +
     VAR_1 - 1;
 VAR_2->mem[VAR_6].realsize = VAR_2->mem[VAR_6].realsize -
     (VAR_2->mem[VAR_6].realsize % VAR_1);
 FUNC_1(VAR_2, VAR_6);
 return (0);
}
