
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int adapter_t ;


 int FUNC_0 (int *,char*,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (int *,unsigned int,int ) ;

__attribute__((used)) static int FUNC_3(adapter_t *VAR_2, unsigned int VAR_3, u32 VAR_4)
{
 FUNC_2(VAR_2, VAR_3, VAR_4);
 (void) FUNC_1(VAR_2, VAR_3);
 if (!(FUNC_1(VAR_2, VAR_3) & VAR_1))
  return 0;
 FUNC_0(VAR_2, "write to MC7 register 0x%x timed out\n", VAR_3);
 return -VAR_0;
}
