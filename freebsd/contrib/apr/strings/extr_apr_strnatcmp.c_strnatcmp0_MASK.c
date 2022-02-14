
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 char FUNC_2 (char) ;
 int FUNC_3 (char const*,char const*) ;
 int FUNC_4 (char const*,char const*) ;

__attribute__((used)) static int FUNC_5(char const *VAR_0, char const *VAR_1, int VAR_2)
{
     int VAR_3, VAR_4;
     char VAR_5, VAR_6;
     int VAR_7, VAR_8;
     VAR_3 = VAR_4 = 0;
     while (1) {
   VAR_5 = VAR_0[VAR_3]; VAR_6 = VAR_1[VAR_4];


   while (FUNC_1(VAR_5))
        VAR_5 = VAR_0[++VAR_3];

   while (FUNC_1(VAR_6))
        VAR_6 = VAR_1[++VAR_4];


   if (FUNC_0(VAR_5) && FUNC_0(VAR_6)) {
        VAR_7 = (VAR_5 == '0' || VAR_6 == '0');

        if (VAR_7) {
      if ((VAR_8 = FUNC_3(VAR_0+VAR_3, VAR_1+VAR_4)) != 0)
    return VAR_8;
        } else {
      if ((VAR_8 = FUNC_4(VAR_0+VAR_3, VAR_1+VAR_4)) != 0)
    return VAR_8;
        }
   }

   if (!VAR_5 && !VAR_6) {


        return 0;
   }

   if (VAR_2) {
        VAR_5 = FUNC_2(VAR_5);
        VAR_6 = FUNC_2(VAR_6);
   }

   if (VAR_5 < VAR_6)
        return -1;
   else if (VAR_5 > VAR_6)
        return +1;

   ++VAR_3; ++VAR_4;
     }
}
