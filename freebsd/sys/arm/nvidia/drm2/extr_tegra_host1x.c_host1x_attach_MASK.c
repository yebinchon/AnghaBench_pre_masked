
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tegra_drm {int dummy; } ;
struct host1x_softc {int * mem_res; TYPE_2__* tegra_drm; int clients; void* dev; } ;
typedef void* device_t ;
struct TYPE_4__ {void* dev; TYPE_2__** dev_private; } ;
struct TYPE_5__ {TYPE_1__ drm_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct host1x_softc*) ;
 int FUNC_1 (struct host1x_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (void*,int ,int*,int ) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*,int ,int ,int *) ;
 struct host1x_softc* FUNC_6 (void*) ;
 int FUNC_7 (void*,char*) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_9 (int,int ,int) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_6)
{
 int VAR_7, VAR_8;
 struct host1x_softc *VAR_9;

 VAR_9 = FUNC_6(VAR_6);
 VAR_9->tegra_drm = FUNC_9(sizeof(struct tegra_drm), VAR_0,
     VAR_2 | VAR_3);


 VAR_9->dev = VAR_6;
 VAR_9->tegra_drm->drm_dev.dev_private = &VAR_9->tegra_drm;
 VAR_9->tegra_drm->drm_dev.dev = VAR_6;

 FUNC_2(&VAR_9->clients);

 FUNC_1(VAR_9);


 VAR_8 = 0;
 VAR_9->mem_res = FUNC_3(VAR_6, VAR_5, &VAR_8,
     VAR_4);
 if (VAR_9->mem_res == ((void*)0)) {
  FUNC_7(VAR_6, "Cannot map registers.\n");
  VAR_7 = VAR_1;
  goto fail;
 }

 return (FUNC_4(VAR_6));

fail:
 if (VAR_9->tegra_drm != ((void*)0))
  FUNC_8(VAR_9->tegra_drm, VAR_0);
 if (VAR_9->mem_res != ((void*)0))
  FUNC_5(VAR_6, VAR_5, 0, VAR_9->mem_res);
 FUNC_0(VAR_9);
 return (VAR_7);
}
