
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct constant_pool {int pool_insn; scalar_t__ size; } ;
typedef int rtx ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;

__attribute__((used)) static void
FUNC_5 (struct constant_pool *VAR_0, rtx VAR_1)
{
  rtx VAR_2 = FUNC_0 (VAR_0->size + 8 );

  if (!VAR_1)
    VAR_1 = FUNC_4 ();

  VAR_0->pool_insn = FUNC_2 (FUNC_3 (VAR_2), VAR_1);
  FUNC_1 (VAR_0->pool_insn, -1);
}
