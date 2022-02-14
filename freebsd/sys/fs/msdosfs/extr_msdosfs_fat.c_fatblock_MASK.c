
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct msdosfsmount {int pm_fatblocksize; int pm_fatblocksec; int pm_FATsecs; int pm_curfat; scalar_t__ pm_fatblk; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static void
FUNC_1(struct msdosfsmount *VAR_1, u_long VAR_2, u_long *VAR_3, u_long *VAR_4,
    u_long *VAR_5)
{
 u_long VAR_6, VAR_7;

 VAR_6 = VAR_2 / VAR_1->pm_fatblocksize * VAR_1->pm_fatblocksec;
 VAR_7 = FUNC_0(VAR_1->pm_fatblocksec, VAR_1->pm_FATsecs - VAR_6)
     * VAR_0;
 VAR_6 += VAR_1->pm_fatblk + VAR_1->pm_curfat * VAR_1->pm_FATsecs;

 if (VAR_3)
  *VAR_3 = VAR_6;
 if (VAR_4)
  *VAR_4 = VAR_7;
 if (VAR_5)
  *VAR_5 = VAR_2 % VAR_1->pm_fatblocksize;
}
