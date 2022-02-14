
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct vatpic {int dummy; } ;
struct atpic {int ready; int icw_num; int lowprio; scalar_t__ smm; scalar_t__ poll; scalar_t__ rd_cmd_reg; scalar_t__ mask; scalar_t__ request; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vatpic*,char*) ;
 int FUNC_1 (struct vatpic*,char*,int) ;

__attribute__((used)) static int
FUNC_2(struct vatpic *VAR_2, struct atpic *VAR_3, uint8_t VAR_4)
{
 FUNC_1(VAR_2, "atpic icw1 0x%x", VAR_4);

 VAR_3->ready = 0;

 VAR_3->icw_num = 1;
 VAR_3->request = 0;
 VAR_3->mask = 0;
 VAR_3->lowprio = 7;
 VAR_3->rd_cmd_reg = 0;
 VAR_3->poll = 0;
 VAR_3->smm = 0;

 if ((VAR_4 & VAR_1) != 0) {
  FUNC_0(VAR_2, "vatpic cascade mode required");
  return (-1);
 }

 if ((VAR_4 & VAR_0) == 0) {
  FUNC_0(VAR_2, "vatpic icw4 required");
  return (-1);
 }

 VAR_3->icw_num++;

 return (0);
}
