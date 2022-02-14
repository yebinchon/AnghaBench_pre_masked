
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_names {int unr; int lock; } ;
struct drm_gem_name {int name; } ;


 int FUNC_0 (struct drm_gem_name*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct drm_gem_name*,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct drm_gem_names *VAR_3, struct drm_gem_name *VAR_4)
{

 FUNC_3(&VAR_3->lock, VAR_0);
 FUNC_0(VAR_4, VAR_2);
 FUNC_4(&VAR_3->lock);
 FUNC_2(VAR_3->unr, VAR_4->name);
 FUNC_1(VAR_4, VAR_1);
}
