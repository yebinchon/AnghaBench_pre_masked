
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int rtx ;
typedef TYPE_1__* basic_block ;
struct TYPE_3__ {scalar_t__ count; scalar_t__ frequency; } ;


 TYPE_1__* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1 (rtx VAR_0, rtx VAR_1)
{
  basic_block VAR_2 = FUNC_0 (VAR_0);
  basic_block VAR_3 = FUNC_0 (VAR_1);

  if (VAR_2->count > VAR_3->count
      || VAR_2->frequency > VAR_3->frequency)
    return -1;
  if (VAR_2->count < VAR_3->count
      || VAR_2->frequency < VAR_3->frequency)
    return 1;
  return 0;
}
