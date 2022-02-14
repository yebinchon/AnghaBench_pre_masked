
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_daddr_t ;
typedef int daddr_t ;
struct TYPE_4__ {scalar_t__ bm_bitmap; } ;
typedef TYPE_1__ blmeta_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static daddr_t
FUNC_3(blmeta_t *VAR_3, daddr_t VAR_4, daddr_t VAR_5, u_daddr_t VAR_6)
{
 daddr_t VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12;

 if (VAR_6 == VAR_0)
  return (FUNC_0(VAR_3, VAR_4, VAR_5));

 VAR_8 = FUNC_2(VAR_4 + VAR_5, (VAR_4 + VAR_6) & -VAR_6);
 VAR_6 /= VAR_2;
 VAR_11 = FUNC_1(VAR_6);
 VAR_7 = VAR_4 & -VAR_6;
 VAR_10 = 0;
 while (VAR_7 < VAR_8) {
  VAR_12 = (VAR_7 / VAR_6) & VAR_1;
  VAR_9 = 1 + VAR_12 * VAR_11;
  VAR_7 += VAR_6;
  VAR_5 = FUNC_2(VAR_7, VAR_8) - VAR_4;
  VAR_10 += FUNC_3(&VAR_3[VAR_9], VAR_4, VAR_5, VAR_6);
  if (VAR_3[VAR_9].bm_bitmap == 0)
   VAR_3->bm_bitmap &= ~((u_daddr_t)1 << VAR_12);
  VAR_4 = VAR_7;
 }
 return (VAR_10);
}
