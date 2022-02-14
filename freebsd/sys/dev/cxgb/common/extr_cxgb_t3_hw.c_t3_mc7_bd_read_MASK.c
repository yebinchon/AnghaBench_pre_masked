
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct mc7 {int size; int width; scalar_t__ offset; int * adapter; } ;
typedef int adapter_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,scalar_t__,unsigned int) ;

int FUNC_2(struct mc7 *VAR_7, unsigned int VAR_8, unsigned int VAR_9,
                   u64 *VAR_10)
{
 static int VAR_11[] = { 0, 0, 16, 24 };
 static int VAR_12[] = { 0, 32, 16, 8 };

 unsigned int VAR_13 = VAR_7->size / 8;
 adapter_t *VAR_14 = VAR_7->adapter;

 if (VAR_8 >= VAR_13 || VAR_8 + VAR_9 > VAR_13)
  return -VAR_4;

 VAR_8 *= (8 << VAR_7->width);
 while (VAR_9--) {
  int VAR_15;
  u64 VAR_16 = 0;

  for (VAR_15 = (1 << VAR_7->width) - 1; VAR_15 >= 0; --VAR_15) {
   int VAR_17 = 10;
   u32 VAR_18;

   FUNC_1(VAR_14, VAR_7->offset + VAR_0,
           VAR_8);
   FUNC_1(VAR_14, VAR_7->offset + VAR_3, 0);
   VAR_18 = FUNC_0(VAR_14, VAR_7->offset + VAR_3);
   while ((VAR_18 & VAR_6) && VAR_17--)
    VAR_18 = FUNC_0(VAR_14,
        VAR_7->offset + VAR_3);
   if (VAR_18 & VAR_6)
    return -VAR_5;

   VAR_18 = FUNC_0(VAR_14, VAR_7->offset + VAR_2);
   if (VAR_7->width == 0) {
    VAR_16 = FUNC_0(VAR_14,
      VAR_7->offset + VAR_1);
    VAR_16 |= (u64)VAR_18 << 32;
   } else {
    if (VAR_7->width > 1)
     VAR_18 >>= VAR_11[VAR_7->width];
    VAR_16 |= (u64)VAR_18 << (VAR_12[VAR_7->width] * VAR_15);
   }
   VAR_8 += 8;
  }
  *VAR_10++ = VAR_16;
 }
 return 0;
}
