
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_minor {int type; int index; TYPE_1__* device; int * buf_sigio; int master_list; struct drm_device* dev; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {struct drm_minor* si_drv1; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int) ;
 int VAR_3 ;


 int VAR_4 ;
 int FUNC_2 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct drm_device*,int) ;
 int FUNC_4 (struct drm_minor*,int ) ;
 int FUNC_5 (int,TYPE_1__**,int *,int ,int ,int ,int ,char const*,int) ;
 struct drm_minor* FUNC_6 (int,int ,int) ;

int FUNC_7(struct drm_device *VAR_10, struct drm_minor **VAR_11, int VAR_12)
{
 struct drm_minor *VAR_13;
 int VAR_14;
 int VAR_15;
 const char *VAR_16;

 FUNC_0("\n");

 VAR_15 = FUNC_3(VAR_10, VAR_12);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_13 = FUNC_6(sizeof(struct drm_minor), VAR_3,
     VAR_7 | VAR_8);
 if (!VAR_13) {
  VAR_14 = -VAR_4;
  goto err_idr;
 }

 VAR_13->type = VAR_12;
 VAR_13->dev = VAR_10;
 VAR_13->index = VAR_15;
 FUNC_2(&VAR_13->master_list);

 VAR_13->buf_sigio = ((void*)0);

 switch (VAR_12) {
 case 129:
  VAR_16 = "dri/controlD%d";
  break;
 case 128:
  VAR_16 = "dri/renderD%d";
  break;
 default:
  VAR_16 = "dri/card%d";
  break;
 }

 VAR_14 = FUNC_5(VAR_6 | VAR_5, &VAR_13->device,
     &VAR_9, 0, VAR_2, VAR_0,
     VAR_1, VAR_16, VAR_15);
 if (VAR_14) {
  FUNC_1("Failed to create cdev: %d\n", VAR_14);
  goto err_mem;
 }
 VAR_13->device->si_drv1 = VAR_13;
 *VAR_11 = VAR_13;

 FUNC_0("new minor assigned %d\n", VAR_15);
 return 0;


err_mem:
 FUNC_4(VAR_13, VAR_3);
err_idr:
 *VAR_11 = ((void*)0);
 return VAR_14;
}
