
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct icode {int root; } ;
struct TYPE_9__ {int done; } ;
typedef TYPE_1__ opt_state_t ;
typedef int compiler_state_t ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,struct icode*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int *,TYPE_1__*,struct icode*,int) ;
 int FUNC_6 (int *,struct icode*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_7 (char*,int,...) ;

__attribute__((used)) static void
FUNC_8(compiler_state_t *VAR_2, opt_state_t *VAR_3, struct icode *VAR_4,
    int VAR_5)
{







 do {
  VAR_3->done = 1;
  FUNC_3(VAR_3, VAR_4);
  FUNC_1(VAR_3, VAR_4->root);
  FUNC_0(VAR_3, VAR_4->root);
  FUNC_4(VAR_3, VAR_4->root);
  FUNC_2(VAR_3, VAR_4->root);
  FUNC_5(VAR_2, VAR_3, VAR_4, VAR_5);






 } while (!VAR_3->done);
}
