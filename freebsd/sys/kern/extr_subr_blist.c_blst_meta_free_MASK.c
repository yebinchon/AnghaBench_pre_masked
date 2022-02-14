
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
 int FUNC_0 (int,int) ;
 void FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void
FUNC_4(blmeta_t *VAR_4, daddr_t VAR_5, daddr_t VAR_6, u_daddr_t VAR_7)
{
 daddr_t VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12, VAR_13;







 VAR_4->bm_bighint = VAR_1;

 if (VAR_7 == VAR_0)
  return (FUNC_1(VAR_4, VAR_5, VAR_6));

 VAR_9 = FUNC_3(VAR_5 + VAR_6, (VAR_5 + VAR_7) & -VAR_7);
 VAR_7 /= VAR_3;
 VAR_11 = FUNC_2(VAR_7);
 VAR_8 = VAR_5 & -VAR_7;
 VAR_12 = (VAR_8 / VAR_7) & VAR_2;
 VAR_13 = 1 + (((VAR_9 - 1) / VAR_7) & VAR_2);
 VAR_4->bm_bitmap |= FUNC_0(VAR_12, VAR_13 - VAR_12);
 for (VAR_10 = 1 + VAR_12 * VAR_11; VAR_8 < VAR_9; VAR_10 += VAR_11) {
  VAR_8 += VAR_7;
  VAR_6 = FUNC_3(VAR_8, VAR_9) - VAR_5;
  FUNC_4(&VAR_4[VAR_10], VAR_5, VAR_6, VAR_7);
  VAR_5 = VAR_8;
 }
}
