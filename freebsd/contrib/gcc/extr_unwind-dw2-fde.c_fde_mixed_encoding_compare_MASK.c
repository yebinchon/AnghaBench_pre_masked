
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct object {int dummy; } ;
struct TYPE_5__ {int pc_begin; } ;
typedef TYPE_1__ fde ;
typedef scalar_t__ _Unwind_Ptr ;


 int FUNC_0 (int,struct object*) ;
 int FUNC_1 (TYPE_1__ const*) ;
 int FUNC_2 (int,int ,int ,scalar_t__*) ;

__attribute__((used)) static int
FUNC_3 (struct object *VAR_0, const fde *VAR_1, const fde *VAR_2)
{
  int VAR_3, VAR_4;
  _Unwind_Ptr VAR_5, VAR_6;

  VAR_3 = FUNC_1 (VAR_1);
  FUNC_2 (VAR_3, FUNC_0 (VAR_3, VAR_0),
    VAR_1->pc_begin, &VAR_5);

  VAR_4 = FUNC_1 (VAR_2);
  FUNC_2 (VAR_4, FUNC_0 (VAR_4, VAR_0),
    VAR_2->pc_begin, &VAR_6);

  if (VAR_5 > VAR_6)
    return 1;
  if (VAR_5 < VAR_6)
    return -1;
  return 0;
}
