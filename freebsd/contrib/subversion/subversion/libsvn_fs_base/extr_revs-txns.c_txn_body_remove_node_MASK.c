
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pool; int fs; } ;
typedef TYPE_1__ trail_t ;
typedef int svn_error_t ;
struct remove_node_args {int txn_id; int id; } ;


 int * FUNC_0 (int ,int ,int ,TYPE_1__*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_1(void *VAR_0, trail_t *VAR_1)
{
  struct remove_node_args *VAR_2 = VAR_0;
  return FUNC_0(VAR_1->fs, VAR_2->id, VAR_2->txn_id,
                                      VAR_1, VAR_1->pool);
}
