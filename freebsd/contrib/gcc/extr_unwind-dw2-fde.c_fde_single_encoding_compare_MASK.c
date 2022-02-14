
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int encoding; } ;
struct TYPE_7__ {TYPE_1__ b; } ;
struct object {TYPE_2__ s; } ;
struct TYPE_8__ {int pc_begin; } ;
typedef TYPE_3__ fde ;
typedef scalar_t__ _Unwind_Ptr ;


 scalar_t__ FUNC_0 (int ,struct object*) ;
 int FUNC_1 (int ,scalar_t__,int ,scalar_t__*) ;

__attribute__((used)) static int
FUNC_2 (struct object *VAR_0, const fde *VAR_1, const fde *VAR_2)
{
  _Unwind_Ptr VAR_3, VAR_4, VAR_5;

  VAR_3 = FUNC_0 (VAR_0->s.b.encoding, VAR_0);
  FUNC_1 (VAR_0->s.b.encoding, VAR_3, VAR_1->pc_begin, &VAR_4);
  FUNC_1 (VAR_0->s.b.encoding, VAR_3, VAR_2->pc_begin, &VAR_5);

  if (VAR_4 > VAR_5)
    return 1;
  if (VAR_4 < VAR_5)
    return -1;
  return 0;
}
