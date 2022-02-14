
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char) ;
 char FUNC_1 (uintptr_t) ;
 scalar_t__ FUNC_2 (char) ;
 scalar_t__ FUNC_3 (char) ;

__attribute__((used)) static int64_t
FUNC_4(char *VAR_2, int VAR_3, size_t VAR_4)
{
 uintptr_t VAR_5 = (uintptr_t)VAR_2;
 int64_t VAR_6 = 0;
 int VAR_7;
 boolean_t VAR_8 = VAR_0;
 char VAR_9, VAR_10, VAR_11;
 uintptr_t VAR_12 = VAR_5 + VAR_4;




 while ((VAR_9 = FUNC_1(VAR_5)) == ' ' || VAR_9 == '\t')
  VAR_5++;




 if (VAR_9 == '-' || VAR_9 == '+') {
  if (VAR_9 == '-')
   VAR_8 = VAR_1;
  VAR_9 = FUNC_1(++VAR_5);
 }





 if (VAR_3 == 16 && VAR_9 == '0' && ((VAR_10 = FUNC_1(VAR_5 + 1)) == 'x' ||
     VAR_10 == 'X') && FUNC_2(VAR_11 = FUNC_1(VAR_5 + 2))) {
  VAR_5 += 2;
  VAR_9 = VAR_11;
 }




 for (; VAR_5 < VAR_12 && VAR_9 != '\0' && FUNC_3(VAR_9) && (VAR_7 = FUNC_0(VAR_9)) < VAR_3;
     VAR_9 = FUNC_1(++VAR_5))
  VAR_6 = VAR_6 * VAR_3 + VAR_7;

 return (VAR_8 ? -VAR_6 : VAR_6);
}
