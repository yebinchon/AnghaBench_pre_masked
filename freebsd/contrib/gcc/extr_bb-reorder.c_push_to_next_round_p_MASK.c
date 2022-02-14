
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ gcov_type ;
typedef TYPE_1__* basic_block ;
struct TYPE_4__ {int frequency; scalar_t__ count; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static bool
FUNC_1 (basic_block VAR_0, int VAR_1, int VAR_2,
        int VAR_3, gcov_type VAR_4)
{
  bool VAR_5;
  bool VAR_6;

  VAR_5 = VAR_1 < VAR_2 - 1;

  VAR_6 = (VAR_0->frequency < VAR_3
     || VAR_0->count < VAR_4
     || FUNC_0 (VAR_0));

  if (VAR_5
      && VAR_6)
    return 1;
  else
    return 0;
}
