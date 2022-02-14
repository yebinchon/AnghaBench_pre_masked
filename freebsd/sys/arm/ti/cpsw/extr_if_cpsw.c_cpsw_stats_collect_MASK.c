
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct cpsw_softc {int * shadow_stats; } ;
struct TYPE_2__ {scalar_t__ reg; } ;


 int FUNC_0 (struct cpsw_softc*,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct cpsw_softc*,scalar_t__) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (struct cpsw_softc*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct cpsw_softc *VAR_3)
{
 int VAR_4;
 uint32_t VAR_5;

 FUNC_0(VAR_3, ("Controller shadow statistics updated."));

 for (VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4) {
  VAR_5 = FUNC_1(VAR_3, VAR_0 +
      VAR_2[VAR_4].reg);
  VAR_3->shadow_stats[VAR_4] += VAR_5;
  FUNC_2(VAR_3, VAR_0 + VAR_2[VAR_4].reg,
      VAR_5);
 }
}
