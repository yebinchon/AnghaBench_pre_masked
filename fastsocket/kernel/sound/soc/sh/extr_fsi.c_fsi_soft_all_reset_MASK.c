
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(void)
{
 u32 VAR_1 = FUNC_0(VAR_0);


 VAR_1 &= 0x000000ff;
 FUNC_1(VAR_0, VAR_1);
 FUNC_2(10);


 VAR_1 &= 0x000000f0;
 FUNC_1(VAR_0, VAR_1);
 VAR_1 |= 0x00000001;
 FUNC_1(VAR_0, VAR_1);
 FUNC_2(10);
}
