
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,unsigned char*,int) ;
 scalar_t__ FUNC_1 (int,unsigned char const**,size_t*,unsigned char*) ;

int FUNC_2(const u8 *VAR_1, const u8 *VAR_2,
     const u8 *VAR_3, size_t VAR_4, u8 *VAR_5)
{
 u8 VAR_6[VAR_0];
 const unsigned char *VAR_7[3];
 size_t VAR_8[3];

 VAR_7[0] = VAR_1;
 VAR_8[0] = 16;
 VAR_7[1] = VAR_2;
 VAR_8[1] = 16;
 VAR_7[2] = VAR_3;
 VAR_8[2] = VAR_4;

 if (FUNC_1(3, VAR_7, VAR_8, VAR_6))
  return -1;
 FUNC_0(VAR_5, VAR_6, 8);
 return 0;
}
