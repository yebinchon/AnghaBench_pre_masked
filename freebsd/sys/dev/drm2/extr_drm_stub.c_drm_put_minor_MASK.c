
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_minor {int device; int buf_sigio; int index; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct drm_minor*,int ) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct drm_minor **VAR_1)
{
 struct drm_minor *VAR_2 = *VAR_1;

 FUNC_0("release secondary minor %d\n", VAR_2->index);

 FUNC_3(&VAR_2->buf_sigio);

 FUNC_1(VAR_2->device);

 FUNC_2(VAR_2, VAR_0);
 *VAR_1 = ((void*)0);
 return 0;
}
