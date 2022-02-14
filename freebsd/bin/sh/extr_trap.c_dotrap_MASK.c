
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stackmark {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 scalar_t__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (struct stackmark*) ;
 int FUNC_2 (struct stackmark*) ;
 int VAR_10 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__* VAR_11 ;

void
FUNC_4(void)
{
 struct stackmark VAR_12;
 int VAR_13;
 int VAR_14, VAR_15, VAR_16;

 VAR_6++;
 for (;;) {
  VAR_8 = 0;
  VAR_9 = 0;
  for (VAR_13 = 1; VAR_13 < VAR_0; VAR_13++) {
   if (VAR_4[VAR_13]) {
    VAR_4[VAR_13] = 0;
    if (VAR_11[VAR_13]) {





     if (VAR_13 == VAR_1)
      VAR_5++;
     VAR_15 = VAR_2;
     VAR_16 = VAR_10;
     VAR_2 = 0;

     VAR_7 = VAR_13;
     VAR_14 = VAR_3;
     FUNC_2(&VAR_12);
     FUNC_0(FUNC_3(VAR_11[VAR_13]), 0);
     FUNC_1(&VAR_12);
     if (VAR_2 == 0 ||
         VAR_15 != 0) {
      VAR_2 = VAR_15;
      VAR_10 = VAR_16;
      VAR_3 = VAR_14;
     }

     if (VAR_13 == VAR_1)
      VAR_5--;
    }
    break;
   }
  }
  if (VAR_13 >= VAR_0)
   break;
 }
 VAR_6--;
}
