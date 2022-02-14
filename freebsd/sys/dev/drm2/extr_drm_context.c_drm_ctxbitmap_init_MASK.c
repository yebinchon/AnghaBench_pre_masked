
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int max_context; int * context_sareas; int * ctx_bitmap; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct drm_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct drm_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct drm_device*) ;
 int * FUNC_4 (int ,int ,int) ;

int FUNC_5(struct drm_device * VAR_6)
{
 int VAR_7;
    int VAR_8;

 FUNC_1(VAR_6);
 VAR_6->ctx_bitmap = FUNC_4(VAR_5, VAR_0,
     VAR_3 | VAR_4);
 if (VAR_6->ctx_bitmap == ((void*)0)) {
  FUNC_2(VAR_6);
  return VAR_2;
 }
 VAR_6->context_sareas = ((void*)0);
 VAR_6->max_context = -1;
 FUNC_2(VAR_6);

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  VAR_8 = FUNC_3(VAR_6);
  FUNC_0("drm_ctxbitmap_init : %d\n", VAR_8);
 }

 return 0;
}
