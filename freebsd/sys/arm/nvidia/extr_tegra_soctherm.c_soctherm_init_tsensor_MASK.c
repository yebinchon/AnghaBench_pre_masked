
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct tsensor {char* name; scalar_t__ sensor_base; scalar_t__ therm_b; scalar_t__ therm_a; TYPE_1__* cfg; } ;
struct soctherm_softc {int dummy; } ;
struct soctherm_shared_cal {int dummy; } ;
struct TYPE_2__ {int ten_count; int tiddq_en; scalar_t__ tsample; int tall; } ;


 int FUNC_0 (struct soctherm_softc*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_7 (struct soctherm_softc*,scalar_t__,int) ;
 int FUNC_8 (char*,char*,int,int,int,int,int,int) ;
 int FUNC_9 (struct tsensor*,struct soctherm_shared_cal*) ;

__attribute__((used)) static void
FUNC_10(struct soctherm_softc *VAR_9, struct tsensor *VAR_10,
    struct soctherm_shared_cal *VAR_11)
{
 uint32_t VAR_12;

 FUNC_9(VAR_10, VAR_11);

 VAR_12 = FUNC_0(VAR_9, VAR_10->sensor_base + VAR_0);
 VAR_12 |= VAR_2;
 VAR_12 |= VAR_1;
 FUNC_7(VAR_9, VAR_10->sensor_base + VAR_0, VAR_12);

 VAR_12 = FUNC_1(VAR_10->cfg->tall);
 VAR_12 |= VAR_2;
 FUNC_7(VAR_9, VAR_10->sensor_base + VAR_0, VAR_12);

 VAR_12 = FUNC_4(VAR_10->cfg->tsample - 1);
 VAR_12 |= FUNC_3(VAR_10->cfg->tiddq_en);
 VAR_12 |= FUNC_2(VAR_10->cfg->ten_count);
 VAR_12 |= VAR_4;
 FUNC_7(VAR_9, VAR_10->sensor_base + VAR_3, VAR_12);

 VAR_12 = FUNC_5((uint16_t)VAR_10->therm_a) |
      FUNC_6((uint16_t)VAR_10->therm_b);
 FUNC_7(VAR_9, VAR_10->sensor_base + VAR_5, VAR_12);

 VAR_12 = FUNC_0(VAR_9, VAR_10->sensor_base + VAR_0);
 VAR_12 &= ~VAR_2;
 FUNC_7(VAR_9, VAR_10->sensor_base + VAR_0, VAR_12);
}
