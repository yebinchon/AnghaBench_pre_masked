
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct arswitch_softc {int numphys; int sc_dev; } ;
struct TYPE_2__ {int shift; int reg; } ;


 int FUNC_0 (struct arswitch_softc*) ;
 int FUNC_1 (struct arswitch_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__** VAR_2 ;
 int FUNC_2 (int ,int ,int,int) ;
 int* VAR_3 ;

__attribute__((used)) static int
FUNC_3(struct arswitch_softc *VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8;
 int VAR_9;

 if (VAR_5 < 0 || VAR_5 > VAR_4->numphys)
  return VAR_0;

 if (VAR_7 < 0 || VAR_7 > VAR_1)
  return (VAR_0);

 FUNC_0(VAR_4);

 VAR_8 = VAR_2[VAR_5][VAR_6].shift;
 VAR_9 = (FUNC_2(VAR_4->sc_dev,
     VAR_2[VAR_5][VAR_6].reg,
     0x03 << VAR_8, VAR_3[VAR_7] << VAR_8));
 FUNC_1(VAR_4);

 return (VAR_9);
}
