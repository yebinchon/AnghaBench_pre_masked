
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int ibuf ;
typedef int hash ;


 int FUNC_0 (int *,size_t) ;
 scalar_t__ FUNC_1 (int const*,int,int const**,size_t*,int *) ;
 int FUNC_2 (int *,int *,size_t) ;

__attribute__((used)) static int FUNC_3(const u8 *VAR_0 ,
         const u8 *VAR_1 , size_t VAR_2,
         u8 *VAR_3, size_t VAR_4 )
{
 u8 *VAR_5;
 size_t VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 u8 VAR_11[2], VAR_12[16];
 const u8 *VAR_13[2];
 size_t VAR_14[2];

 VAR_8 = sizeof(VAR_12);

 VAR_13[0] = VAR_11;
 VAR_14[0] = sizeof(VAR_11);
 VAR_13[1] = VAR_1;
 VAR_14[1] = VAR_2;

 VAR_5 = VAR_3;
 VAR_9 = VAR_4;
 VAR_7 = (VAR_4 + VAR_8 - 1) / VAR_8;
 for (VAR_6 = 1; VAR_6 <= VAR_7; VAR_6++) {
  FUNC_0(VAR_11, VAR_6);
  if (FUNC_1(VAR_0, 2, VAR_13, VAR_14, VAR_12))
   return -1;
  VAR_10 = VAR_9 > VAR_8 ? VAR_8 : VAR_9;
  FUNC_2(VAR_5, VAR_12, VAR_10);
  VAR_5 += VAR_10;
  VAR_9 -= VAR_10;
 }

 return 0;
}
