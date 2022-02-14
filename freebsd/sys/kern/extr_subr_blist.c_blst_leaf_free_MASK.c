
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uintmax_t ;
typedef int u_daddr_t ;
typedef int daddr_t ;
struct TYPE_3__ {int bm_bitmap; } ;
typedef TYPE_1__ blmeta_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void
FUNC_2(blmeta_t *VAR_1, daddr_t VAR_2, int VAR_3)
{
 u_daddr_t VAR_4;







 VAR_4 = FUNC_1(VAR_2 & VAR_0, VAR_3);
 FUNC_0((VAR_1->bm_bitmap & VAR_4) == 0,
     ("freeing free block: %jx, size %d, mask %jx",
     (uintmax_t)VAR_2, VAR_3, (uintmax_t)VAR_1->bm_bitmap & VAR_4));
 VAR_1->bm_bitmap |= VAR_4;
}
