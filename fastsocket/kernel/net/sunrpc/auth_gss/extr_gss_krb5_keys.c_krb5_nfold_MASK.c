
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int inbits ;


 int FUNC_0 (int*,int ,int) ;

__attribute__((used)) static void FUNC_1(u32 VAR_0, const u8 *VAR_1,
         u32 VAR_2, u8 *VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7;
 int VAR_8, VAR_9, VAR_10;




 VAR_0 >>= 3;
 VAR_2 >>= 3;



 VAR_4 = VAR_2;
 VAR_5 = VAR_0;

 while (VAR_5 != 0) {
  VAR_6 = VAR_5;
  VAR_5 = VAR_4%VAR_5;
  VAR_4 = VAR_6;
 }

 VAR_7 = VAR_2*VAR_0/VAR_4;



 FUNC_0(VAR_3, 0, VAR_2);
 VAR_8 = 0;



 for (VAR_9 = VAR_7-1; VAR_9 >= 0; VAR_9--) {

  VAR_10 = (


    ((VAR_0 << 3) - 1)


    + (((VAR_0 << 3) + 13) * (VAR_9/VAR_0))


    + ((VAR_0 - (VAR_9 % VAR_0)) << 3)
    ) % (VAR_0 << 3);


  VAR_8 += (((VAR_1[((VAR_0 - 1) - (VAR_10 >> 3)) % VAR_0] << 8)|
      (VAR_1[((VAR_0) - (VAR_10 >> 3)) % VAR_0]))
     >> ((VAR_10 & 7) + 1)) & 0xff;


  VAR_8 += VAR_3[VAR_9 % VAR_2];
  VAR_3[VAR_9 % VAR_2] = VAR_8 & 0xff;


  VAR_8 >>= 8;

 }


 if (VAR_8) {
  for (VAR_9 = VAR_2 - 1; VAR_9 >= 0; VAR_9--) {

   VAR_8 += VAR_3[VAR_9];
   VAR_3[VAR_9] = VAR_8 & 0xff;


   VAR_8 >>= 8;
  }
 }
}
