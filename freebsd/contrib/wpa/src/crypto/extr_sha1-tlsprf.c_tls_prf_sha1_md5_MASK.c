
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,int) ;
 int FUNC_1 (unsigned char const*,size_t,unsigned char*,int,unsigned char*) ;
 int FUNC_2 (unsigned char const*,size_t,int,unsigned char const**,size_t*,unsigned char*) ;
 int FUNC_3 (unsigned char const*,size_t,unsigned char*,int,unsigned char*) ;
 int FUNC_4 (unsigned char const*,size_t,int,unsigned char const**,size_t*,unsigned char*) ;
 size_t FUNC_5 (char const*) ;

int FUNC_6(const u8 *VAR_2, size_t VAR_3, const char *VAR_4,
       const u8 *VAR_5, size_t VAR_6, u8 *VAR_7, size_t VAR_8)
{
 size_t VAR_9, VAR_10, VAR_11;
 const u8 *VAR_12, *VAR_13;
 u8 VAR_14[VAR_0], VAR_15[VAR_1];
 u8 VAR_16[VAR_0], VAR_17[VAR_1];
 int VAR_18, VAR_19;
 const u8 *VAR_20[3];
 size_t VAR_21[3];
 const unsigned char *VAR_22[3];
 size_t VAR_23[3];

 VAR_20[0] = VAR_14;
 VAR_21[0] = VAR_0;
 VAR_20[1] = (unsigned char *) VAR_4;
 VAR_21[1] = FUNC_5(VAR_4);
 VAR_20[2] = VAR_5;
 VAR_21[2] = VAR_6;

 VAR_22[0] = VAR_15;
 VAR_23[0] = VAR_1;
 VAR_22[1] = (unsigned char *) VAR_4;
 VAR_23[1] = FUNC_5(VAR_4);
 VAR_22[2] = VAR_5;
 VAR_23[2] = VAR_6;







 VAR_9 = VAR_10 = (VAR_3 + 1) / 2;
 VAR_12 = VAR_2;
 VAR_13 = VAR_2 + VAR_9;
 if (VAR_3 & 1) {

  VAR_13--;
 }

 FUNC_2(VAR_12, VAR_9, 2, &VAR_20[1], &VAR_21[1], VAR_14);
 FUNC_4(VAR_13, VAR_10, 2, &VAR_22[1], &VAR_23[1], VAR_15);

 VAR_18 = VAR_0;
 VAR_19 = VAR_1;
 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
  if (VAR_18 == VAR_0) {
   FUNC_2(VAR_12, VAR_9, 3, VAR_20, VAR_21, VAR_16);
   VAR_18 = 0;
   FUNC_1(VAR_12, VAR_9, VAR_14, VAR_0, VAR_14);
  }
  if (VAR_19 == VAR_1) {
   FUNC_4(VAR_13, VAR_10, 3, VAR_22, VAR_23,
      VAR_17);
   VAR_19 = 0;
   FUNC_3(VAR_13, VAR_10, VAR_15, VAR_1, VAR_15);
  }

  VAR_7[VAR_11] = VAR_16[VAR_18] ^ VAR_17[VAR_19];

  VAR_18++;
  VAR_19++;
 }

 FUNC_0(VAR_14, VAR_0);
 FUNC_0(VAR_16, VAR_0);
 FUNC_0(VAR_15, VAR_1);
 FUNC_0(VAR_17, VAR_1);

 return 0;
}
