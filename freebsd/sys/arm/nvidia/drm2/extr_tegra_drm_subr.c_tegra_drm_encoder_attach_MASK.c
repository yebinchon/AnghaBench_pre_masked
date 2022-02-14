
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int polled; } ;
struct tegra_drm_encoder {TYPE_1__ connector; int * gpio_hpd; int * ddc; int * edid; int dev; } ;
struct edid {int dummy; } ;
typedef scalar_t__ phandle_t ;
typedef int ddc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,char*,scalar_t__*,int) ;
 int FUNC_2 (scalar_t__,char*,void**) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,scalar_t__,char*,int **) ;

int
FUNC_6(struct tegra_drm_encoder *VAR_4, phandle_t VAR_5)
{
 int VAR_6;
 phandle_t VAR_7;



 VAR_6 = FUNC_2(VAR_5, "nvidia,edid",
     (void **)&VAR_4->edid);


 if ((VAR_6 >= 0) && (VAR_6 != sizeof(struct edid))) {
  FUNC_3(VAR_4->dev,
      "Malformed \"nvidia,edid\" property\n");
  if (VAR_4->edid != ((void*)0))
   FUNC_4(VAR_4->edid, VAR_3);
  return (VAR_2);
 }

 FUNC_5(VAR_4->dev, VAR_5, "nvidia,hpd-gpio",
     &VAR_4->gpio_hpd);
 VAR_7 = 0;
 FUNC_1(VAR_5, "nvidia,ddc-i2c-bus", &VAR_7, sizeof(VAR_7));
 if (VAR_7 > 0)
  VAR_4->ddc = FUNC_0(VAR_7);
 if ((VAR_4->edid == ((void*)0)) && (VAR_4->ddc == ((void*)0)))
  return (VAR_2);

 if (VAR_4->gpio_hpd != ((void*)0)) {
  VAR_4->connector.polled =

      VAR_1 |
      VAR_0;
 }

 return (0);
}
