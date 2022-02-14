
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vatpic {int dummy; } ;
struct atpic {int mask; scalar_t__ rd_cmd_reg; int service; int request; scalar_t__ poll; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct vatpic*) ;
 int FUNC_1 (struct vatpic*) ;
 int FUNC_2 (struct atpic*) ;
 int FUNC_3 (struct atpic*,int) ;

__attribute__((used)) static int
FUNC_4(struct vatpic *VAR_2, struct atpic *VAR_3, bool VAR_4, int VAR_5,
     int VAR_6, uint32_t *VAR_7)
{
 int VAR_8;

 FUNC_0(VAR_2);

 if (VAR_3->poll) {
  VAR_3->poll = 0;
  VAR_8 = FUNC_2(VAR_3);
  if (VAR_8 >= 0) {
   FUNC_3(VAR_3, VAR_8);
   *VAR_7 = 0x80 | VAR_8;
  } else {
   *VAR_7 = 0;
  }
 } else {
  if (VAR_5 & VAR_0) {

   *VAR_7 = VAR_3->mask;
  } else {
   if (VAR_3->rd_cmd_reg == VAR_1) {

    *VAR_7 = VAR_3->service;
   } else {

    *VAR_7 = VAR_3->request;
   }
  }
 }

 FUNC_1(VAR_2);

 return (0);

}
