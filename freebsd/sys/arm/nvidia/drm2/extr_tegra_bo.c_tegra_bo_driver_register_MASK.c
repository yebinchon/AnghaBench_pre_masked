
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_driver {int dumb_destroy; int dumb_map_offset; int dumb_create; int * gem_pager_ops; int gem_free_object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_0(struct drm_driver *VAR_5)
{
 VAR_5->gem_free_object = VAR_3;
 VAR_5->gem_pager_ops = &VAR_4;
 VAR_5->dumb_create = VAR_0;
 VAR_5->dumb_map_offset = VAR_2;
 VAR_5->dumb_destroy = VAR_1;
}
