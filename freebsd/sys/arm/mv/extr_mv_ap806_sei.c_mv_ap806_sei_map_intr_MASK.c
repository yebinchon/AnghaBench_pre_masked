
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct mv_ap806_sei_softc {TYPE_1__* isrcs; } ;
struct intr_map_data {int dummy; } ;
struct intr_irqsrc {int dummy; } ;
typedef int device_t ;
struct TYPE_2__ {struct intr_irqsrc isrc; } ;


 struct mv_ap806_sei_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,struct intr_map_data*,size_t*) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0, struct intr_map_data *VAR_1,
    struct intr_irqsrc **VAR_2)
{
 struct mv_ap806_sei_softc *VAR_3;
 u_int VAR_4;
 int VAR_5;

 VAR_3 = FUNC_0(VAR_0);
 VAR_5 = FUNC_1(VAR_0, VAR_1, &VAR_4);
 if (VAR_5 == 0)
  *VAR_2 = &VAR_3->isrcs[VAR_4].isrc;

 return (VAR_5);
}
