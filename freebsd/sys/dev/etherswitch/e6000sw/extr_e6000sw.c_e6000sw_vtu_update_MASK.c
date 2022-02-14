
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {int num_ports; int dev; } ;
typedef TYPE_1__ e6000sw_softc_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (TYPE_1__*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (TYPE_1__*,int ,int ,int) ;

__attribute__((used)) static int
FUNC_6(e6000sw_softc_t *VAR_16, int VAR_17, int VAR_18, int VAR_19,
    int VAR_20, int VAR_21)
{
 int VAR_22, VAR_23;
 uint32_t VAR_24[2];

 if (FUNC_0(VAR_16, VAR_8, VAR_3)) {
  FUNC_4(VAR_16->dev, "VTU unit is busy, cannot access\n");
  return (VAR_0);
 }

 *VAR_24 = (VAR_18 & VAR_14);
 if (VAR_17 == 0)
  *VAR_24 |= VAR_15;
 FUNC_5(VAR_16, VAR_2, VAR_13, *VAR_24);

 if (VAR_17 == 0) {
  VAR_24[0] = 0;
  VAR_24[1] = 0;
  for (VAR_22 = 0; VAR_22 < VAR_16->num_ports; VAR_22++) {
   if ((VAR_21 & (1 << VAR_22)) != 0)
    VAR_24[VAR_22 / FUNC_3(VAR_16)] |=
        VAR_11 << FUNC_2(VAR_16, VAR_22);
   else if ((VAR_20 & (1 << VAR_22)) != 0)
    VAR_24[VAR_22 / FUNC_3(VAR_16)] |=
        VAR_10 << FUNC_2(VAR_16, VAR_22);
   else
    VAR_24[VAR_22 / FUNC_3(VAR_16)] |=
        VAR_9 << FUNC_2(VAR_16, VAR_22);
  }
  FUNC_5(VAR_16, VAR_2, VAR_4, VAR_24[0]);
  FUNC_5(VAR_16, VAR_2, VAR_5, VAR_24[1]);
  FUNC_5(VAR_16, VAR_2, VAR_6,
      VAR_19 & FUNC_1(VAR_16));
  VAR_23 = VAR_7;
 } else
  VAR_23 = VAR_12;

 FUNC_5(VAR_16, VAR_2, VAR_8, VAR_23 | VAR_3);
 if (FUNC_0(VAR_16, VAR_8, VAR_3)) {
  FUNC_4(VAR_16->dev, "Timeout while flushing VTU\n");
  return (VAR_1);
 }

 return (0);
}
