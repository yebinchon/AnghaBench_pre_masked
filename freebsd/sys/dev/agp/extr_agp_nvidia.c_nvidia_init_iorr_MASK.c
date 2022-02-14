
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int quad_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static int
FUNC_3(u_int32_t VAR_5, u_int32_t VAR_6)
{
 quad_t VAR_7, VAR_8, VAR_9;
 u_int32_t VAR_10, VAR_11;



 VAR_11 = VAR_0;
 for(VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
  VAR_7 = FUNC_0(VAR_2 + 2 * VAR_10);
  VAR_8 = FUNC_0(VAR_3 + 2 * VAR_10);

  if ((VAR_7 & 0xfffff000ULL) == (VAR_5 & 0xfffff000))
   break;

  if ((VAR_8 & 0x00000800ULL) == 0)
   VAR_11 = VAR_10;
 }

 if (VAR_10 >= VAR_0) {
  VAR_10 = VAR_11;
  if (VAR_10 >= VAR_0)
   return (VAR_1);
 }

 VAR_7 = (VAR_5 & ~0xfff) | 0x18;
 VAR_8 = (0xfULL << 32) | FUNC_1(0xfffff000, VAR_6) | 0x800;
 FUNC_2(VAR_2 + 2 * VAR_10, VAR_7);
 FUNC_2(VAR_3 + 2 * VAR_10, VAR_8);

 VAR_9 = FUNC_0(VAR_4);
 VAR_9 |= 0x00100000ULL;
 FUNC_2(VAR_4, VAR_9);

 return (0);
}
