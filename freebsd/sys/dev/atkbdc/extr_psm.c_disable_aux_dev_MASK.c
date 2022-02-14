
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int KBDC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(KBDC VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_1);
 FUNC_0(2, (VAR_0, "psm: DISABLE_DEV return code:%04x\n", VAR_4));

 return (VAR_4 == VAR_2);
}
