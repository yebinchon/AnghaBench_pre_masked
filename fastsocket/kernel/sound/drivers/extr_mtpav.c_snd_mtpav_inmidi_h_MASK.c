
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mtpav {int inmidistate; int inmidiport; } ;


 int FUNC_0 (struct mtpav*,int) ;
 int FUNC_1 (struct mtpav*,int) ;

__attribute__((used)) static void FUNC_2(struct mtpav *VAR_0, u8 VAR_1)
{
 if (VAR_1 >= 0xf8) {

  FUNC_0(VAR_0, VAR_1);
  return;
 }

 if (VAR_0->inmidistate == 0) {
  if (VAR_1 == 0xf5)
   VAR_0->inmidistate = 1;
  else
   FUNC_0(VAR_0, VAR_1);
 } else if (VAR_0->inmidistate) {
  VAR_0->inmidiport = FUNC_1(VAR_0, VAR_1);
  VAR_0->inmidistate = 0;
 }
}
