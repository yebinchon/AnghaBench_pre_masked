
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
typedef int adapter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int) ;

int FUNC_2(adapter_t *VAR_4, u8 *VAR_5, u16 *VAR_6)
{
 int VAR_7;
 u32 VAR_8;

 if (VAR_5)
  for (VAR_7 = 0; VAR_7 < VAR_3; ++VAR_7) {
   FUNC_1(VAR_4, VAR_0,
         0xffff0000 | VAR_7);
   VAR_8 = FUNC_0(VAR_4, VAR_0);
   if (!(VAR_8 & 0x80000000))
    return -VAR_2;
   *VAR_5++ = (u8)VAR_8;
   *VAR_5++ = (u8)(VAR_8 >> 8);
  }

 if (VAR_6)
  for (VAR_7 = 0; VAR_7 < VAR_3; ++VAR_7) {
   FUNC_1(VAR_4, VAR_1,
         0xffff0000 | VAR_7);
   VAR_8 = FUNC_0(VAR_4, VAR_1);
   if (!(VAR_8 & 0x80000000))
    return -VAR_2;
   *VAR_6++ = (u16)VAR_8;
  }
 return 0;
}
