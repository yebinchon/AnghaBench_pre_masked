
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum ia64_unit { ____Placeholder_ia64_unit } ia64_unit ;
struct TYPE_2__ {int* exec_unit; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static int
FUNC_0 (int VAR_6, int VAR_7, int VAR_8)
{
  enum ia64_unit VAR_9;
  int VAR_10;

  VAR_9 = VAR_5[VAR_6].exec_unit[VAR_8];
  switch (VAR_7)
    {
    case 132: VAR_10 = 1; break;
    case 134:
      VAR_10 = (VAR_9 == VAR_2 || VAR_9 == VAR_4);
      break;
    case 128: VAR_10 = (VAR_9 == VAR_3); break;
    case 130: VAR_10 = (VAR_9 == VAR_2); break;
    case 129: VAR_10 = (VAR_9 == VAR_4); break;
    case 133: VAR_10 = (VAR_9 == VAR_0); break;
    case 131: VAR_10 = (VAR_9 == VAR_1); break;
    default: VAR_10 = 0; break;
    }
  return VAR_10;
}
