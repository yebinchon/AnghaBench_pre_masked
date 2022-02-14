
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int,int,int,int) ;

void FUNC_3(int VAR_0, uint64_t VAR_1, uint64_t VAR_2,
   uint64_t VAR_3, uint64_t VAR_4) {
 uint64_t VAR_5, VAR_6, VAR_7, VAR_8;

 if ( FUNC_0(VAR_3) ) {
  if ( (FUNC_1(VAR_3) & 1 ) == 0) {


   if ((VAR_1 >> FUNC_1(VAR_3) & 1)) {
    VAR_5 = 0;
    VAR_6 = ((VAR_2 >> 12) << 6) | VAR_4;
    VAR_7 = ((VAR_1 - VAR_3) >> 12) << 12;
   }else {
    VAR_5 = ((VAR_2 >> 12) << 6) | VAR_4;
    VAR_6 = 0;
    VAR_7 = ((VAR_1) >> 12) << 12;
   }
   VAR_8 = (VAR_3 - 1) & (~1<<11);
  }else {
   VAR_5 = ((VAR_2 >> 12)<< 6) | VAR_4;
   VAR_6 = (((VAR_2 + VAR_3 /2) >> 12) << 6) | VAR_4;
   VAR_7 = ((VAR_1) >> 12) << 12;
   VAR_8 = ((VAR_3/2) -1) & (~1<<11);
  }


         FUNC_2(VAR_0, VAR_7, VAR_5, VAR_6, VAR_8);

 }
}
