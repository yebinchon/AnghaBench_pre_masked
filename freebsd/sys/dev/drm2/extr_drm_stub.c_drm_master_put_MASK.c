
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_master {int refcount; } ;


 int FUNC_0 (struct drm_master*) ;
 scalar_t__ FUNC_1 (int *) ;

void FUNC_2(struct drm_master **VAR_0)
{
 if (FUNC_1(&(*VAR_0)->refcount))
  FUNC_0(*VAR_0);
 *VAR_0 = ((void*)0);
}
