
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zilog_t ;
typedef int zbookmark_phys_t ;
struct bptree_args {int (* ba_func ) (int ,int const*,int ) ;TYPE_1__* ba_phys; scalar_t__ ba_free; int ba_tx; int ba_arg; } ;
typedef int spa_t ;
typedef int dnode_phys_t ;
typedef int blkptr_t ;
struct TYPE_2__ {int bt_uncomp; int bt_comp; int bt_bytes; } ;


 scalar_t__ FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int *,int const*) ;
 int FUNC_4 (int ,int const*,int ) ;

__attribute__((used)) static int
FUNC_5(spa_t *VAR_0, zilog_t *VAR_1, const blkptr_t *VAR_2,
    const zbookmark_phys_t *VAR_3, const dnode_phys_t *VAR_4, void *VAR_5)
{
 int VAR_6;
 struct bptree_args *VAR_7 = VAR_5;

 if (VAR_2 == ((void*)0) || FUNC_2(VAR_2))
  return (0);

 VAR_6 = VAR_7->ba_func(VAR_7->ba_arg, VAR_2, VAR_7->ba_tx);
 if (VAR_6 == 0 && VAR_7->ba_free) {
  VAR_7->ba_phys->bt_bytes -= FUNC_3(VAR_0, VAR_2);
  VAR_7->ba_phys->bt_comp -= FUNC_0(VAR_2);
  VAR_7->ba_phys->bt_uncomp -= FUNC_1(VAR_2);
 }
 return (VAR_6);
}
