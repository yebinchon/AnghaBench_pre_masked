
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int bktr_ptr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int VAR_0 ;
 int FUNC_3 (int ,int) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (char*,char*,...) ;

int
FUNC_6(bktr_ptr_t VAR_1)
{
 u_char VAR_2[22];
 int VAR_3, VAR_4 = 0;
 int VAR_5;
 int VAR_6;

 FUNC_3(VAR_1, 0);

 for (VAR_5 = 0; VAR_5 < 21; VAR_5++) {
  if ((VAR_6 = FUNC_1(VAR_5)) == -1)
   break;
  VAR_2[VAR_5] = VAR_6;
 }
 if (VAR_5 < 21)
  return -1;

 FUNC_5("%s: MT2032: Companycode=%02x%02x Part=%02x Revision=%02x\n",
  FUNC_4(VAR_1),
  VAR_2[0x11], VAR_2[0x12], VAR_2[0x13], VAR_2[0x14]);
 if (VAR_2[0x13] != 4) {
  FUNC_5("%s: MT2032 not found or unknown type\n", FUNC_4(VAR_1));
  return -1;
 }


 FUNC_2(2, 0xff);
 FUNC_2(3, 0x0f);
 FUNC_2(4, 0x1f);
 FUNC_2(6, 0xe4);
 FUNC_2(7, 0x8f);
 FUNC_2(8, 0xc3);
 FUNC_2(9, 0x4e);
 FUNC_2(10, 0xec);
 FUNC_2(13, 0x32);


 VAR_3 = 7;
 do {
  FUNC_0(10000);
  VAR_4 = FUNC_1(0x0e) & 0x01;
  if (VAR_4 == 1) {
   break;
  }
  VAR_3--;
  if (VAR_3 == 3) {
   VAR_3 = 4;
   break;
  }
  FUNC_2(7, 0x88 + VAR_3);
 } while (VAR_4 != 1);

 FUNC_3(VAR_1, 1);

 VAR_0 = VAR_3;

 return 0;
}
