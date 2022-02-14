
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int adapter_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,int*) ;

__attribute__((used)) static int FUNC_2(adapter_t * VAR_0, u32 VAR_1)
{
 u32 VAR_2, VAR_3, VAR_4, VAR_5;
 u8 VAR_6[4];

 VAR_2 = VAR_1 & 0xfffffffc;
 VAR_3 = VAR_1 & 0x03;

 VAR_4 = FUNC_1(VAR_0, VAR_2, &VAR_5);
 if (VAR_4)
  return VAR_4;
 *((u32 *)VAR_6) = FUNC_0(VAR_5);

 if (VAR_6[VAR_3] == 0x78)
  return 1;
 else
  return 0;
}
