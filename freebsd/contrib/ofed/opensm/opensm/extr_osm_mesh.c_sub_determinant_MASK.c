
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lash_t ;


 scalar_t__ FUNC_0 (int *,int,int,int***,int*) ;
 int FUNC_1 (int*) ;
 int*** FUNC_2 (int *,int,int) ;
 int FUNC_3 (int***,int) ;
 int* FUNC_4 (int *,int) ;

__attribute__((used)) static int FUNC_5(lash_t *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4,
      int ***VAR_5, int **VAR_6)
{
 int VAR_7 = -1;
 int ***VAR_8 = ((void*)0);
 int *VAR_9 = ((void*)0);
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 int VAR_15 = VAR_2 - 1;

 do {
  if (!(VAR_9 = FUNC_4(VAR_0, VAR_1))) {
   break;
  }

  if (VAR_15 <= 0) {
   VAR_9[0] = 1;
   VAR_7 = 0;
   break;
  }

  if (!(VAR_8 = FUNC_2(VAR_0, VAR_15, VAR_1))) {
   FUNC_1(VAR_9);
   VAR_9 = ((void*)0);
   break;
  }

  VAR_13 = 0;
  for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
   if (VAR_10 == VAR_3)
    continue;

   VAR_14 = 0;
   for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
    if (VAR_11 == VAR_4)
     continue;

    for (VAR_12 = 0; VAR_12 <= VAR_1; VAR_12++)
     VAR_8[VAR_13][VAR_14][VAR_12] = VAR_5[VAR_10][VAR_11][VAR_12];

    VAR_14++;
   }
   VAR_13++;
  }

  if (FUNC_0(VAR_0, VAR_1, VAR_15, VAR_8, VAR_9)) {
   FUNC_1(VAR_9);
   VAR_9 = ((void*)0);
   break;
  }

  VAR_7 = 0;
 } while (0);

 FUNC_3(VAR_8, VAR_15);
 *VAR_6 = VAR_9;
 return VAR_7;
}
