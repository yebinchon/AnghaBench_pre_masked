
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct tegra_gpio_softc {int gpio_npins; int dev; TYPE_1__* isrcs; } ;
struct TYPE_2__ {size_t irq; int isrc; scalar_t__ cfgreg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ,char*,char const*,size_t) ;
 int * FUNC_3 (int ,int ) ;
 TYPE_1__* FUNC_4 (int,int ,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct tegra_gpio_softc *VAR_4)
{
 int VAR_5;
 uint32_t VAR_6;
 const char *VAR_7;

 VAR_4->isrcs = FUNC_4(sizeof(*VAR_4->isrcs) * VAR_4->gpio_npins, VAR_1,
     VAR_2 | VAR_3);

 VAR_7 = FUNC_1(VAR_4->dev);
 for (VAR_6 = 0; VAR_6 < VAR_4->gpio_npins; VAR_6++) {
  VAR_4->isrcs[VAR_6].irq = VAR_6;
  VAR_4->isrcs[VAR_6].cfgreg = 0;
  VAR_5 = FUNC_2(&VAR_4->isrcs[VAR_6].isrc,
      VAR_4->dev, 0, "%s,%u", VAR_7, VAR_6);
  if (VAR_5 != 0)
   return (VAR_5);
 }
 if (FUNC_3(VAR_4->dev,
     FUNC_0(FUNC_5(VAR_4->dev))) == ((void*)0))
  return (VAR_0);

 return (0);
}
