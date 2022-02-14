
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptr_data {void* note_ptr_cookie; int reorder_fn; } ;
typedef int gt_handle_reorder ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int ) ;
 struct ptr_data* FUNC_2 (int ,void*,int ) ;
 int VAR_0 ;

void
FUNC_3 (void *VAR_1, void *VAR_2,
       gt_handle_reorder VAR_3)
{
  struct ptr_data *VAR_4;

  if (VAR_1 == ((void*)0) || VAR_1 == (void *) 1)
    return;

  VAR_4 = FUNC_2 (VAR_0, VAR_1, FUNC_0 (VAR_1));
  FUNC_1 (VAR_4 && VAR_4->note_ptr_cookie == VAR_2);

  VAR_4->reorder_fn = VAR_3;
}
