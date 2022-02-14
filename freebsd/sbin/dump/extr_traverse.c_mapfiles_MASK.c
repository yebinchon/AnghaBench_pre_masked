
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef union dinode {int dummy; } dinode ;
typedef int uintmax_t ;
typedef int u_char ;
struct cg {int cg_initediblk; } ;
typedef int ino_t ;
struct TYPE_4__ {int fs_ncg; int fs_ipg; scalar_t__ fs_magic; int fs_flags; int fs_cgsize; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (union dinode*,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (union dinode*) ;
 int FUNC_4 (int ,char*,int ) ;
 scalar_t__ FUNC_5 (union dinode*) ;
 int FUNC_6 (struct cg*) ;
 int* FUNC_7 (struct cg*) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_9 (TYPE_1__*,int ) ;
 union dinode* FUNC_10 (int,int*) ;
 struct cg* FUNC_11 (int ) ;
 int FUNC_12 (char*,int ,int ) ;
 int VAR_12 ;
 int FUNC_13 (char*,...) ;
 TYPE_1__* VAR_13 ;
 int VAR_14 ;

int
FUNC_14(ino_t VAR_15, long *VAR_16)
{
 int VAR_17, VAR_18, VAR_19, VAR_20;
 int VAR_21 = 0;
 union dinode *VAR_22;
 struct cg *VAR_23;
 ino_t VAR_24;
 u_char *VAR_25;

 if ((VAR_23 = FUNC_11(VAR_13->fs_cgsize)) == ((void*)0))
  FUNC_13("mapfiles: cannot allocate memory.\n");
 for (VAR_18 = 0; VAR_18 < VAR_13->fs_ncg; VAR_18++) {
  VAR_24 = VAR_18 * VAR_13->fs_ipg;
  FUNC_4(FUNC_9(VAR_13, FUNC_8(VAR_13, VAR_18)), (char *)VAR_23,
      VAR_13->fs_cgsize);
  if (VAR_13->fs_magic == VAR_2)
   VAR_20 = VAR_23->cg_initediblk;
  else
   VAR_20 = VAR_13->fs_ipg;







  if (VAR_13->fs_flags & VAR_1) {
   if (!FUNC_6(VAR_23))
    FUNC_13("mapfiles: cg %d: bad magic number\n", VAR_18);
   VAR_25 = &FUNC_7(VAR_23)[(VAR_20 - 1) / VAR_0];
   for ( ; VAR_20 > 0; VAR_20 -= VAR_0, VAR_25--) {
    if (*VAR_25 == 0)
     continue;
    for (VAR_17 = 1 << (VAR_0 - 1); VAR_17 > 0; VAR_17 >>= 1) {
     if (*VAR_25 & VAR_17)
      break;
     VAR_20--;
    }
    break;
   }
   if (VAR_20 <= 0)
    continue;
  }
  for (VAR_17 = 0; VAR_17 < VAR_20; VAR_17++, VAR_24++) {
   if (VAR_24 < VAR_7 ||
       (VAR_22 = FUNC_10(VAR_24, &VAR_19)) == ((void*)0) ||
       (VAR_19 & VAR_5) == 0)
    continue;
   if (VAR_24 >= VAR_15) {
    FUNC_12("Skipping inode %ju >= maxino %ju\n",
        (uintmax_t)VAR_24, (uintmax_t)VAR_15);
    continue;
   }






   FUNC_2(VAR_24, VAR_14);
   if (VAR_19 == VAR_3)
    FUNC_2(VAR_24, VAR_10);
   if (FUNC_3(VAR_22)) {
    FUNC_2(VAR_24, VAR_11);
    if (VAR_19 != VAR_6 &&
        VAR_19 != VAR_3 &&
        VAR_19 != VAR_4)
     *VAR_16 += 1;
    else
     *VAR_16 += FUNC_5(VAR_22);
    continue;
   }
   if (VAR_19 == VAR_3) {
    if (!VAR_12 &&
        (FUNC_1(VAR_22, VAR_9) & VAR_8))
     FUNC_0(VAR_24, VAR_14);
    VAR_21 = 1;
   }
  }
 }




 FUNC_2(VAR_7, VAR_11);
 return (VAR_21);
}
