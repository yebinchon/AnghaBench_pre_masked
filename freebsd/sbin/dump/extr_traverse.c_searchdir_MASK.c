
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef union dinode {int dummy; } dinode ;
typedef int uintmax_t ;
typedef int ufs2_daddr_t ;
struct direct {scalar_t__ d_reclen; scalar_t__ d_ino; char* d_name; } ;
typedef scalar_t__ ino_t ;
typedef int * caddr_t ;
struct TYPE_3__ {int fs_bsize; } ;


 int FUNC_0 (scalar_t__,int ) ;
 long VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int ,int *,int) ;
 scalar_t__ FUNC_4 (union dinode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (TYPE_1__*,int ) ;
 union dinode* FUNC_6 (scalar_t__,int*) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (char*,int ,...) ;
 int FUNC_9 (char*) ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_10(
 ino_t VAR_7,
 ufs2_daddr_t VAR_8,
 long VAR_9,
 long VAR_10,
 long *VAR_11,
 int VAR_12,
 ino_t VAR_13)
{
 int VAR_14;
 struct direct *VAR_15;
 union dinode *VAR_16;
 long VAR_17, VAR_18 = 0;
 static caddr_t VAR_19;

 if (VAR_19 == ((void*)0) && (VAR_19 = FUNC_7(VAR_5->fs_bsize)) == ((void*)0))
  FUNC_9("searchdir: cannot allocate indirect memory.\n");
 FUNC_3(FUNC_5(VAR_5, VAR_8), VAR_19, (int)VAR_9);
 if (VAR_10 < VAR_9)
  VAR_9 = VAR_10;
 for (VAR_17 = 0; VAR_17 < VAR_9; ) {
  VAR_15 = (struct direct *)(VAR_19 + VAR_17);
  if (VAR_15->d_reclen == 0) {
   FUNC_8("corrupted directory, inumber %ju\n",
       (uintmax_t)VAR_7);
   break;
  }
  VAR_17 += VAR_15->d_reclen;
  if (VAR_15->d_ino == 0)
   continue;
  if (VAR_15->d_ino >= VAR_13) {
   FUNC_8("corrupted directory entry, d_ino %ju >= %ju\n",
       (uintmax_t)VAR_15->d_ino, (uintmax_t)VAR_13);
   break;
  }
  if (VAR_15->d_name[0] == '.') {
   if (VAR_15->d_name[1] == '\0')
    continue;
   if (VAR_15->d_name[1] == '.' && VAR_15->d_name[2] == '\0')
    continue;
  }
  if (VAR_12) {
   VAR_16 = FUNC_6(VAR_15->d_ino, &VAR_14);
   if (FUNC_2(VAR_15->d_ino, VAR_4)) {
    FUNC_0(VAR_15->d_ino, VAR_4);
    *VAR_11 -= FUNC_4(VAR_16);
   }




   if (VAR_14 == VAR_2) {
    FUNC_1(VAR_15->d_ino, VAR_3);
    FUNC_0(VAR_15->d_ino, VAR_6);
    VAR_18 |= VAR_1;
   }
  } else {
   if (FUNC_2(VAR_15->d_ino, VAR_4)) {
    VAR_18 |= VAR_0;
    if (VAR_18 & VAR_1)
     break;
   }
   if (FUNC_2(VAR_15->d_ino, VAR_3)) {
    VAR_18 |= VAR_1;
    if (VAR_18 & VAR_0)
     break;
   }
  }
 }
 return (VAR_18);
}
