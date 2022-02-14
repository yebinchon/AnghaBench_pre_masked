
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ di_extsize; scalar_t__* di_extb; } ;
union dinode {TYPE_1__ dp2; } ;
typedef scalar_t__ uint64_t ;
typedef int ufs_lbn_t ;
typedef int (* ino_visitor ) (int ,int,scalar_t__,int) ;
typedef int ino_t ;
struct TYPE_7__ {scalar_t__ fs_magic; scalar_t__ fs_maxsymlinklen; } ;


 scalar_t__ FUNC_0 (union dinode*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_2__* VAR_14 ;
 int FUNC_2 (int ,int,scalar_t__,scalar_t__*,int (*) (int ,int,scalar_t__,int),int) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,scalar_t__,int) ;

__attribute__((used)) static uint64_t
FUNC_5(union dinode *VAR_15, ino_t VAR_16, ino_visitor VAR_17, int VAR_18)
{
 ufs_lbn_t VAR_19;
 ufs_lbn_t VAR_20;
 ufs_lbn_t VAR_21;
 uint64_t VAR_22;
 uint64_t VAR_23;
 int VAR_24;
 int VAR_25;
 int VAR_26;

 VAR_22 = FUNC_0(VAR_15, VAR_13);
 VAR_24 = FUNC_0(VAR_15, VAR_12) & VAR_4;
 VAR_23 = 0;
 if ((VAR_18 & VAR_8) &&
     VAR_14->fs_magic == VAR_0 && VAR_15->dp2.di_extsize) {
  for (VAR_26 = 0; VAR_26 < VAR_7; VAR_26++) {
   if (VAR_15->dp2.di_extb[VAR_26] == 0)
    continue;
   VAR_25 = FUNC_4(VAR_14, VAR_15->dp2.di_extsize, VAR_26);
   VAR_25 = FUNC_3(VAR_14, VAR_25);
   VAR_23 += VAR_25;
   VAR_17(VAR_16, -1 - VAR_26, VAR_15->dp2.di_extb[VAR_26], VAR_25);
  }
 }

 if (VAR_24 == VAR_1 || VAR_24 == VAR_2 ||
     (VAR_24 == VAR_3 && VAR_22 < VAR_14->fs_maxsymlinklen))
  return (VAR_23);
 for (VAR_26 = 0; VAR_26 < VAR_5; VAR_26++) {
  if (FUNC_0(VAR_15, VAR_10[VAR_26]) == 0)
   continue;
  VAR_25 = FUNC_4(VAR_14, VAR_22, VAR_26);
  VAR_25 = FUNC_3(VAR_14, VAR_25);
  VAR_23 += VAR_25;
  VAR_17(VAR_16, VAR_26, FUNC_0(VAR_15, VAR_10[VAR_26]), VAR_25);
 }




 VAR_18 |= VAR_9;
 for (VAR_26 = 0, VAR_20 = FUNC_1(VAR_14), VAR_21 = VAR_5; VAR_26 < VAR_6; VAR_26++,
     VAR_21 = VAR_19) {
  VAR_19 = VAR_21 + VAR_20;
  VAR_20 *= FUNC_1(VAR_14);
  if (FUNC_0(VAR_15, VAR_11[VAR_26]) == 0)
   continue;
  FUNC_2(VAR_16, -VAR_21 - VAR_26, FUNC_0(VAR_15, VAR_11[VAR_26]), &VAR_23, VAR_17,
      VAR_18);
 }
 return (VAR_23);
}
