
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_daddr_t ;
typedef scalar_t__ daddr_t ;
struct TYPE_3__ {int bm_bitmap; } ;
typedef TYPE_1__ blmeta_t ;
typedef int blist_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static void
FUNC_2(blmeta_t *VAR_2, daddr_t VAR_3, daddr_t VAR_4, blist_t VAR_5,
    daddr_t VAR_6)
{
 daddr_t VAR_7, VAR_8, VAR_9;





 if (VAR_4 == VAR_0) {
  u_daddr_t VAR_10 = VAR_2->bm_bitmap;

  if (VAR_10 == (u_daddr_t)-1) {
   FUNC_0(VAR_5, VAR_3, VAR_6);
  } else if (VAR_10 != 0) {
   int VAR_11;

   for (VAR_11 = 0; VAR_11 < VAR_6; ++VAR_11) {
    if (VAR_10 & ((u_daddr_t)1 << VAR_11))
     FUNC_0(VAR_5, VAR_3 + VAR_11, 1);
   }
  }
  return;
 }





 if (VAR_2->bm_bitmap == 0) {



  return;
 }

 VAR_7 = VAR_3 + VAR_6;
 VAR_4 /= VAR_1;
 VAR_9 = FUNC_1(VAR_4);
 for (VAR_8 = 1; VAR_3 < VAR_7; VAR_8 += VAR_9) {
  VAR_3 += VAR_4;
  VAR_6 = VAR_4;
  if (VAR_3 >= VAR_7)
   VAR_6 -= VAR_3 - VAR_7;
  FUNC_2(&VAR_2[VAR_8], VAR_3 - VAR_4, VAR_4, VAR_5, VAR_6);
 }
}
