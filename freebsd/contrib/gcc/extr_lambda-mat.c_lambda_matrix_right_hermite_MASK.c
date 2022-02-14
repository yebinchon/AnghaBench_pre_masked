
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__** lambda_matrix ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__**,scalar_t__**,int,int) ;
 int FUNC_2 (scalar_t__**,int) ;
 int FUNC_3 (scalar_t__**,int,int,int,int) ;
 int FUNC_4 (scalar_t__**,int,int) ;
 int FUNC_5 (scalar_t__*,int,int) ;

void
FUNC_6 (lambda_matrix VAR_0, int VAR_1, int VAR_2,
        lambda_matrix VAR_3, lambda_matrix VAR_4)
{
  int VAR_5, VAR_6, VAR_7 = 0;

  FUNC_1 (VAR_0, VAR_3, VAR_1, VAR_2);
  FUNC_2 (VAR_4, VAR_1);

  for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
    {
      if (FUNC_5 (VAR_3[VAR_6], VAR_1, VAR_7) < VAR_1)
 {
   ++VAR_7;
   for (VAR_5 = VAR_1 - 1; VAR_5 >= VAR_7; VAR_5--)
     {
       while (VAR_3[VAR_5][VAR_6] != 0)
  {
    int VAR_8, VAR_9, VAR_10, VAR_11;

    VAR_10 = VAR_3[VAR_5-1][VAR_6];
    VAR_11 = VAR_3[VAR_5][VAR_6];
    VAR_8 = (VAR_10 * VAR_11 < 0) ? -1: 1;
    VAR_10 = FUNC_0 (VAR_10);
    VAR_11 = FUNC_0 (VAR_11);
    VAR_9 = VAR_8 * (VAR_10 / VAR_11);

    FUNC_3 (VAR_3, VAR_2, VAR_5, VAR_5-1, -VAR_9);
    FUNC_4 (VAR_3, VAR_5, VAR_5-1);

    FUNC_3 (VAR_4, VAR_1, VAR_5, VAR_5-1, -VAR_9);
    FUNC_4 (VAR_4, VAR_5, VAR_5-1);
  }
     }
 }
    }
}
