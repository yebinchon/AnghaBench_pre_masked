
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct vatpic {int dummy; } ;
struct atpic {int smm; int rd_cmd_reg; int poll; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct vatpic*,char*,int) ;
 int FUNC_1 (struct vatpic*,char*,char*,char*) ;
 scalar_t__ FUNC_2 (struct vatpic*,struct atpic*) ;

__attribute__((used)) static int
FUNC_3(struct vatpic *VAR_5, struct atpic *VAR_6, uint8_t VAR_7)
{
 FUNC_0(VAR_5, "atpic ocw3 0x%x", VAR_7);

 if (VAR_7 & VAR_0) {
  VAR_6->smm = VAR_7 & VAR_4 ? 1 : 0;
  FUNC_1(VAR_5, "%s atpic special mask mode %s",
      FUNC_2(VAR_5, VAR_6) ? "master" : "slave",
      VAR_6->smm ? "enabled" : "disabled");
 }

 if (VAR_7 & VAR_3) {

  VAR_6->rd_cmd_reg = VAR_7 & VAR_2;


  VAR_6->poll = ((VAR_7 & VAR_1) != 0);
 }

 return (0);
}
