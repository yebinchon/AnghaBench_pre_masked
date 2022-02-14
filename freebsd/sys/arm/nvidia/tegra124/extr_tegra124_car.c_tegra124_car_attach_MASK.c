
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra124_car_softc {scalar_t__ mem_res; int type; int mtx; int dev; } ;
typedef int device_t ;
struct TYPE_2__ {int ocd_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int*,int ) ;
 int FUNC_1 (int ,int ,int ,scalar_t__) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 struct tegra124_car_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,int *,int ) ;
 TYPE_1__* FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_5)
{
 struct tegra124_car_softc *VAR_6 = FUNC_3(VAR_5);
 int VAR_7, VAR_8;

 VAR_6->dev = VAR_5;

 FUNC_6(&VAR_6->mtx, FUNC_2(VAR_5), ((void*)0), VAR_1);
 VAR_6->type = FUNC_7(VAR_5, VAR_4)->ocd_data;


 VAR_7 = 0;
 VAR_6->mem_res = FUNC_0(VAR_5, VAR_3, &VAR_7,
     VAR_2);
 if (!VAR_6->mem_res) {
  FUNC_4(VAR_5, "cannot allocate memory resource\n");
  VAR_8 = VAR_0;
  goto fail;
 }

 FUNC_8(VAR_5);
 FUNC_5(VAR_5);
 return (0);

fail:
 if (VAR_6->mem_res)
  FUNC_1(VAR_5, VAR_3, 0, VAR_6->mem_res);

 return (VAR_8);
}
