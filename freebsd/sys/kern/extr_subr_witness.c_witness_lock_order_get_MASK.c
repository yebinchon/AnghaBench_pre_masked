
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct witness_lock_order_key {size_t from; size_t to; } ;
struct witness_lock_order_data {struct witness_lock_order_data* wlod_next; int wlod_key; } ;
struct witness {size_t w_index; } ;
typedef int key ;
struct TYPE_2__ {unsigned int wloh_size; struct witness_lock_order_data** wloh_array; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (size_t) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int** VAR_2 ;
 unsigned int FUNC_2 (char const*,int) ;
 scalar_t__ FUNC_3 (int *,struct witness_lock_order_key*) ;

__attribute__((used)) static struct witness_lock_order_data *
FUNC_4(struct witness *VAR_3, struct witness *VAR_4)
{
 struct witness_lock_order_data *VAR_5 = ((void*)0);
 struct witness_lock_order_key VAR_6;
 unsigned int VAR_7;

 FUNC_0(VAR_3 != ((void*)0) && VAR_4 != ((void*)0));
 VAR_6.from = VAR_3->w_index;
 VAR_6.to = VAR_4->w_index;
 FUNC_1(VAR_6.from);
 FUNC_1(VAR_6.to);
 if ((VAR_2[VAR_3->w_index][VAR_4->w_index]
     & VAR_0) == 0)
  goto out;

 VAR_7 = FUNC_2((const char*)&VAR_6,
     sizeof(VAR_6)) % VAR_1.wloh_size;
 VAR_5 = VAR_1.wloh_array[VAR_7];
 while (VAR_5 != ((void*)0)) {
  if (FUNC_3(&VAR_5->wlod_key, &VAR_6))
   break;
  VAR_5 = VAR_5->wlod_next;
 }

out:
 return (VAR_5);
}
