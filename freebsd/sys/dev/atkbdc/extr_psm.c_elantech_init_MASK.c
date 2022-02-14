
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hwversion; int fwversion; } ;
typedef TYPE_1__ elantechhw_t ;
typedef int KBDC ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int,int,int*) ;
 int FUNC_2 (int ,int,int,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(KBDC VAR_0, elantechhw_t *VAR_1)
{
 int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;


 VAR_5 = VAR_1->hwversion;
 VAR_6 = -1;
 switch (VAR_5) {
 case 2:
  VAR_6 = VAR_1->fwversion == 0x020030 ? 0x54 : 0xc4;
  VAR_4 = FUNC_2(VAR_0, VAR_5, 0x10, VAR_6);
  if (VAR_4)
   break;
  VAR_4 = FUNC_2(VAR_0, VAR_5, 0x11, 0x8A);
  break;
 case 3:
  VAR_6 = 0x0b;
  VAR_4 = FUNC_2(VAR_0, VAR_5, 0x10, VAR_6);
  break;
 case 4:
  VAR_4 = FUNC_2(VAR_0, VAR_5, 0x07, 0x01);
  break;
 default:
  VAR_4 = 1;
 }


 if (VAR_4 == 0 && VAR_6 >= 0) {
  for (VAR_2 = 0; VAR_2 < 5; VAR_2++) {
   if (FUNC_1(VAR_0, VAR_5, 0x10, &VAR_3) == 0)
    break;
   FUNC_0(2000);
  }
  if (VAR_2 == 5)
   VAR_4 = 1;
 }

 if (VAR_4)
  FUNC_3("couldn't set absolute mode\n");

 return (VAR_4);
}
