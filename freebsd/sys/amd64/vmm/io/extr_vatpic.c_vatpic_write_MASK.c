
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct vatpic {int dummy; } ;
struct atpic {int icw_num; scalar_t__ ready; } ;


 int VAR_0 ;
 int FUNC_0 (struct vatpic*) ;
 int FUNC_1 (struct vatpic*) ;
 int FUNC_2 (struct vatpic*,struct atpic*,int) ;
 int FUNC_3 (struct vatpic*,struct atpic*,int) ;
 int FUNC_4 (struct vatpic*,struct atpic*,int) ;
 int FUNC_5 (struct vatpic*,struct atpic*,int) ;
 int FUNC_6 (struct vatpic*) ;
 int FUNC_7 (struct vatpic*,struct atpic*,int) ;
 int FUNC_8 (struct vatpic*,struct atpic*,int) ;
 int FUNC_9 (struct vatpic*,struct atpic*,int) ;

__attribute__((used)) static int
FUNC_10(struct vatpic *VAR_1, struct atpic *VAR_2, bool VAR_3, int VAR_4,
    int VAR_5, uint32_t *VAR_6)
{
 int VAR_7;
 uint8_t VAR_8;

 VAR_7 = 0;
 VAR_8 = *VAR_6;

 FUNC_0(VAR_1);

 if (VAR_4 & VAR_0) {
  switch (VAR_2->icw_num) {
  case 2:
   VAR_7 = FUNC_3(VAR_1, VAR_2, VAR_8);
   break;
  case 3:
   VAR_7 = FUNC_4(VAR_1, VAR_2, VAR_8);
   break;
  case 4:
   VAR_7 = FUNC_5(VAR_1, VAR_2, VAR_8);
   break;
  default:
   VAR_7 = FUNC_7(VAR_1, VAR_2, VAR_8);
   break;
  }
 } else {
  if (VAR_8 & (1 << 4))
   VAR_7 = FUNC_2(VAR_1, VAR_2, VAR_8);

  if (VAR_2->ready) {
   if (VAR_8 & (1 << 3))
    VAR_7 = FUNC_9(VAR_1, VAR_2, VAR_8);
   else
    VAR_7 = FUNC_8(VAR_1, VAR_2, VAR_8);
  }
 }

 if (VAR_2->ready)
  FUNC_6(VAR_1);

 FUNC_1(VAR_1);

 return (VAR_7);
}
