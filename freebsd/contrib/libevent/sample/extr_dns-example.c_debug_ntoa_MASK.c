
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int buf ;
typedef scalar_t__ a ;


 int FUNC_0 (char*,int,char*,int,int,int,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static const char *
FUNC_2(u32 VAR_0)
{
 static char VAR_1[32];
 u32 VAR_2 = FUNC_1(VAR_0);
 FUNC_0(VAR_1, sizeof(VAR_1), "%d.%d.%d.%d",
     (int)(u8)((VAR_2>>24)&0xff),
     (int)(u8)((VAR_2>>16)&0xff),
     (int)(u8)((VAR_2>>8 )&0xff),
     (int)(u8)((VAR_2 )&0xff));
 return VAR_1;
}
