
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct loop {int latch; } ;
typedef int basic_block ;
struct TYPE_2__ {struct loop* loop_father; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,struct loop*) ;
 scalar_t__* VAR_1 ;
 int FUNC_1 (size_t,int ,int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4 (basic_block VAR_2)
{
  struct loop *VAR_3 = FUNC_3 (VAR_2)->loop_father;

  if (VAR_1[VAR_0])
    FUNC_1 (VAR_0, VAR_2, FUNC_2 (VAR_2));
  FUNC_0 (VAR_2, VAR_3);
  VAR_3->latch = VAR_2;
}
