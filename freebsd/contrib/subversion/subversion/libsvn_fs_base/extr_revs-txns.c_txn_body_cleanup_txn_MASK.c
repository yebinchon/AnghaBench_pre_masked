
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pool; int fs; } ;
typedef TYPE_1__ trail_t ;
typedef int svn_error_t ;
struct cleanup_txn_args {int name; int txn_p; } ;


 int VAR_0 ;
 int * FUNC_0 (int ,int ,int ,int ,TYPE_1__*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_1(void *VAR_1, trail_t *VAR_2)
{
  struct cleanup_txn_args *VAR_3 = VAR_1;
  return FUNC_0(VAR_3->txn_p, VAR_2->fs, VAR_3->name, VAR_0,
                 VAR_2, VAR_2->pool);
}
