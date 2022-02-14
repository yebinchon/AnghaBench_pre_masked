
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ off_t ;
typedef char eChar ;
typedef char Char ;


 int VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 char** VAR_10 ;
 scalar_t__* VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_4 (int ,scalar_t__,int ) ;
 int FUNC_5 (char*,scalar_t__,int) ;
 int VAR_16 ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__,int) ;
 int FUNC_9 (int ,char*,int,int) ;
 scalar_t__ VAR_17 ;

__attribute__((used)) static eChar
FUNC_10(void)
{
    Char VAR_18;
    int VAR_19, VAR_20, VAR_21;
    int VAR_22 = 0, VAR_23;

    if (VAR_6) {
 if (VAR_14 < VAR_9 || VAR_14 > VAR_12) {
     VAR_9 = VAR_12 = VAR_14;
     (void) FUNC_4(VAR_5, VAR_14, VAR_4);
 }
 if (VAR_14 == VAR_12) {
     VAR_9 = VAR_12;
     VAR_19 = FUNC_9(VAR_5, VAR_10[0], VAR_0, 1);




     if (VAR_19 <= 0)
  return VAR_1;
     VAR_12 += VAR_19;
 }

 VAR_18 = VAR_10[0][VAR_14 - VAR_9];
 VAR_14++;






 return (VAR_18);
    }

    while (VAR_14 >= VAR_12) {
 if ((VAR_7



     ) && VAR_15) {
     VAR_14 = VAR_12;





     VAR_19 = VAR_22 = FUNC_0();
     while (VAR_22 > 0) {
  VAR_20 = (int) VAR_12 % VAR_0;
  VAR_21 = (int) VAR_12 / VAR_0;
  FUNC_1(VAR_21);
  VAR_23 = VAR_0 - VAR_20;
  if (VAR_23 > VAR_22)
      VAR_23 = VAR_22;
  (void) FUNC_5(VAR_10[VAR_21] + VAR_20, VAR_3 + VAR_19 - VAR_22,
         VAR_23 * sizeof(Char));
  VAR_22 -= VAR_23;
  VAR_12 += VAR_23;
     }
 } else {
     VAR_20 = (int) VAR_12 % VAR_0;
     VAR_21 = (int) VAR_12 / VAR_0;
     FUNC_1(VAR_21);
     VAR_23 = VAR_0 - VAR_20;
     VAR_19 = FUNC_9(VAR_5, VAR_10[VAR_21] + VAR_20, VAR_23, 0);
     if (VAR_19 > 0)
  VAR_12 += VAR_19;
 }
 if (VAR_19 == 0 || (VAR_19 < 0 && FUNC_3(VAR_5, VAR_8) == -1))
     return VAR_1;
    }





    VAR_18 = VAR_10[(int) VAR_14 / VAR_0][(int) VAR_14 % VAR_0];
    VAR_14++;






    return (VAR_18);
}
