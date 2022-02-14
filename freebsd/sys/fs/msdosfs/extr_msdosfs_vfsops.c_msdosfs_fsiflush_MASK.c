
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msdosfsmount {scalar_t__ pm_fsinfo; int pm_flags; int pm_nxtfree; int pm_freeclustercount; int pm_BytesPerSec; int pm_devvp; } ;
struct fsinfo {int fsinxtfree; int fsinfree; } ;
struct buf {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct msdosfsmount*) ;
 int FUNC_1 (struct msdosfsmount*) ;
 int VAR_2 ;
 int FUNC_2 (struct buf*) ;
 int FUNC_3 (int ,scalar_t__,int ,int ,struct buf**) ;
 int FUNC_4 (struct buf*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct msdosfsmount *VAR_3, int VAR_4)
{
 struct fsinfo *VAR_5;
 struct buf *VAR_6;
 int VAR_7;

 FUNC_0(VAR_3);
 if (VAR_3->pm_fsinfo == 0 || (VAR_3->pm_flags & VAR_1) == 0) {
  VAR_7 = 0;
  goto unlock;
 }
 VAR_7 = FUNC_3(VAR_3->pm_devvp, VAR_3->pm_fsinfo, VAR_3->pm_BytesPerSec,
     VAR_2, &VAR_6);
 if (VAR_7 != 0) {
  goto unlock;
 }
 VAR_5 = (struct fsinfo *)VAR_6->b_data;
 FUNC_5(VAR_5->fsinfree, VAR_3->pm_freeclustercount);
 FUNC_5(VAR_5->fsinxtfree, VAR_3->pm_nxtfree);
 VAR_3->pm_flags &= ~VAR_1;
 if (VAR_4 == VAR_0)
  VAR_7 = FUNC_4(VAR_6);
 else
  FUNC_2(VAR_6);
unlock:
 FUNC_1(VAR_3);
 return (VAR_7);
}
