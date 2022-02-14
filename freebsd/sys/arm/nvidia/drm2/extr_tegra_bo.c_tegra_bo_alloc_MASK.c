
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_page_t ;
struct TYPE_2__ {size_t size; } ;
struct tegra_bo {int npages; int m; TYPE_1__ gem_obj; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int,int ,int) ;
 int FUNC_3 (int,int ,int ,int *) ;
 int FUNC_4 (struct tegra_bo*) ;

__attribute__((used)) static int
FUNC_5(struct drm_device *VAR_5, struct tegra_bo *VAR_6)
{
 size_t VAR_7;
 int VAR_8;

 VAR_7 = VAR_6->gem_obj.size;

 VAR_6->npages = FUNC_1(VAR_7);
 VAR_6->m = FUNC_2(sizeof(vm_page_t *) * VAR_6->npages, VAR_0,
     VAR_1 | VAR_2);

 VAR_8 = FUNC_3(VAR_6->npages, VAR_3,
     VAR_4, &(VAR_6->m));
 if (VAR_8 != 0) {
  FUNC_0("Cannot allocate memory for gem object.\n");
  return (VAR_8);
 }
 VAR_8 = FUNC_4(VAR_6);
 if (VAR_8 != 0) {
  FUNC_0("Cannot initialize gem object pager.\n");
  return (VAR_8);
 }
 return (0);
}
