
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_buffer {int size; struct drm_buffer** data; } ;


 int FUNC_0 (char*,int,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct drm_buffer*,int ) ;
 void* FUNC_2 (int,int ,int) ;
 int FUNC_3 (int,int) ;

int FUNC_4(struct drm_buffer **VAR_5, int VAR_6)
{
 int VAR_7 = VAR_6 / VAR_4 + 1;
 int VAR_8;



 *VAR_5 = FUNC_2(sizeof(struct drm_buffer) + VAR_7*sizeof(char *),
   VAR_0, VAR_3 | VAR_2);

 if (*VAR_5 == ((void*)0)) {
  FUNC_0("Failed to allocate drm buffer object to hold"
    " %d bytes in %d pages.\n",
    VAR_6, VAR_7);
  return -VAR_1;
 }

 (*VAR_5)->size = VAR_6;

 for (VAR_8 = 0; VAR_8 < VAR_7; ++VAR_8) {

  (*VAR_5)->data[VAR_8] =
   FUNC_2(FUNC_3(VAR_4, VAR_6 - VAR_8 * VAR_4),
    VAR_0, VAR_2);


  if ((*VAR_5)->data[VAR_8] == ((void*)0)) {
   FUNC_0("Failed to allocate %dth page for drm"
     " buffer with %d bytes and %d pages.\n",
     VAR_8 + 1, VAR_6, VAR_7);
   goto error_out;
  }

 }

 return 0;

error_out:


 if ((*VAR_5)->data[VAR_8])
  FUNC_1((*VAR_5)->data[VAR_8], VAR_0);

 for (--VAR_8; VAR_8 >= 0; --VAR_8)
  FUNC_1((*VAR_5)->data[VAR_8], VAR_0);

 FUNC_1(*VAR_5, VAR_0);
 return -VAR_1;
}
