
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ u_long ;
struct msdosfsmount {int pm_flags; scalar_t__ pm_fatblk; int pm_FATs; scalar_t__ pm_FATsecs; TYPE_1__* pm_mountp; int pm_devvp; } ;
struct buf {scalar_t__ b_data; int b_bcount; } ;
struct TYPE_2__ {int mnt_flag; } ;


 scalar_t__ FUNC_0 (struct msdosfsmount*) ;
 scalar_t__ FUNC_1 (struct msdosfsmount*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct buf*) ;
 int FUNC_3 (struct buf*) ;
 struct buf* FUNC_4 (int ,scalar_t__,int ,int ,int ,int ) ;
 int FUNC_5 (scalar_t__,scalar_t__,int ) ;
 int FUNC_6 (char*,struct msdosfsmount*,struct buf*,scalar_t__) ;

__attribute__((used)) static void
FUNC_7(struct msdosfsmount *VAR_2, struct buf *VAR_3, u_long VAR_4)
{
 struct buf *VAR_5;
 int VAR_6, VAR_7;





 if (VAR_2->pm_flags & VAR_1) {
  if (VAR_4 != VAR_2->pm_fatblk || FUNC_0(VAR_2))
   VAR_6 = 0;
  else if (FUNC_1(VAR_2))
   VAR_6 = 16;
  else
   VAR_6 = 32;
  for (VAR_7 = 1; VAR_7 < VAR_2->pm_FATs; VAR_7++) {
   VAR_4 += VAR_2->pm_FATsecs;

   VAR_5 = FUNC_4(VAR_2->pm_devvp, VAR_4, VAR_3->b_bcount,
       0, 0, 0);
   FUNC_5(VAR_5->b_data, VAR_3->b_data, VAR_3->b_bcount);

   if (VAR_6 == 16)
    ((uint8_t *)VAR_5->b_data)[3] |= 0x80;
   else if (VAR_6 == 32)
    ((uint8_t *)VAR_5->b_data)[7] |= 0x08;
   if (VAR_2->pm_mountp->mnt_flag & VAR_0)
    FUNC_3(VAR_5);
   else
    FUNC_2(VAR_5);
  }
 }




 if (VAR_2->pm_mountp->mnt_flag & VAR_0)
  FUNC_3(VAR_3);
 else
  FUNC_2(VAR_3);
}
