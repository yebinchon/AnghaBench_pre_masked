
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * first; int ** last; } ;
struct idr {int num_size; int null_size; scalar_t__ pool_idx; TYPE_1__ wait_list; int rbtree; } ;
struct archive_write {int dummy; } ;
struct archive_rb_tree_ops {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct archive_rb_tree_ops const*) ;
 int FUNC_1 (struct archive_write*,struct idr*,int) ;

__attribute__((used)) static int
FUNC_2(struct archive_write *VAR_1, struct idr *VAR_2, int VAR_3, int VAR_4,
    int VAR_5, int VAR_6, const struct archive_rb_tree_ops *VAR_7)
{
 int VAR_8;

 (void)VAR_4;

 VAR_8 = FUNC_1(VAR_1, VAR_2, VAR_3);
 if (VAR_8 != VAR_0)
  return (VAR_8);
 FUNC_0(&(VAR_2->rbtree), VAR_7);
 VAR_2->wait_list.first = ((void*)0);
 VAR_2->wait_list.last = &(VAR_2->wait_list.first);
 VAR_2->pool_idx = 0;
 VAR_2->num_size = VAR_5;
 VAR_2->null_size = VAR_6;
 return (VAR_0);
}
