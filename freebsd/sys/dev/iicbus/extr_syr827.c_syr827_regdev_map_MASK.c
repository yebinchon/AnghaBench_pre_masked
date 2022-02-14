
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct syr827_softc {TYPE_1__* reg; } ;
typedef scalar_t__ phandle_t ;
typedef int pcell_t ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ xref; } ;


 int VAR_0 ;
 struct syr827_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_1, phandle_t VAR_2, int VAR_3, pcell_t *VAR_4,
    intptr_t *VAR_5)
{
 struct syr827_softc *VAR_6;

 VAR_6 = FUNC_0(VAR_1);

 if (VAR_6->reg->xref != VAR_2)
  return (VAR_0);

 *VAR_5 = 0;

 return (0);
}
