
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * vm_page_t ;
typedef int * vm_object_t ;
struct ttm_buffer_object {int num_pages; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (struct ttm_buffer_object*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int * FUNC_6 (int *,int) ;

void
FUNC_7(struct ttm_buffer_object *VAR_1)
{
 vm_object_t VAR_2;
 vm_page_t VAR_3;
 int VAR_4;

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2 == ((void*)0))
  return;

 FUNC_0(VAR_2);
retry:
 for (VAR_4 = 0; VAR_4 < VAR_1->num_pages; VAR_4++) {
  VAR_3 = FUNC_6(VAR_2, VAR_4);
  if (VAR_3 == ((void*)0))
   continue;
  if (FUNC_5(VAR_3, VAR_0) == 0)
   goto retry;
  FUNC_2(VAR_2, VAR_3);
 }
 FUNC_1(VAR_2);

 FUNC_4(VAR_2);
}
