
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int magic1 ;


 int VAR_0 ;
 int FUNC_0 (int*,int*,int) ;
 scalar_t__ FUNC_1 (int,unsigned char const**,size_t const*,int*) ;

int FUNC_2(const u8 *VAR_1, const u8 *VAR_2,
     u8 *VAR_3)
{
 static const u8 VAR_4[27] = {
  0x54, 0x68, 0x69, 0x73, 0x20, 0x69, 0x73, 0x20, 0x74,
  0x68, 0x65, 0x20, 0x4d, 0x50, 0x50, 0x45, 0x20, 0x4d,
  0x61, 0x73, 0x74, 0x65, 0x72, 0x20, 0x4b, 0x65, 0x79
 };
 const unsigned char *VAR_5[3];
 const size_t VAR_6[3] = { 16, 24, sizeof(VAR_4) };
 u8 VAR_7[VAR_0];

 VAR_5[0] = VAR_1;
 VAR_5[1] = VAR_2;
 VAR_5[2] = VAR_4;

 if (FUNC_1(3, VAR_5, VAR_6, VAR_7))
  return -1;
 FUNC_0(VAR_3, VAR_7, 16);
 return 0;
}
