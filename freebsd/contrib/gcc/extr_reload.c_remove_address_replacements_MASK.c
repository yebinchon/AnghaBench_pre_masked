
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ rtx ;
struct TYPE_4__ {size_t what; int where; } ;
struct TYPE_3__ {scalar_t__ in; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (char*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 TYPE_1__* VAR_4 ;

int
FUNC_3 (rtx VAR_5)
{
  int VAR_6, VAR_7;
  char VAR_8[VAR_0];
  int VAR_9 = 0;

  FUNC_2 (VAR_8, 0, sizeof VAR_8);
  for (VAR_6 = 0, VAR_7 = 0; VAR_6 < VAR_2; VAR_6++)
    {
      if (FUNC_1 (VAR_3[VAR_6].where, VAR_5))
 VAR_8[VAR_3[VAR_6].what] |= 1;
      else
 {
   VAR_3[VAR_7++] = VAR_3[VAR_6];
   VAR_8[VAR_3[VAR_6].what] |= 2;
 }
    }

  VAR_2 = VAR_7;

  for (VAR_6 = VAR_1 - 1; VAR_6 >= 0; VAR_6--)
    {
      if (VAR_8[VAR_6] == 1)
 {
   FUNC_0 (VAR_6);
   FUNC_3 (VAR_4[VAR_6].in);
   VAR_4[VAR_6].in = 0;
   VAR_9 = 1;
 }
    }
  return VAR_9;
}
