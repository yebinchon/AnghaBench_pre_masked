
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__* di_extb; scalar_t__ di_extsize; } ;
union dinode {TYPE_1__ dp2; } ;
typedef int ufs_lbn_t ;
typedef scalar_t__ ufs2_daddr_t ;
typedef int ino_t ;
struct TYPE_8__ {int fs_frag; scalar_t__ fs_maxsymlinklen; } ;


 scalar_t__ FUNC_0 (union dinode*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (char*,int) ;
 TYPE_2__* VAR_8 ;
 scalar_t__ FUNC_3 (scalar_t__,int ,int,int) ;
 int FUNC_4 (TYPE_2__*,scalar_t__) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*,scalar_t__,int) ;

__attribute__((used)) static ufs2_daddr_t
FUNC_7(union dinode *VAR_9, ino_t VAR_10, ufs_lbn_t VAR_11, int *VAR_12)
{
 ufs_lbn_t VAR_13;
 ufs_lbn_t VAR_14;
 ufs_lbn_t VAR_15;
 int VAR_16;




 if (VAR_11 < 0 && VAR_11 >= -VAR_3) {
  VAR_11 = -1 - VAR_11;
  if (VAR_11 > FUNC_4(VAR_8, VAR_9->dp2.di_extsize - 1))
   return (0);
  *VAR_12 = FUNC_5(VAR_8, FUNC_6(VAR_8, VAR_9->dp2.di_extsize, VAR_11));
  return (VAR_9->dp2.di_extb[VAR_11]);
 }



 if (FUNC_0(VAR_9, VAR_6) == VAR_0 &&
     FUNC_0(VAR_9, VAR_7) < VAR_8->fs_maxsymlinklen)
  return (0);
 if (VAR_11 >= 0 && VAR_11 < VAR_1) {
  *VAR_12 = FUNC_5(VAR_8, FUNC_6(VAR_8, FUNC_0(VAR_9, VAR_7), VAR_11));
  return (FUNC_0(VAR_9, VAR_4[VAR_11]));
 }
 *VAR_12 = VAR_8->fs_frag;

 for (VAR_16 = 0, VAR_13 = FUNC_1(VAR_8), VAR_14 = VAR_1; VAR_16 < VAR_2; VAR_16++,
     VAR_13 *= FUNC_1(VAR_8), VAR_14 = VAR_15) {
  VAR_15 = VAR_14 + VAR_13;
  if (VAR_11 == -VAR_14 - VAR_16)
   return (FUNC_0(VAR_9, VAR_5[VAR_16]));



  if (VAR_11 < 0 && -VAR_11 >= VAR_15)
   continue;
  if (VAR_11 > 0 && VAR_11 >= VAR_15)
   continue;
  return FUNC_3(FUNC_0(VAR_9, VAR_5[VAR_16]), VAR_10, -VAR_14 - VAR_16, VAR_11);
 }
 FUNC_2("lbn %jd not in ino\n", VAR_11);

}
