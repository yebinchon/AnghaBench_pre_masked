
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_minor {struct drm_device* dev; } ;
struct drm_device {int open_count; int dev; int * counts; } ;
struct cdev {struct drm_minor* si_drv1; } ;
typedef int DRM_STRUCTPROC ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (struct cdev*,int,int,int *,struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct cdev *VAR_4, int VAR_5, int VAR_6, DRM_STRUCTPROC *VAR_7)
{
 struct drm_device *VAR_8 = ((void*)0);
 struct drm_minor *VAR_9;
 int VAR_10 = 0;
 int VAR_11 = 0;

 VAR_9 = VAR_4->si_drv1;
 if (!VAR_9)
  return VAR_0;

 if (!(VAR_8 = VAR_9->dev))
  return VAR_0;

 FUNC_6(&VAR_3);





 if (!VAR_8->open_count++)
  VAR_11 = 1;

 VAR_10 = FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
 if (VAR_10) {
  FUNC_7(&VAR_3);
  return (-VAR_10);
 }
 FUNC_0(&VAR_8->counts[VAR_2]);
 if (VAR_11) {
  VAR_10 = FUNC_3(VAR_8);
  if (VAR_10)
   goto err_undo;
 }
 FUNC_7(&VAR_3);
 return 0;

err_undo:
 FUNC_4(&VAR_1);
 FUNC_1(VAR_8->dev);
 FUNC_5(&VAR_1);
 VAR_8->open_count--;
 FUNC_7(&VAR_3);
 return -VAR_10;
}
