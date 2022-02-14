
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct traversal_state {int ptrs_i; struct ptr_data** ptrs; int d; } ;
struct ptr_data {scalar_t__ note_ptr_fn; int type; int size; int obj; int new_addr; } ;


 int FUNC_0 (int ,int ,int ,int,int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_1 (void **VAR_1, void *VAR_2)
{
  struct ptr_data *VAR_3 = (struct ptr_data *)*VAR_1;
  struct traversal_state *VAR_4 = (struct traversal_state *)VAR_2;

  VAR_3->new_addr = FUNC_0 (VAR_4->d, VAR_3->obj, VAR_3->size,
          VAR_3->note_ptr_fn == VAR_0,
          VAR_3->type);
  VAR_4->ptrs[VAR_4->ptrs_i++] = VAR_3;
  return 1;
}
