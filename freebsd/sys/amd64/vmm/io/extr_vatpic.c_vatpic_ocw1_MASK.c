
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct vatpic {int dummy; } ;
struct atpic {int mask; } ;


 int FUNC_0 (struct vatpic*,char*,int) ;

__attribute__((used)) static int
FUNC_1(struct vatpic *VAR_0, struct atpic *VAR_1, uint8_t VAR_2)
{
 FUNC_0(VAR_0, "atpic ocw1 0x%x", VAR_2);

 VAR_1->mask = VAR_2 & 0xff;

 return (0);
}
