
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nitems; int* items; int number; struct TYPE_3__* link; } ;
typedef TYPE_1__ core ;
typedef int Value_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 int** VAR_0 ;
 int** VAR_1 ;
 void* FUNC_2 (int) ;
 int VAR_2 ;
 TYPE_1__** VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static Value_t
FUNC_3(int VAR_5)
{
    int VAR_6;
    Value_t *VAR_7;
    Value_t *VAR_8;
    Value_t *VAR_9;
    core *VAR_10;
    int VAR_11;
    int VAR_12;





    VAR_7 = VAR_0[VAR_5];
    VAR_9 = VAR_1[VAR_5];
    VAR_12 = (int)(VAR_9 - VAR_7);

    VAR_6 = *VAR_7;
    FUNC_0(0 <= VAR_6 && VAR_6 < VAR_2);
    VAR_10 = VAR_3[VAR_6];
    if (VAR_10)
    {
 VAR_11 = 0;
 while (!VAR_11)
 {
     if (VAR_10->nitems == VAR_12)
     {
  VAR_11 = 1;
  VAR_7 = VAR_0[VAR_5];
  VAR_8 = VAR_10->items;

  while (VAR_11 && VAR_7 < VAR_9)
  {
      if (*VAR_7++ != *VAR_8++)
   VAR_11 = 0;
  }
     }

     if (!VAR_11)
     {
  if (VAR_10->link)
  {
      VAR_10 = VAR_10->link;
  }
  else
  {
      VAR_10 = VAR_10->link = FUNC_2(VAR_5);
      VAR_11 = 1;
  }
     }
 }
    }
    else
    {
 VAR_3[VAR_6] = VAR_10 = FUNC_2(VAR_5);
    }

    return (VAR_10->number);
}
