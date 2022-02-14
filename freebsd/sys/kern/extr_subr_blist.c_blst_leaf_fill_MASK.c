
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_daddr_t ;
typedef int daddr_t ;
struct TYPE_3__ {int bm_bitmap; } ;
typedef TYPE_1__ blmeta_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static daddr_t
FUNC_2(blmeta_t *VAR_1, daddr_t VAR_2, int VAR_3)
{
 daddr_t VAR_4;
 u_daddr_t VAR_5;

 VAR_5 = FUNC_1(VAR_2 & VAR_0, VAR_3);


 VAR_4 = FUNC_0(VAR_1->bm_bitmap & VAR_5);

 VAR_1->bm_bitmap &= ~VAR_5;
 return (VAR_4);
}
