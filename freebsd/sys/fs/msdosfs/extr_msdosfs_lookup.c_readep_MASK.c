
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
struct msdosfsmount {int pm_bpcluster; scalar_t__ pm_rootdirsize; int pm_crbomask; int pm_devvp; } ;
struct direntry {int dummy; } ;
struct buf {int dummy; } ;
typedef int daddr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct direntry* FUNC_0 (struct msdosfsmount*,struct buf*,scalar_t__) ;
 int FUNC_1 (int ,int ,int,int ,struct buf**) ;
 int FUNC_2 (struct buf*) ;
 scalar_t__ FUNC_3 (struct msdosfsmount*,scalar_t__) ;
 int FUNC_4 (struct msdosfsmount*,scalar_t__) ;
 int FUNC_5 (struct msdosfsmount*,scalar_t__,scalar_t__) ;

int
FUNC_6(struct msdosfsmount *VAR_2, u_long VAR_3, u_long VAR_4,
    struct buf **VAR_5, struct direntry **VAR_6)
{
 int VAR_7;
 daddr_t VAR_8;
 int VAR_9;

 VAR_9 = VAR_2->pm_bpcluster;
 if (VAR_3 == VAR_0
     && FUNC_3(VAR_2, VAR_4 + VAR_9) > VAR_2->pm_rootdirsize)
  VAR_9 = FUNC_4(VAR_2, VAR_2->pm_rootdirsize) & VAR_2->pm_crbomask;
 VAR_8 = FUNC_5(VAR_2, VAR_3, VAR_4);
 if ((VAR_7 = FUNC_1(VAR_2->pm_devvp, VAR_8, VAR_9, VAR_1, VAR_5)) != 0) {
  FUNC_2(*VAR_5);
  *VAR_5 = ((void*)0);
  return (VAR_7);
 }
 if (VAR_6)
  *VAR_6 = FUNC_0(VAR_2, *VAR_5, VAR_4);
 return (0);
}
