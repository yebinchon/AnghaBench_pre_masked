
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
struct TYPE_2__ {scalar_t__ last_set; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_5 (int ) ;
 unsigned int VAR_4 ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (int ,int) ;
 int** VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;

__attribute__((used)) static int
FUNC_9 (rtx VAR_8, int VAR_9)
{
  const char *VAR_10;
  int VAR_11;
  enum rtx_code VAR_12 = FUNC_0 (VAR_8);

  if (VAR_12 == VAR_3)
    {
      unsigned int VAR_13 = FUNC_5 (VAR_8);
      unsigned VAR_14 = VAR_13 + (VAR_13 < VAR_0
     ? VAR_5[VAR_13][FUNC_1 (VAR_8)] : 1);







      for (; VAR_13 < VAR_14; VAR_13++)
 if (VAR_7[VAR_13].last_set
     && FUNC_4 (VAR_7[VAR_13].last_set) > VAR_9)
   return 1;
      return 0;
    }

  if (VAR_12 == VAR_1 && VAR_6 > VAR_9)
    return 1;

  VAR_10 = FUNC_2 (VAR_12);

  for (VAR_11 = FUNC_3 (VAR_12) - 1; VAR_11 >= 0; VAR_11--)
    {
      if (VAR_10[VAR_11] == 'E')
 {
   int VAR_15;
   for (VAR_15 = FUNC_8 (VAR_8, VAR_11) - 1; VAR_15 >= 0; VAR_15--)
     if (FUNC_9 (FUNC_7 (VAR_8, VAR_11, VAR_15), VAR_9))
       return 1;
 }
      else if (VAR_10[VAR_11] == 'e'
        && FUNC_9 (FUNC_6 (VAR_8, VAR_11), VAR_9))
 return 1;
    }
  return 0;
}
