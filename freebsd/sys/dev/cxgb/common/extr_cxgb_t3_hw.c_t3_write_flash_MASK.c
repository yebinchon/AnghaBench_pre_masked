
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned int u32 ;
typedef int adapter_t ;


 int FUNC_0 (unsigned int*) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (int *,int,int) ;
 unsigned int FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (int const*,int *,unsigned int) ;
 unsigned int FUNC_4 (unsigned int,unsigned int) ;
 int FUNC_5 (int *,unsigned int,int,unsigned int) ;
 unsigned int FUNC_6 (unsigned int) ;
 int FUNC_7 (int *,unsigned int,int ,unsigned int*,int) ;

__attribute__((used)) static int FUNC_8(adapter_t *VAR_5, unsigned int VAR_6,
     unsigned int VAR_7, const u8 *VAR_8,
     int VAR_9)
{
 int VAR_10;
 u32 VAR_11[64];
 unsigned int VAR_12, VAR_13, VAR_14, VAR_15 = VAR_6 & 0xff;

 if (VAR_6 + VAR_7 > VAR_3 || VAR_15 + VAR_7 > 256)
  return -VAR_0;

 VAR_14 = FUNC_6(VAR_6) | VAR_2;

 if ((VAR_10 = FUNC_5(VAR_5, 1, 0, VAR_4)) != 0 ||
     (VAR_10 = FUNC_5(VAR_5, 4, 1, VAR_14)) != 0)
  return VAR_10;

 for (VAR_13 = VAR_7; VAR_13; VAR_13 -= VAR_12) {
  VAR_12 = FUNC_4(VAR_13, 4U);
  VAR_14 = *(const u32*)VAR_8;
  VAR_8 += VAR_12;
  if (VAR_9)
   VAR_14 = FUNC_2(VAR_14);

  VAR_10 = FUNC_5(VAR_5, VAR_12, VAR_12 != VAR_13, VAR_14);
  if (VAR_10)
   return VAR_10;
 }
 if ((VAR_10 = FUNC_1(VAR_5, 5, 1)) != 0)
  return VAR_10;


 VAR_10 = FUNC_7(VAR_5, VAR_6 & ~0xff, FUNC_0(VAR_11), VAR_11,
       VAR_9);
 if (VAR_10)
  return VAR_10;

 if (FUNC_3(VAR_8 - VAR_7, (u8 *)VAR_11 + VAR_15, VAR_7))
  return -VAR_1;
 return 0;
}
