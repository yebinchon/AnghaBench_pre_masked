
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__ const*,size_t,int,scalar_t__ const**,size_t*,scalar_t__*) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,size_t) ;
 size_t FUNC_2 (char const*) ;

int FUNC_3(u8 VAR_3, const u8 *VAR_4, size_t VAR_5,
  const char *VAR_6,
  const u8 *VAR_7, size_t VAR_8,
  size_t VAR_9, u8 *VAR_10)
{
 u8 VAR_11[VAR_2];
 u8 VAR_12, *VAR_13;
 const u8 *VAR_14[3];
 size_t VAR_15[3];
 size_t VAR_16, VAR_17;

 VAR_16 = (VAR_9 + VAR_1 - 1) / VAR_1;
 if (VAR_6 == ((void*)0) || VAR_16 >= 255)
  return -1;


 if (VAR_3 != VAR_0)
  return -1;

 VAR_14[0] = (const u8 *) VAR_6;
 VAR_15[0] = FUNC_2(VAR_6);
 VAR_14[1] = VAR_7;
 VAR_15[1] = VAR_8;
 VAR_14[2] = &VAR_12;
 VAR_15[2] = 1;

 VAR_13 = VAR_10;
 VAR_17 = VAR_9;
 for (VAR_12 = 1; VAR_12 <= (u8) VAR_16; VAR_12++) {
  size_t VAR_18 = VAR_17 > VAR_1 ? VAR_1 : VAR_17;
  if (FUNC_0(VAR_4, VAR_5, 3, VAR_14, VAR_15, VAR_11) < 0)
   return -1;
  FUNC_1(VAR_13, VAR_11, VAR_18);
  VAR_13 += VAR_18;
  VAR_17 -= VAR_18;
 }

 return 0;
}
