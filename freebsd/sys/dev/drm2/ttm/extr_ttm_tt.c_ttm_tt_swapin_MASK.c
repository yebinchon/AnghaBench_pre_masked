
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * vm_page_t ;
typedef int * vm_object_t ;
struct ttm_tt {int num_pages; int page_flags; int * swap_storage; int ** pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int *,int,int) ;

int FUNC_8(struct ttm_tt *VAR_7)
{
 vm_object_t VAR_8;
 vm_page_t VAR_9, VAR_10;
 int VAR_11, VAR_12, VAR_13;

 VAR_8 = VAR_7->swap_storage;

 FUNC_0(VAR_8);
 FUNC_5(VAR_8, 1);
 for (VAR_11 = 0; VAR_11 < VAR_7->num_pages; ++VAR_11) {
  VAR_13 = FUNC_7(&VAR_9, VAR_8, VAR_11,
      VAR_5 | VAR_4);
  if (VAR_13 != VAR_6) {
   VAR_12 = -VAR_0;
   goto err_ret;
  }
  VAR_10 = VAR_7->pages[VAR_11];
  if (FUNC_3(VAR_10 == ((void*)0))) {
   VAR_12 = -VAR_1;
   goto err_ret;
  }
  FUNC_2(VAR_9, VAR_10);
 }
 FUNC_6(VAR_8);
 FUNC_1(VAR_8);

 if (!(VAR_7->page_flags & VAR_2))
  FUNC_4(VAR_8);
 VAR_7->swap_storage = ((void*)0);
 VAR_7->page_flags &= ~VAR_3;
 return (0);

err_ret:
 FUNC_6(VAR_8);
 FUNC_1(VAR_8);
 return (VAR_12);
}
