
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_4__ {int lr_count; void* lr_read_wanted; void* lr_write_wanted; int lr_proxy; int lr_type; scalar_t__ lr_length; scalar_t__ lr_offset; } ;
typedef TYPE_1__ locked_range_t ;
typedef int avl_tree_t ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int,int ) ;

__attribute__((used)) static void
FUNC_3(avl_tree_t *VAR_4, uint64_t VAR_5, uint64_t VAR_6)
{
 FUNC_0(VAR_6 != 0);
 locked_range_t *VAR_7 = FUNC_2(sizeof (locked_range_t), VAR_2);
 VAR_7->lr_offset = VAR_5;
 VAR_7->lr_length = VAR_6;
 VAR_7->lr_count = 1;
 VAR_7->lr_type = VAR_3;
 VAR_7->lr_proxy = VAR_1;
 VAR_7->lr_write_wanted = VAR_0;
 VAR_7->lr_read_wanted = VAR_0;
 FUNC_1(VAR_4, VAR_7);
}
