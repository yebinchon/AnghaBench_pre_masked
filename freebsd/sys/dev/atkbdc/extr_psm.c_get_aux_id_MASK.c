
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int KBDC ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int
FUNC_5(KBDC VAR_3)
{
 int VAR_4;
 int VAR_5;

 FUNC_2(VAR_3, 5);
 VAR_4 = FUNC_4(VAR_3, VAR_1);
 FUNC_1(2, (VAR_0, "psm: SEND_DEV_ID return code:%04x\n", VAR_4));
 if (VAR_4 != VAR_2)
  return (-1);


 FUNC_0(10000);

 VAR_5 = FUNC_3(VAR_3);
 FUNC_1(2, (VAR_0, "psm: device ID: %04x\n", VAR_5));

 return (VAR_5);
}
