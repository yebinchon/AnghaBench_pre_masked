
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct resource {int dummy; } ;
typedef int rman_res_t ;
typedef int device_t ;
struct TYPE_2__ {struct resource* irq; } ;
typedef TYPE_1__ atkbdc_softc_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct resource* FUNC_0 (int ,int ,int,int*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;

struct resource *
FUNC_2(device_t VAR_2, device_t VAR_3, int VAR_4, int *VAR_5,
    rman_res_t VAR_6, rman_res_t VAR_7, rman_res_t VAR_8, u_int VAR_9)
{
 atkbdc_softc_t *VAR_10;

 VAR_10 = *(atkbdc_softc_t **)FUNC_1(VAR_2);
 if (VAR_4 == VAR_1 && *VAR_5 == VAR_0 && VAR_10->irq != ((void*)0))
  return (VAR_10->irq);
 return (FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
     VAR_7, VAR_8, VAR_9));
}
