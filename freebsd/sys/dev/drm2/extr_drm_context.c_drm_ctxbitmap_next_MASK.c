
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_local_map {int dummy; } ;
struct drm_device {int max_context; struct drm_local_map** context_sareas; int * ctx_bitmap; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct drm_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct drm_device*) ;
 int VAR_2 ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int *,int) ;
 struct drm_local_map** FUNC_5 (struct drm_local_map**,int,int ,int ) ;
 int FUNC_6 (int,int *) ;

__attribute__((used)) static int FUNC_7(struct drm_device * VAR_3)
{
 int VAR_4;

 if (VAR_3->ctx_bitmap == ((void*)0))
  return -1;

 FUNC_1(VAR_3);
 VAR_4 = FUNC_4(VAR_3->ctx_bitmap, VAR_0);
 if (VAR_4 >= VAR_0) {
  FUNC_2(VAR_3);
  return -1;
 }

 FUNC_6(VAR_4, VAR_3->ctx_bitmap);
 FUNC_0("bit : %d\n", VAR_4);
 if ((VAR_4+1) > VAR_3->max_context) {
  struct drm_local_map **VAR_5;
  int VAR_6 = (VAR_4+1);

  VAR_5 = FUNC_5(VAR_3->context_sareas,
      VAR_6 * sizeof(*VAR_3->context_sareas),
      VAR_1, VAR_2);
  if (VAR_5 == ((void*)0)) {
   FUNC_3(VAR_4, VAR_3->ctx_bitmap);
   FUNC_0("failed to allocate bit : %d\n", VAR_4);
   FUNC_2(VAR_3);
   return -1;
  }
  VAR_3->max_context = VAR_6;
  VAR_3->context_sareas = VAR_5;
  VAR_3->context_sareas[VAR_4] = ((void*)0);
 }
 FUNC_2(VAR_3);
 return VAR_4;
}
