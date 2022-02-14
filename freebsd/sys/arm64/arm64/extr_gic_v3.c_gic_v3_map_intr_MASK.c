
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct intr_map_data {int dummy; } ;
struct intr_irqsrc {int dummy; } ;
struct gic_v3_softc {int dummy; } ;
typedef int device_t ;


 struct intr_irqsrc* FUNC_0 (struct gic_v3_softc*,int ) ;
 struct gic_v3_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,struct intr_map_data*,int *,int *,int *) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0, struct intr_map_data *VAR_1,
    struct intr_irqsrc **VAR_2)
{
 struct gic_v3_softc *VAR_3;
 int VAR_4;
 u_int VAR_5;

 VAR_4 = FUNC_2(VAR_0, VAR_1, &VAR_5, ((void*)0), ((void*)0));
 if (VAR_4 == 0) {
  VAR_3 = FUNC_1(VAR_0);
  *VAR_2 = FUNC_0(VAR_3, VAR_5);
 }
 return (VAR_4);
}
