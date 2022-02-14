
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_buffer {int size; struct drm_buffer** data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_buffer*,int ) ;

void FUNC_1(struct drm_buffer *VAR_2)
{

 if (VAR_2 != ((void*)0)) {

  int VAR_3 = VAR_2->size / VAR_1 + 1;
  int VAR_4;
  for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4)
   FUNC_0(VAR_2->data[VAR_4], VAR_0);

  FUNC_0(VAR_2, VAR_0);
 }
}
