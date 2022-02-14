
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_bo {int gem_obj; int cdev_pager; } ;
struct drm_device {TYPE_1__* driver; } ;
struct TYPE_2__ {int gem_pager_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int ,size_t,int ,int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct drm_device*,int *,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct tegra_bo*,int ) ;
 struct tegra_bo* FUNC_5 (int,int ,int) ;
 size_t FUNC_6 (size_t) ;
 int FUNC_7 (struct drm_device*,struct tegra_bo*) ;
 int FUNC_8 (int *) ;

int
FUNC_9(struct drm_device *VAR_5, size_t VAR_6, struct tegra_bo **VAR_7)
{
 struct tegra_bo *VAR_8;
 int VAR_9;

 if (VAR_6 <= 0)
  return (-VAR_1);

 VAR_8 = FUNC_5(sizeof(*VAR_8), VAR_0, VAR_2 | VAR_3);

 VAR_6 = FUNC_6(VAR_6);
 VAR_9 = FUNC_2(VAR_5, &VAR_8->gem_obj, VAR_6);
 if (VAR_9 != 0) {
  FUNC_4(VAR_8, VAR_0);
  return (VAR_9);
 }
 VAR_9 = FUNC_1(&VAR_8->gem_obj);
 if (VAR_9 != 0) {
  FUNC_3(&VAR_8->gem_obj);
  FUNC_4(VAR_8, VAR_0);
  return (VAR_9);
 }

 VAR_8->cdev_pager = FUNC_0(&VAR_8->gem_obj, VAR_4,
     VAR_5->driver->gem_pager_ops, VAR_6, 0, 0, ((void*)0));
 VAR_9 = FUNC_7(VAR_5, VAR_8);
 if (VAR_9 != 0) {
  FUNC_8(&VAR_8->gem_obj);
  return (VAR_9);
 }

 *VAR_7 = VAR_8;
 return (0);
}
