
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct vatpic {int dummy; } ;
struct atpic {int aeoi; int sfn; int ready; scalar_t__ icw_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vatpic*,char*) ;
 int FUNC_1 (struct vatpic*,char*,int) ;
 scalar_t__ FUNC_2 (struct vatpic*,struct atpic*) ;

__attribute__((used)) static int
FUNC_3(struct vatpic *VAR_3, struct atpic *VAR_4, uint8_t VAR_5)
{
 FUNC_1(VAR_3, "atpic icw4 0x%x", VAR_5);

 if ((VAR_5 & VAR_0) == 0) {
  FUNC_0(VAR_3, "vatpic microprocessor mode required");
  return (-1);
 }

 if ((VAR_5 & VAR_1) != 0)
  VAR_4->aeoi = 1;

 if ((VAR_5 & VAR_2) != 0) {
  if (FUNC_2(VAR_3, VAR_4)) {
   VAR_4->sfn = 1;
  } else {
   FUNC_1(VAR_3, "Ignoring special fully nested "
       "mode on slave atpic: %#x", VAR_5);
  }
 }

 VAR_4->icw_num = 0;
 VAR_4->ready = 1;

 return (0);
}
