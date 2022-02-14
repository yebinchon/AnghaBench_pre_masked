
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lash_t ;


 int FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (int *,int,int,int ,int,int***,int**) ;

__attribute__((used)) static int FUNC_2(lash_t *VAR_0, int VAR_1, int VAR_2, int ***VAR_3, int *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 int *VAR_8;
 int VAR_9 = 1;




 if (VAR_2 == 1) {
  for (VAR_5 = 0; VAR_5 <= VAR_1; VAR_5++)
   VAR_4[VAR_5] += VAR_3[0][0][VAR_5];
 }




 else if (VAR_2 == 2) {
  for (VAR_5 = 0; VAR_5 <= VAR_1; VAR_5++) {
   if (VAR_3[0][0][VAR_5] == 0)
    continue;

   for (VAR_6 = 0; VAR_6 <= VAR_1; VAR_6++) {
    if (VAR_3[1][1][VAR_6] == 0)
     continue;

    VAR_4[VAR_5+VAR_6] += VAR_3[0][0][VAR_5]*VAR_3[1][1][VAR_6];
   }
  }

  for (VAR_5 = 0; VAR_5 <= VAR_1; VAR_5++) {
   if (VAR_3[0][1][VAR_5] == 0)
    continue;

   for (VAR_6 = 0; VAR_6 <= VAR_1; VAR_6++) {
    if (VAR_3[1][0][VAR_6] == 0)
     continue;

    VAR_4[VAR_5+VAR_6] -= VAR_3[0][1][VAR_5]*VAR_3[1][0][VAR_6];
   }
  }
 }




 else {
  for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
   if (FUNC_1(VAR_0, VAR_1, VAR_2, 0, VAR_5, VAR_3, &VAR_8))
    return -1;

   for (VAR_6 = 0; VAR_6 <= VAR_1; VAR_6++) {
    if (VAR_3[0][VAR_5][VAR_6] == 0)
     continue;

    for (VAR_7 = 0; VAR_7 <= VAR_1; VAR_7++) {
     if (VAR_8[VAR_7] == 0)
      continue;

     VAR_4[VAR_6+VAR_7] += VAR_9*VAR_3[0][VAR_5][VAR_6]*VAR_8[VAR_7];
    }
   }

   FUNC_0(VAR_8);
   VAR_9 = -VAR_9;
  }
 }

 return 0;
}
