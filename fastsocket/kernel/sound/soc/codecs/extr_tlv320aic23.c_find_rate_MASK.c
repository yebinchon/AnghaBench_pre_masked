
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int FUNC_1 (int,int,int,int,int,int,int,int) ;
 int* VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;

__attribute__((used)) static int FUNC_2(int VAR_7, u32 VAR_8, u32 VAR_9)
{
 int VAR_10, VAR_11;
 int VAR_12 = -1;
 int VAR_13 = -1;
 int VAR_14 = 0;
 unsigned VAR_15 = VAR_2;
 int VAR_16, VAR_17, VAR_18, VAR_19;

 VAR_8 *= VAR_0;
 VAR_9 *= VAR_0;



 VAR_16 = VAR_8 - (VAR_8 >> 5);
 VAR_17 = VAR_8 + (VAR_8 >> 5);
 VAR_18 = VAR_9 - (VAR_9 >> 5);
 VAR_19 = VAR_9 + (VAR_9 >> 5);
 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_3); VAR_10++) {
  int VAR_20 = VAR_7 / VAR_3[VAR_10];
  int VAR_21 = VAR_6[VAR_10];
  for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_4);
    VAR_11++, VAR_21 >>= 1) {
   int VAR_22;
   int VAR_23;
   int VAR_24;
   if ((VAR_21 & 1) == 0)
    continue;
   VAR_22 = VAR_20 * VAR_4[VAR_11];
   VAR_23 = VAR_20 * VAR_5[VAR_11];
   VAR_24 = FUNC_1(VAR_22, VAR_16, VAR_17, VAR_8,
     VAR_23, VAR_18, VAR_19, VAR_9);
   if (VAR_15 > VAR_24) {
    VAR_15 = VAR_24;
    VAR_12 = VAR_10;
    VAR_13 = VAR_11;
    VAR_14 = 0;
   }
   VAR_24 = FUNC_1((VAR_22 >> 1), VAR_16, VAR_17, VAR_8,
     (VAR_23 >> 1), VAR_18, VAR_19, VAR_9);

   if ((VAR_24 != VAR_2) && (VAR_15 >= VAR_24)) {
    VAR_15 = VAR_24;
    VAR_12 = VAR_10;
    VAR_13 = VAR_11;
    VAR_14 = 1;
   }
  }
 }
 return (VAR_13 << 2) | VAR_12 | (VAR_14 << VAR_1);
}
