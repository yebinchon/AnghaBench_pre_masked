
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int l_fp ;


 int FUNC_0 (int *,double) ;
 int VAR_0 ;
 double VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,double) ;
 int VAR_2 ;

int
FUNC_5(
 int VAR_3,
 char *VAR_4[]
 )
{
 l_fp VAR_5;
 int VAR_6, VAR_7;
 double VAR_8, VAR_9[VAR_0];




 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6 ++)
     VAR_9[VAR_6] = 0;




 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6 ++) {
  FUNC_3(&VAR_5);
  FUNC_0(&VAR_5, VAR_9[VAR_6]);
 }




 VAR_1 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_0 - 2; VAR_6++) {
  VAR_9[VAR_6] = VAR_9[VAR_6 + 1] - VAR_9[VAR_6];
  FUNC_4("%13.9f\n", VAR_9[VAR_6]);
  VAR_1 += VAR_9[VAR_6];
 }




 for (VAR_6 = 0; VAR_6 < VAR_0 - 2; VAR_6++) {
  for (VAR_7 = 0; VAR_7 <= VAR_6; VAR_7++) {
   if (VAR_9[VAR_7] > VAR_9[VAR_6]) {
    VAR_8 = VAR_9[VAR_7];
    VAR_9[VAR_7] = VAR_9[VAR_6];
    VAR_9[VAR_6] = VAR_8;
   }
  }
 }
 VAR_1 = VAR_1 / (VAR_0 - 2);
 FUNC_2(VAR_2, "Average %13.9f\n", VAR_1);
 FUNC_2(VAR_2, "First rank\n");
 for (VAR_6 = 0; VAR_6 < 10; VAR_6++)
  FUNC_2(VAR_2, "%2d %13.9f\n", VAR_6, VAR_9[VAR_6]);
 FUNC_2(VAR_2, "Last rank\n");
 for (VAR_6 = VAR_0 - 12; VAR_6 < VAR_0 - 2; VAR_6++)
  FUNC_2(VAR_2, "%2d %13.9f\n", VAR_6, VAR_9[VAR_6]);
 FUNC_1(0);
}
