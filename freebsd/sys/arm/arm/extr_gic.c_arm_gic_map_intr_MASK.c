
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct intr_map_data {int dummy; } ;
struct intr_irqsrc {int dummy; } ;
struct arm_gic_softc {int dummy; } ;
typedef int device_t ;


 struct intr_irqsrc* FUNC_0 (struct arm_gic_softc*,int ) ;
 struct arm_gic_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,struct intr_map_data*,int *,int *,int *) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0, struct intr_map_data *VAR_1,
    struct intr_irqsrc **VAR_2)
{
 int VAR_3;
 u_int VAR_4;
 struct arm_gic_softc *VAR_5;

 VAR_3 = FUNC_2(VAR_0, VAR_1, &VAR_4, ((void*)0), ((void*)0));
 if (VAR_3 == 0) {
  VAR_5 = FUNC_1(VAR_0);
  *VAR_2 = FUNC_0(VAR_5, VAR_4);
 }
 return (VAR_3);
}
