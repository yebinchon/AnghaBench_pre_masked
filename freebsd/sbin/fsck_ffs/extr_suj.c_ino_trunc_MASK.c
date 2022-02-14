
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef union dinode {int dummy; } dinode ;
typedef int uintmax_t ;
typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef size_t ufs_lbn_t ;
typedef scalar_t__ ufs2_daddr_t ;
typedef scalar_t__ off_t ;
typedef scalar_t__ ino_t ;
struct TYPE_10__ {int fs_frag; int fs_fsize; scalar_t__ fs_maxsymlinklen; } ;


 scalar_t__ FUNC_0 (union dinode*,int ) ;
 int FUNC_1 (union dinode*,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t FUNC_2 (TYPE_1__*) ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (scalar_t__,int ,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,scalar_t__) ;
 int FUNC_5 (TYPE_1__*,scalar_t__) ;
 int FUNC_6 (int *,long) ;
 int FUNC_7 (scalar_t__) ;
 int * FUNC_8 (scalar_t__,long) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_9 (char*,int ,int) ;
 TYPE_1__* VAR_15 ;
 scalar_t__ FUNC_10 (TYPE_1__*,scalar_t__) ;
 int FUNC_11 (scalar_t__,size_t,scalar_t__,size_t) ;
 scalar_t__ FUNC_12 (union dinode*,scalar_t__,int,int*) ;
 int FUNC_13 (scalar_t__) ;
 union dinode* FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (union dinode*,scalar_t__,int ,int) ;
 size_t FUNC_16 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_17 (TYPE_1__*,int) ;
 int VAR_16 ;
 scalar_t__ FUNC_18 (TYPE_1__*,long) ;
 int FUNC_19 (char*,int ,int,scalar_t__,scalar_t__) ;
 void* FUNC_20 (TYPE_1__*,scalar_t__,int) ;
 int VAR_17 ;

__attribute__((used)) static void
FUNC_21(ino_t VAR_18, off_t VAR_19)
{
 union dinode *VAR_20;
 ufs2_daddr_t VAR_21;
 uint64_t VAR_22;
 ufs_lbn_t VAR_23;
 ufs_lbn_t VAR_24;
 ufs_lbn_t VAR_25;
 ufs_lbn_t VAR_26;
 ufs_lbn_t VAR_27;
 int VAR_28;
 off_t VAR_29;
 off_t VAR_30;
 int VAR_31;

 VAR_20 = FUNC_14(VAR_18);
 VAR_31 = FUNC_0(VAR_20, VAR_13) & VAR_4;
 VAR_29 = FUNC_0(VAR_20, VAR_14);
 if (VAR_9)
  FUNC_19("Truncating ino %ju, mode %o to size %jd from size %jd\n",
      (uintmax_t)VAR_18, VAR_31, VAR_19, VAR_29);


 if (VAR_31 == 0 || VAR_31 == VAR_0 || VAR_31 == VAR_1 ||
     (VAR_31 == VAR_3 && VAR_29 < VAR_15->fs_maxsymlinklen))
  return;

 if (VAR_19 > VAR_29)
  VAR_19 = VAR_29;
 VAR_24 = FUNC_16(VAR_15, FUNC_5(VAR_15, VAR_19));
 for (VAR_27 = VAR_24; VAR_27 < VAR_5; VAR_27++) {
  if (FUNC_0(VAR_20, VAR_11[VAR_27]) == 0)
   continue;
  VAR_28 = FUNC_20(VAR_15, VAR_29, VAR_27);
  VAR_28 = FUNC_18(VAR_15, VAR_28);
  FUNC_3(FUNC_0(VAR_20, VAR_11[VAR_27]), 0, VAR_28);
  FUNC_1(VAR_20, VAR_11[VAR_27], 0);
 }



 for (VAR_27 = 0, VAR_25 = FUNC_2(VAR_15), VAR_26 = VAR_5; VAR_27 < VAR_6; VAR_27++,
     VAR_26 = VAR_23) {
  VAR_23 = VAR_26 + VAR_25;
  VAR_25 *= FUNC_2(VAR_15);

  if (VAR_24 >= VAR_23)
   continue;
  if (FUNC_0(VAR_20, VAR_12[VAR_27]) == 0)
   continue;
  FUNC_11(VAR_18, -VAR_26 - VAR_27, FUNC_0(VAR_20, VAR_12[VAR_27]), VAR_24);

  if (VAR_24 > VAR_26)
   continue;
  FUNC_3(FUNC_0(VAR_20, VAR_12[VAR_27]), 0, VAR_15->fs_frag);
  FUNC_1(VAR_20, VAR_12[VAR_27], 0);
 }
 FUNC_13(VAR_18);







 VAR_17 = 0;
 VAR_22 = FUNC_15(VAR_20, VAR_18, VAR_16, VAR_8 | VAR_7);
 if (VAR_19 > FUNC_17(VAR_15, VAR_17 + 1))
  VAR_19 = FUNC_17(VAR_15, VAR_17 + 1);




 if (VAR_17 < VAR_5 && VAR_22) {
  long VAR_32, VAR_33;

  VAR_21 = FUNC_0(VAR_20, VAR_11[VAR_17]);
  if (VAR_21 == 0)
   FUNC_9("Bad blk at ino %ju lbn %jd\n",
       (uintmax_t)VAR_18, VAR_17);
  VAR_32 = FUNC_20(VAR_15, VAR_29, VAR_17);
  VAR_33 = FUNC_20(VAR_15, VAR_19, VAR_17);
  if (VAR_32 != VAR_33) {
   VAR_21 += FUNC_18(VAR_15, VAR_33);
   VAR_28 = FUNC_18(VAR_15, VAR_32 - VAR_33);
   FUNC_3(VAR_21, 0, VAR_28);
   VAR_22 -= VAR_28;
  }
 }
 FUNC_1(VAR_20, VAR_10, FUNC_10(VAR_15, VAR_22));
 FUNC_1(VAR_20, VAR_14, VAR_19);





 VAR_30 = FUNC_4(VAR_15, VAR_19);
 if (VAR_30 && FUNC_0(VAR_20, VAR_13) != VAR_2) {
  uint8_t *VAR_34;
  long VAR_35;

  VAR_21 = FUNC_12(VAR_20, VAR_18, VAR_17, &VAR_28);
  if (VAR_21 == 0)
   FUNC_9("Block missing from ino %ju at lbn %jd\n",
       (uintmax_t)VAR_18, VAR_17);
  VAR_35 = VAR_28 * VAR_15->fs_fsize;
  VAR_34 = FUNC_8(VAR_21, VAR_35);
  VAR_35 -= VAR_30;
  VAR_34 += VAR_30;
  FUNC_6(VAR_34, VAR_35);
  FUNC_7(VAR_21);
 }
 return;
}
