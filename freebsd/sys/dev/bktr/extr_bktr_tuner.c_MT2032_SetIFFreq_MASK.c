
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int bktr_ptr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int,int,int,int,int*,int*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int,int) ;
 int VAR_1 ;
 int FUNC_5 (int ,int) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (char*,char*) ;

__attribute__((used)) static int
FUNC_8(bktr_ptr_t VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 u_char VAR_8[21];
 int VAR_9, VAR_10, VAR_11 = 0;

 if (FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, &VAR_8[0], &VAR_10, VAR_1) == -1)
  return -1;

 FUNC_5(VAR_2, 0);


 FUNC_4(0, VAR_8[0x00]);
 FUNC_4(1, VAR_8[0x01]);
 FUNC_4(2, VAR_8[0x02]);

 FUNC_4(5, VAR_8[0x05]);
 FUNC_4(6, VAR_8[0x06]);
 FUNC_4(7, VAR_8[0x07]);

 FUNC_4(11, VAR_8[0x0B]);
 FUNC_4(12, VAR_8[0x0C]);


 for (VAR_9 = 0; VAR_9 < 2; VAR_9++) {
  VAR_11 = FUNC_1(VAR_2);

  if (VAR_0) {
   VAR_11 = FUNC_3(VAR_2, VAR_10, VAR_11);
  }
  if (VAR_11 == 6) {
   break;
  }

  FUNC_4(7, 0x80 + 8 + VAR_1);
  FUNC_0(10000);
  FUNC_4(7, 8 + VAR_1);
 }
 if (VAR_11 != 6)
  FUNC_7("%s: PLL didn't lock\n", FUNC_6(VAR_2));

 FUNC_4(2, 0x20);

 FUNC_5(VAR_2, 1);
 return 0;
}
