
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int rtx ;
typedef TYPE_1__* basic_block ;
struct TYPE_5__ {int index; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (scalar_t__,char*,int) ;

__attribute__((used)) static rtx
FUNC_4 (basic_block VAR_1)
{
  rtx VAR_2 = FUNC_0 (VAR_1);

  if (!FUNC_1 (VAR_2))
    {
      if (VAR_0)
 FUNC_3 (VAR_0, "Emitting label for block %d\n", VAR_1->index);

      VAR_2 = FUNC_2 (VAR_1);
    }

  return VAR_2;
}
