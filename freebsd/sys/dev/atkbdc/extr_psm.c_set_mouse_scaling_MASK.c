
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int KBDC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int
FUNC_2(KBDC VAR_4, int VAR_5)
{
 int VAR_6;

 switch (VAR_5) {
 case 1:
 default:
  VAR_5 = VAR_1;
  break;
 case 2:
  VAR_5 = VAR_2;
  break;
 }
 VAR_6 = FUNC_1(VAR_4, VAR_5);
 FUNC_0(2, (VAR_0, "psm: SET_SCALING%s return code:%04x\n",
     (VAR_5 == VAR_2) ? "21" : "11", VAR_6));

 return (VAR_6 == VAR_3);
}
