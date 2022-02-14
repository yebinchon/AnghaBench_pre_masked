
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
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*,int,int*,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static daddr_t
FUNC_4(blmeta_t *VAR_5, daddr_t VAR_6, int *VAR_7,
    int VAR_8, u_daddr_t VAR_9)
{
 daddr_t VAR_10, VAR_11, VAR_12, VAR_13;
 u_daddr_t VAR_14;
 bool VAR_15;
 int VAR_16;

 if (VAR_9 == VAR_0)
  return (FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8));
 VAR_10 = VAR_6 & -VAR_9;
 VAR_15 = (VAR_6 == VAR_10);
 VAR_9 /= VAR_3;
 VAR_13 = FUNC_3(VAR_9);
 VAR_14 = VAR_5->bm_bitmap;


 VAR_16 = (VAR_6 / VAR_9) & VAR_2;
 VAR_14 &= (u_daddr_t)-1 << VAR_16;
 if (VAR_14 == 0)
  return (VAR_4);






 if (((VAR_14 >> VAR_16) & 1) == 1)
  VAR_6 -= VAR_16 * VAR_9;
 else
  VAR_6 = VAR_10;




 do {
  VAR_16 = FUNC_0(VAR_14);
  VAR_11 = 1 + VAR_16 * VAR_13;
  if (*VAR_7 <= VAR_5[VAR_11].bm_bighint) {



   VAR_12 = FUNC_4(&VAR_5[VAR_11], VAR_6 + VAR_16 * VAR_9,
       VAR_7, VAR_8, VAR_9);
   if (VAR_12 != VAR_4) {
    if (VAR_5[VAR_11].bm_bitmap == 0)
     VAR_5->bm_bitmap ^= FUNC_1(VAR_16, 1);
    return (VAR_12);
   }
  }
  VAR_6 = VAR_10;
 } while ((VAR_14 ^= FUNC_1(VAR_16, 1)) != 0);





 if (VAR_15 && !(VAR_16 == VAR_3 - 1 &&
     VAR_5[VAR_11].bm_bighint == VAR_1))
  VAR_5->bm_bighint = *VAR_7 - 1;

 return (VAR_4);
}
