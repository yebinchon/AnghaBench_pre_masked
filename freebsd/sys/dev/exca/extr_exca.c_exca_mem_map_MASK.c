
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct exca_softc {int memalloc; int flags; TYPE_1__* mem; int dev; } ;
struct TYPE_2__ {int addr; int size; int realsize; int kind; scalar_t__ cardaddr; int memh; int memt; } ;


 int FUNC_0 (char*,int,int,int,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct exca_softc*,int) ;
 int FUNC_3 (struct resource*) ;
 int FUNC_4 (struct resource*) ;
 int FUNC_5 (struct resource*) ;
 int FUNC_6 (struct resource*) ;

int
FUNC_7(struct exca_softc *VAR_6, int VAR_7, struct resource *VAR_8)
{
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  if ((VAR_6->memalloc & (1 << VAR_9)) == 0) {
   VAR_6->memalloc |= (1 << VAR_9);
   break;
  }
 }
 if (VAR_9 >= VAR_5)
  return (VAR_1);
 if (VAR_6->flags & VAR_2) {

  if (FUNC_6(VAR_8) >> (VAR_3 + 8) != 0) {
   FUNC_1(VAR_6->dev,
       "Does not support mapping above 4GB.");
   return (VAR_0);
  }

 } else {
  if (FUNC_6(VAR_8) >> VAR_3 != 0) {
   FUNC_1(VAR_6->dev,
       "Does not support mapping above 16M.");
   return (VAR_0);
  }
 }

 VAR_6->mem[VAR_9].cardaddr = 0;
 VAR_6->mem[VAR_9].memt = FUNC_4(VAR_8);
 VAR_6->mem[VAR_9].memh = FUNC_3(VAR_8);
 VAR_6->mem[VAR_9].addr = FUNC_6(VAR_8);
 VAR_6->mem[VAR_9].size = FUNC_5(VAR_8) - VAR_6->mem[VAR_9].addr + 1;
 VAR_6->mem[VAR_9].realsize = VAR_6->mem[VAR_9].size + VAR_4 - 1;
 VAR_6->mem[VAR_9].realsize = VAR_6->mem[VAR_9].realsize -
     (VAR_6->mem[VAR_9].realsize % VAR_4);
 VAR_6->mem[VAR_9].kind = VAR_7;
 FUNC_0("exca_mem_map window %d bus %x+%x card addr %x\n",
     VAR_9, VAR_6->mem[VAR_9].addr, VAR_6->mem[VAR_9].size, VAR_6->mem[VAR_9].cardaddr);
 FUNC_2(VAR_6, VAR_9);

 return (0);
}
