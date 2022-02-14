
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct type {int dummy; } ;
struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_1 (struct type*) ;
 int FUNC_2 (struct type*,int) ;
 int FUNC_3 (struct type*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct type*) ;
 scalar_t__ FUNC_6 (char*,char*) ;

int
FUNC_7 (struct type *VAR_2,int *VAR_3,
                       int *VAR_4, int *VAR_5, int *VAR_6,
         char **VAR_7)
{
  if (FUNC_0 (VAR_2) == VAR_1)
    {


      if (FUNC_5 (VAR_2) == 2
          && FUNC_6 (FUNC_1 (VAR_2)[0].name, "length") == 0
          && FUNC_6 (FUNC_1 (VAR_2)[1].name, "st") == 0)
        {
          if (VAR_3)
     *VAR_3 = FUNC_2 (VAR_2, 0) / VAR_0;
          if (VAR_4)
     *VAR_4 = FUNC_4 (FUNC_3 (VAR_2, 0));
          if (VAR_5)
     *VAR_5 = FUNC_2 (VAR_2, 1) / VAR_0;
          if (VAR_6)
     *VAR_6 = 1;
    if (VAR_7)
     *VAR_7 = FUNC_1 (VAR_2)[1].name;
         return 2;
        };


      if (FUNC_5 (VAR_2) == 3
          && FUNC_6 (FUNC_1 (VAR_2)[0].name, "Capacity") == 0
          && FUNC_6 (FUNC_1 (VAR_2)[1].name, "length") == 0)
        {
          if (VAR_3)
     *VAR_3 = FUNC_2 (VAR_2, 1) / VAR_0;
          if (VAR_4)
     *VAR_4 = FUNC_4 (FUNC_3 (VAR_2, 1));
          if (VAR_5)
     *VAR_5 = FUNC_2 (VAR_2, 2) / VAR_0;

          if (VAR_6)
     *VAR_6 = 1;
    if (VAR_7)
     *VAR_7 = FUNC_1 (VAR_2)[2].name;
         return 3;
        };
    }
  return 0;
}
