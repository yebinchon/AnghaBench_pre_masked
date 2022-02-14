
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int * ctx_bitmap; int * context_sareas; } ;


 int FUNC_0 (struct drm_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (int *,int ) ;

void FUNC_3(struct drm_device * VAR_2)
{
 FUNC_0(VAR_2);
 if (VAR_2->context_sareas != ((void*)0))
  FUNC_2(VAR_2->context_sareas, VAR_1);
 FUNC_2(VAR_2->ctx_bitmap, VAR_0);
 FUNC_1(VAR_2);
}
