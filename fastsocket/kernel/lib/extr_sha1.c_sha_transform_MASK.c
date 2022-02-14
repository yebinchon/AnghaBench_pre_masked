
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u32 ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (int,int) ;

void FUNC_5(__u32 *VAR_4, const char *VAR_5, __u32 *VAR_6)
{
 __u32 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;

 for (VAR_13 = 0; VAR_13 < 16; VAR_13++)
  VAR_6[VAR_13] = FUNC_0(((const __be32 *)VAR_5)[VAR_13]);

 for (VAR_13 = 0; VAR_13 < 64; VAR_13++)
  VAR_6[VAR_13+16] = FUNC_4(VAR_6[VAR_13+13] ^ VAR_6[VAR_13+8] ^ VAR_6[VAR_13+2] ^ VAR_6[VAR_13], 1);

 VAR_7 = VAR_4[0];
 VAR_8 = VAR_4[1];
 VAR_9 = VAR_4[2];
 VAR_10 = VAR_4[3];
 VAR_11 = VAR_4[4];

 for (VAR_13 = 0; VAR_13 < 20; VAR_13++) {
  VAR_12 = FUNC_1(VAR_8, VAR_9, VAR_10) + VAR_0 + FUNC_4(VAR_7, 5) + VAR_11 + VAR_6[VAR_13];
  VAR_11 = VAR_10; VAR_10 = VAR_9; VAR_9 = FUNC_4(VAR_8, 30); VAR_8 = VAR_7; VAR_7 = VAR_12;
 }

 for (; VAR_13 < 40; VAR_13 ++) {
  VAR_12 = FUNC_2(VAR_8, VAR_9, VAR_10) + VAR_1 + FUNC_4(VAR_7, 5) + VAR_11 + VAR_6[VAR_13];
  VAR_11 = VAR_10; VAR_10 = VAR_9; VAR_9 = FUNC_4(VAR_8, 30); VAR_8 = VAR_7; VAR_7 = VAR_12;
 }

 for (; VAR_13 < 60; VAR_13 ++) {
  VAR_12 = FUNC_3(VAR_8, VAR_9, VAR_10) + VAR_2 + FUNC_4(VAR_7, 5) + VAR_11 + VAR_6[VAR_13];
  VAR_11 = VAR_10; VAR_10 = VAR_9; VAR_9 = FUNC_4(VAR_8, 30); VAR_8 = VAR_7; VAR_7 = VAR_12;
 }

 for (; VAR_13 < 80; VAR_13 ++) {
  VAR_12 = FUNC_2(VAR_8, VAR_9, VAR_10) + VAR_3 + FUNC_4(VAR_7, 5) + VAR_11 + VAR_6[VAR_13];
  VAR_11 = VAR_10; VAR_10 = VAR_9; VAR_9 = FUNC_4(VAR_8, 30); VAR_8 = VAR_7; VAR_7 = VAR_12;
 }

 VAR_4[0] += VAR_7;
 VAR_4[1] += VAR_8;
 VAR_4[2] += VAR_9;
 VAR_4[3] += VAR_10;
 VAR_4[4] += VAR_11;
}
