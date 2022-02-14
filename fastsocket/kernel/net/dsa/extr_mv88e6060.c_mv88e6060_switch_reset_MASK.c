
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsa_switch {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct dsa_switch *VAR_2)
{
 int VAR_3;
 int VAR_4;




 for (VAR_3 = 0; VAR_3 < 6; VAR_3++) {
  VAR_4 = FUNC_1(FUNC_0(VAR_3), 0x04);
  FUNC_2(FUNC_0(VAR_3), 0x04, VAR_4 & 0xfffc);
 }




 FUNC_3(2);




 FUNC_2(VAR_1, 0x0a, 0xa130);




 for (VAR_3 = 0; VAR_3 < 1000; VAR_3++) {
  VAR_4 = FUNC_1(VAR_1, 0x00);
  if ((VAR_4 & 0x8000) == 0x0000)
   break;

  FUNC_3(1);
 }
 if (VAR_3 == 1000)
  return -VAR_0;

 return 0;
}
