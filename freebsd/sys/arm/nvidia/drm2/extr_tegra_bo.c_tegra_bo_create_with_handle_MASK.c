
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tegra_bo {int gem_obj; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct drm_file*,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct drm_device*,size_t,struct tegra_bo**) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct drm_file *VAR_0, struct drm_device *VAR_1,
    size_t VAR_2, uint32_t *VAR_3, struct tegra_bo **VAR_4)
{
 int VAR_5;
 struct tegra_bo *VAR_6;

 VAR_5 = FUNC_3(VAR_1, VAR_2, &VAR_6);
 if (VAR_5 != 0)
  return (VAR_5);

 VAR_5 = FUNC_0(VAR_0, &VAR_6->gem_obj, VAR_3);
 if (VAR_5 != 0) {
  FUNC_4(&VAR_6->gem_obj);
  FUNC_1(&VAR_6->gem_obj);
  return (VAR_5);
 }

 FUNC_2(&VAR_6->gem_obj);

 *VAR_4 = VAR_6;
 return (0);
}
