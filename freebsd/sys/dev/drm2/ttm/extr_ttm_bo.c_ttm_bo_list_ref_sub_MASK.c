
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ttm_buffer_object {int list_kref; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct ttm_buffer_object*) ;

void FUNC_3(struct ttm_buffer_object *VAR_0, int VAR_1,
    bool VAR_2)
{
 u_int VAR_3;

 VAR_3 = FUNC_0(&VAR_0->list_kref, -VAR_1);
 if (VAR_3 <= VAR_1) {
  if (VAR_2)
   FUNC_1("ttm_bo_ref_buf");
  FUNC_2(VAR_0);
 }
}
