
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_daddr_t ;
typedef int daddr_t ;
struct TYPE_4__ {int bm_bitmap; int bm_bighint; } ;
typedef TYPE_1__ blmeta_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*,int,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static daddr_t
FUNC_5(blmeta_t *VAR_4, daddr_t VAR_5, int *VAR_6, int VAR_7)
{
 u_daddr_t VAR_8, VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;

 VAR_14 = 0;
 VAR_10 = *VAR_6 - 1;
 VAR_13 = FUNC_4(VAR_10);
 VAR_9 = VAR_4->bm_bitmap;
 while (FUNC_3(VAR_9) != 0 && VAR_13 > 0) {
  VAR_13--;
  VAR_15 = VAR_14 + ((VAR_10 >> VAR_13) & 1);






  VAR_9 &= (daddr_t)VAR_9 >> VAR_15;
  VAR_14 += VAR_15;
 }
 if (VAR_9 == 0) {




  VAR_4->bm_bighint = VAR_14;
  return (VAR_3);
 }


 if ((VAR_5 & VAR_0) != 0) {
  VAR_8 = VAR_9 & FUNC_1(0, VAR_5 & VAR_0);
  if (VAR_8 != 0) {
   VAR_9 ^= VAR_8;
   if (VAR_9 == 0)
    return (VAR_3);






   VAR_14 = VAR_2 - 1;
  }
  VAR_5 &= ~VAR_0;
 }





 VAR_12 = FUNC_0(VAR_9);




 if (FUNC_3(VAR_9) != 0) {

  VAR_11 = FUNC_0(FUNC_3(VAR_9)) + VAR_10;
  if (VAR_7 < VAR_11 - VAR_12)
   VAR_11 = VAR_12 + VAR_7;
  *VAR_6 = VAR_11 - VAR_12;
  VAR_9 = FUNC_1(VAR_12, *VAR_6);
 } else if (VAR_7 <= VAR_1 - VAR_12) {

  VAR_11 = VAR_12 + VAR_7;
  *VAR_6 = VAR_7;
  VAR_9 = FUNC_1(VAR_12, *VAR_6);
 } else {

  VAR_10 = *VAR_6 - (VAR_1 - VAR_12);
  VAR_7 -= VAR_1 - VAR_12;
  VAR_11 = FUNC_2(VAR_4, VAR_5, VAR_10, VAR_7);
  if (VAR_11 < VAR_10)
   return (VAR_3);
  *VAR_6 = VAR_1 - VAR_12 + VAR_11;
  VAR_11 = VAR_1;
 }

 if (VAR_11 == VAR_1) {




  VAR_4->bm_bighint = VAR_14;
 }

 VAR_4->bm_bitmap &= ~VAR_9;
 return (VAR_5 + VAR_12);
}
