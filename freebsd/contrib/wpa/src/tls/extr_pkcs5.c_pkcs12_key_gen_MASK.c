
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,unsigned int) ;
 int FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (unsigned int) ;
 int FUNC_4 (int *,int *,unsigned int) ;
 int FUNC_5 (int *,int ,unsigned int) ;
 scalar_t__ FUNC_6 (int,int const**,size_t*,int *) ;

__attribute__((used)) static int FUNC_7(const u8 *VAR_1, size_t VAR_2, const u8 *VAR_3,
     size_t VAR_4, u8 VAR_5, unsigned int VAR_6,
     size_t VAR_7, u8 *VAR_8)
{
 unsigned int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 u8 *VAR_14 = ((void*)0), *VAR_15 = ((void*)0), *VAR_16 = ((void*)0), *VAR_17;
 int VAR_18 = -1;


 VAR_9 = VAR_0;
 VAR_10 = 64;


 VAR_14 = FUNC_3(VAR_10);
 if (!VAR_14)
  goto done;
 FUNC_5(VAR_14, VAR_5, VAR_10);


 VAR_11 = VAR_10 * ((VAR_4 + VAR_10 - 1) / VAR_10);
 VAR_12 = VAR_10 * ((VAR_2 + VAR_10 - 1) / VAR_10);
 VAR_15 = FUNC_3(VAR_11 + VAR_12);
 if (!VAR_15)
  goto done;
 VAR_17 = VAR_15;
 if (VAR_4) {
  for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++)
   *VAR_17++ = VAR_3[VAR_13 % VAR_4];
 }
 if (VAR_2) {
  for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++)
   *VAR_17++ = VAR_1[VAR_13 % VAR_2];
 }

 VAR_16 = FUNC_3(VAR_10);
 if (!VAR_16)
  goto done;

 for (;;) {
  u8 VAR_19[VAR_0];
  const u8 *VAR_20[2];
  size_t VAR_21[2];

  VAR_20[0] = VAR_14;
  VAR_21[0] = VAR_10;
  VAR_20[1] = VAR_15;
  VAR_21[1] = VAR_11 + VAR_12;
  if (FUNC_6(2, VAR_20, VAR_21, VAR_19) < 0)
   goto done;

  VAR_20[0] = VAR_19;
  VAR_21[0] = VAR_0;
  for (VAR_13 = 1; VAR_13 < VAR_6; VAR_13++) {
   if (FUNC_6(1, VAR_20, VAR_21, VAR_19) < 0)
    goto done;
  }

  if (VAR_7 <= VAR_9) {
   FUNC_4(VAR_8, VAR_19, VAR_7);
   VAR_18 = 0;
   goto done;
  }

  FUNC_4(VAR_8, VAR_19, VAR_9);
  VAR_8 += VAR_9;
  VAR_7 -= VAR_9;



  for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++)
   VAR_16[VAR_13] = VAR_19[VAR_13 % VAR_9];
  FUNC_1(VAR_16, VAR_10);
  for (VAR_13 = 0; VAR_13 < VAR_11 + VAR_12; VAR_13 += VAR_10)
   FUNC_0(&VAR_15[VAR_13], VAR_16, VAR_10);
 }

done:
 FUNC_2(VAR_16);
 FUNC_2(VAR_15);
 FUNC_2(VAR_14);
 return VAR_18;
}
