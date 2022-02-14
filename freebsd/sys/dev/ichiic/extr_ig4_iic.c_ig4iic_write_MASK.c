
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_7__ {int txfifo_depth; } ;
struct TYPE_8__ {TYPE_1__ cfg; } ;
typedef TYPE_2__ ig4iic_softc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;

__attribute__((used)) static int
FUNC_4(ig4iic_softc_t *VAR_8, uint8_t *VAR_9, uint16_t VAR_10,
    bool VAR_11, bool VAR_12)
{
 uint32_t VAR_13;
 int VAR_14 = 0;
 int VAR_15, VAR_16;
 int VAR_17;
 bool VAR_18 = 0;

 if (VAR_10 == 0)
  return (0);

 while (VAR_14 < VAR_10) {
  VAR_15 = VAR_8->cfg.txfifo_depth -
      (FUNC_1(VAR_8, VAR_6) & VAR_2);
  VAR_16 = FUNC_0(VAR_14 + VAR_15, (int)VAR_10);

  if (!VAR_18 && VAR_16 != VAR_10) {
   VAR_18 = 1;
   FUNC_2(VAR_8, VAR_7, VAR_3);
  }
  while(VAR_14 < VAR_16) {
   VAR_13 = VAR_9[VAR_14];
   if (VAR_11 && VAR_14 == 0)
    VAR_13 |= VAR_0;
   if (VAR_12 && VAR_14 == VAR_10 - 1)
    VAR_13 |= VAR_1;
   FUNC_2(VAR_8, VAR_5, VAR_13);
   VAR_14++;
  }
  if (VAR_14 < VAR_10) {
   VAR_17 = FUNC_3(VAR_8, VAR_4);
   if (VAR_17)
    break;
  }
 }
 if (VAR_18)
  FUNC_2(VAR_8, VAR_7, 0);

 return (VAR_17);
}
