
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int const*,size_t) ;

u8 * FUNC_2(u8 *VAR_2, u32 VAR_3, const u8 *VAR_4, size_t VAR_5,
   const u8 *VAR_6, size_t VAR_7)
{
 *VAR_2++ = VAR_1;
 *VAR_2++ = VAR_0 + VAR_5 + VAR_7;
 FUNC_0(VAR_2, VAR_3);
 VAR_2 += VAR_0;
 FUNC_1(VAR_2, VAR_4, VAR_5);
 VAR_2 += VAR_5;
 if (VAR_6) {
  FUNC_1(VAR_2, VAR_6, VAR_7);
  VAR_2 += VAR_7;
 }
 return VAR_2;
}
