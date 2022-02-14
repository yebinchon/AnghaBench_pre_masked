
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char**,char**) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int,char**) ;

__attribute__((used)) static int FUNC_5(char *VAR_3)
{
 char *VAR_4, *VAR_5[VAR_1], *VAR_6[VAR_1];
 int VAR_7, VAR_8, VAR_9, VAR_10 = -1;


 VAR_4 = FUNC_2(VAR_1 * (VAR_2 + VAR_0));
 if (!VAR_4)
  return VAR_10;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  VAR_5[VAR_7] = VAR_4 + VAR_7 * (VAR_2 + VAR_0);
  VAR_6[VAR_7] = VAR_5[VAR_7] + VAR_2;
 }

 VAR_8 = FUNC_0(VAR_5, VAR_6);
 if (VAR_8 > 0) {
  VAR_9 = FUNC_4(VAR_8, VAR_5);
  if (VAR_9 < VAR_8 && VAR_9 >= 0) {
   FUNC_3(VAR_3, VAR_6[VAR_9]);
   VAR_10 = 0;
  }
 }

 FUNC_1(VAR_4);
 return VAR_10;
}
