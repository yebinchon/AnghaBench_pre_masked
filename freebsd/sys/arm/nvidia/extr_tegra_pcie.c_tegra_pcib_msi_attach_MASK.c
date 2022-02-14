
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct tegra_pcib_softc {int dev; TYPE_1__* isrcs; } ;
struct TYPE_2__ {int irq; int isrc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ,char*,char const*,int) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 TYPE_1__* FUNC_4 (int,int ,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct tegra_pcib_softc *VAR_5)
{
 int VAR_6;
 uint32_t VAR_7;
 const char *VAR_8;

 VAR_5->isrcs = FUNC_4(sizeof(*VAR_5->isrcs) * VAR_4, VAR_1,
     VAR_2 | VAR_3);

 VAR_8 = FUNC_1(VAR_5->dev);
 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  VAR_5->isrcs[VAR_7].irq = VAR_7;
  VAR_6 = FUNC_2(&VAR_5->isrcs[VAR_7].isrc,
      VAR_5->dev, 0, "%s,%u", VAR_8, VAR_7);
  if (VAR_6 != 0)
   return (VAR_6);
 }
 if (FUNC_3(VAR_5->dev,
     FUNC_0(FUNC_5(VAR_5->dev))) != 0)
  return (VAR_0);

 return (0);
}
