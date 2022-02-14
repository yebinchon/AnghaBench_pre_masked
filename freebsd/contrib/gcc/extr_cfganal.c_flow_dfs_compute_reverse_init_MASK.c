
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* depth_first_search_ds ;
struct TYPE_3__ {int visited_blocks; scalar_t__ sp; int stack; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3 (depth_first_search_ds VAR_3)
{

  VAR_3->stack = FUNC_0 (VAR_0, VAR_2);
  VAR_3->sp = 0;


  VAR_3->visited_blocks = FUNC_1 (VAR_1);


  FUNC_2 (VAR_3->visited_blocks);

  return;
}
