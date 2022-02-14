
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int adapter_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,int*) ;

__attribute__((used)) static int FUNC_2(adapter_t *VAR_0, u32 VAR_1)
{
 u32 VAR_2, VAR_3, VAR_4, VAR_5 = 0;
 u8 VAR_6, VAR_7[8];
 int VAR_8;

 VAR_2 = VAR_1 & 0xfffffffc;
 VAR_4 = VAR_1 & 0x03;

 VAR_8 = FUNC_1(VAR_0, VAR_2, &VAR_3);
 if (VAR_8 < 0)
  return VAR_8;

 *((u32 *)VAR_7) = FUNC_0(VAR_3);

 VAR_6 = VAR_7[VAR_4];
 if (VAR_6 & 0x80) {
  VAR_8 = FUNC_1(VAR_0, VAR_2 + 4, &VAR_3);
  if (VAR_8 < 0)
   return VAR_8;

  *((u32 *)(&VAR_7[4])) = FUNC_0(VAR_3);
  VAR_5 = (VAR_7[VAR_4 + 1] & 0xff) +
        ((VAR_7[VAR_4+2] << 8) & 0xff00) + 3;
 } else
  VAR_5 = (VAR_6 & 0x07) + 1;

 return VAR_5;
}
