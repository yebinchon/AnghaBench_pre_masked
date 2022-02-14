
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bcm_mips_softc {int dev; TYPE_1__* isrcs; } ;
struct TYPE_2__ {size_t ivec; int isrc; scalar_t__ refs; int * cpuirq; } ;


 uintptr_t FUNC_0 (struct bcm_mips_softc*) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,size_t,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,uintptr_t,char*,char const*,size_t) ;
 size_t FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_6(struct bcm_mips_softc *VAR_0)
{
 const char *VAR_1;
 uintptr_t VAR_2;
 int VAR_3;

 VAR_2 = FUNC_0(VAR_0);

 VAR_1 = FUNC_1(VAR_0->dev);
 for (size_t VAR_4 = 0; VAR_4 < FUNC_5(VAR_0->isrcs); VAR_4++) {
  VAR_0->isrcs[VAR_4].ivec = VAR_4;
  VAR_0->isrcs[VAR_4].cpuirq = ((void*)0);
  VAR_0->isrcs[VAR_4].refs = 0;

  VAR_3 = FUNC_4(&VAR_0->isrcs[VAR_4].isrc, VAR_0->dev,
      VAR_2, "%s,%u", VAR_1, VAR_4);
  if (VAR_3) {
   for (size_t VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
    FUNC_3(&VAR_0->isrcs[VAR_5].isrc);

   FUNC_2(VAR_0->dev, "error registering IRQ %zu: "
       "%d\n", VAR_4, VAR_3);
   return (VAR_3);
  }
 }

 return (0);
}
