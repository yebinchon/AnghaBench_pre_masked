
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int ** context_sareas; int * ctx_bitmap; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct drm_device*) ;
 int VAR_0 ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (int,int *) ;

void FUNC_4(struct drm_device * VAR_1, int VAR_2)
{
 if (VAR_2 < 0 || VAR_2 >= VAR_0 ||
     VAR_1->ctx_bitmap == ((void*)0)) {
  FUNC_0("Attempt to free invalid context handle: %d\n",
     VAR_2);
  return;
 }

 FUNC_1(VAR_1);
 FUNC_3(VAR_2, VAR_1->ctx_bitmap);
 VAR_1->context_sareas[VAR_2] = ((void*)0);
 FUNC_2(VAR_1);
}
