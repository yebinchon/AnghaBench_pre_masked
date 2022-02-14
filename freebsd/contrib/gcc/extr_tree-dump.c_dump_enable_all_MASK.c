
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; int letter; int state; } ;
struct TYPE_3__ {int flags; int letter; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 TYPE_1__* VAR_6 ;
 size_t VAR_7 ;

__attribute__((used)) static int
FUNC_0 (int VAR_8, int VAR_9)
{
  int VAR_10 = (VAR_8 & (VAR_2 | VAR_1 | VAR_0));
  int VAR_11 = 0;
  size_t VAR_12;

  for (VAR_12 = VAR_4 + 1; VAR_12 < (size_t) VAR_3; VAR_12++)
    if ((VAR_5[VAR_12].flags & VAR_10)
 && (VAR_9 == 0 || VAR_9 == VAR_5[VAR_12].letter))
      {
        VAR_5[VAR_12].state = -1;
        VAR_5[VAR_12].flags |= VAR_8;
        VAR_11++;
      }

  for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++)
    if ((VAR_6[VAR_12].flags & VAR_10)
 && (VAR_9 == 0 || VAR_9 == VAR_6[VAR_12].letter))
      {
        VAR_6[VAR_12].state = -1;
        VAR_6[VAR_12].flags |= VAR_8;
 VAR_11++;
      }

  return VAR_11;
}
