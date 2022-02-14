
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * di_db; int di_gid; int di_uid; int di_flags; int di_rdev; scalar_t__ di_birthnsec; int di_birthtime; int di_mtimensec; int di_mtime; int di_atimensec; int di_atime; scalar_t__ di_extsize; int di_size; int di_mode; } ;
struct TYPE_5__ {int * di_db; int di_gid; int di_uid; int di_flags; int di_rdev; int di_mtimensec; int di_mtime; int di_atimensec; int di_atime; int di_size; int di_mode; } ;
union dinode {TYPE_2__ dp2; TYPE_1__ dp1; } ;
typedef int u_long ;
typedef int off_t ;
typedef int ino_t ;
typedef int caddr_t ;
struct TYPE_8__ {scalar_t__ fs_magic; size_t fs_maxsymlinklen; size_t fs_bsize; size_t fs_frag; int fs_fsize; } ;
struct TYPE_7__ {int c_count; int* c_addr; int c_type; int c_gid; int c_uid; int c_file_flags; int c_rdev; scalar_t__ c_birthtimensec; void* c_birthtime; int c_mtimensec; void* c_mtime; int c_atimensec; void* c_atime; scalar_t__ c_extsize; int c_size; int c_mode; } ;


 int FUNC_0 (int ,int ) ;
 size_t FUNC_1 (union dinode*,int ) ;
 int FUNC_2 (union dinode*,int ,size_t) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;





 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 void* FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (union dinode*) ;
 int VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (union dinode*,int ,size_t,int,int *) ;
 int VAR_13 ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (size_t,int ) ;
 int FUNC_9 (char*,int ,int ) ;
 int FUNC_10 (char*,size_t) ;
 scalar_t__ VAR_14 ;
 TYPE_4__* VAR_15 ;
 TYPE_3__ VAR_16 ;
 int FUNC_11 (int *,int,int ) ;
 int FUNC_12 (union dinode*,int *,int,int ,int) ;
 int FUNC_13 (union dinode*,int ,int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char*,int ) ;

void
FUNC_16(union dinode *VAR_17, ino_t VAR_18)
{
 int VAR_19, VAR_20, VAR_21, VAR_22;
 off_t VAR_23;
 char VAR_24[VAR_4];

 if (VAR_14) {
  VAR_14 = 0;
  FUNC_7(VAR_13, VAR_5, VAR_18);
 }
 FUNC_0(VAR_18, VAR_13);




 if ((FUNC_1(VAR_17, VAR_9) & VAR_2) != 0) {
  FUNC_2(VAR_17, VAR_12, 0);
  FUNC_2(VAR_17, VAR_9, FUNC_1(VAR_17, VAR_9) & ~VAR_2);
 }
 if (VAR_15->fs_magic == VAR_0) {
  VAR_16.c_mode = VAR_17->dp1.di_mode;
  VAR_16.c_size = VAR_17->dp1.di_size;
  VAR_16.c_extsize = 0;
  VAR_16.c_atime = FUNC_3(VAR_17->dp1.di_atime);
  VAR_16.c_atimensec = VAR_17->dp1.di_atimensec;
  VAR_16.c_mtime = FUNC_3(VAR_17->dp1.di_mtime);
  VAR_16.c_mtimensec = VAR_17->dp1.di_mtimensec;
  VAR_16.c_birthtime = 0;
  VAR_16.c_birthtimensec = 0;
  VAR_16.c_rdev = VAR_17->dp1.di_rdev;
  VAR_16.c_file_flags = VAR_17->dp1.di_flags;
  VAR_16.c_uid = VAR_17->dp1.di_uid;
  VAR_16.c_gid = VAR_17->dp1.di_gid;
 } else {
  VAR_16.c_mode = VAR_17->dp2.di_mode;
  VAR_16.c_size = VAR_17->dp2.di_size;
  VAR_16.c_extsize = VAR_17->dp2.di_extsize;
  VAR_16.c_atime = FUNC_4(VAR_17->dp2.di_atime);
  VAR_16.c_atimensec = VAR_17->dp2.di_atimensec;
  VAR_16.c_mtime = FUNC_4(VAR_17->dp2.di_mtime);
  VAR_16.c_mtimensec = VAR_17->dp2.di_mtimensec;
  VAR_16.c_birthtime = FUNC_4(VAR_17->dp2.di_birthtime);
  VAR_16.c_birthtimensec = VAR_17->dp2.di_birthnsec;
  VAR_16.c_rdev = VAR_17->dp2.di_rdev;
  VAR_16.c_file_flags = VAR_17->dp2.di_flags;
  VAR_16.c_uid = VAR_17->dp2.di_uid;
  VAR_16.c_gid = VAR_17->dp2.di_gid;
 }
 VAR_16.c_type = VAR_6;
 VAR_16.c_count = 0;
 switch (FUNC_1(VAR_17, VAR_11) & VAR_3) {

 case 0:



  return;

 case 130:



  if (FUNC_1(VAR_17, VAR_12) > 0 &&
      FUNC_1(VAR_17, VAR_12) < VAR_15->fs_maxsymlinklen) {
   VAR_16.c_addr[0] = 1;
   VAR_16.c_count = 1;
   VAR_22 = FUNC_5(VAR_17);
   FUNC_14(VAR_18);
   if (VAR_15->fs_magic == VAR_0)
    FUNC_9(VAR_24, (caddr_t)VAR_17->dp1.di_db,
        (u_long)FUNC_1(VAR_17, VAR_12));
   else
    FUNC_9(VAR_24, (caddr_t)VAR_17->dp2.di_db,
        (u_long)FUNC_1(VAR_17, VAR_12));
   VAR_24[FUNC_1(VAR_17, VAR_12)] = '\0';
   FUNC_15(VAR_24, 0);
   FUNC_13(VAR_17, VAR_18, VAR_22);
   return;
  }


 case 132:
 case 129:
  if (FUNC_1(VAR_17, VAR_12) > 0)
   break;


 case 131:
 case 128:
 case 133:
 case 134:
  VAR_22 = FUNC_5(VAR_17);
  FUNC_14(VAR_18);
  FUNC_13(VAR_17, VAR_18, VAR_22);
  return;

 default:
  FUNC_10("Warning: undefined file type 0%o\n",
      FUNC_1(VAR_17, VAR_11) & VAR_1);
  return;
 }
 if (FUNC_1(VAR_17, VAR_12) > VAR_7 * VAR_15->fs_bsize) {
  VAR_20 = VAR_7 * VAR_15->fs_frag;
  VAR_21 = 0;
 } else {
  VAR_20 = FUNC_8(FUNC_1(VAR_17, VAR_12), VAR_15->fs_fsize);
  VAR_21 = 1;
 }
 if (VAR_15->fs_magic == VAR_0)
  FUNC_11(&VAR_17->dp1.di_db[0], VAR_20, VAR_18);
 else
  FUNC_12(VAR_17, &VAR_17->dp2.di_db[0], VAR_20, VAR_18, VAR_21);
 if ((VAR_23 = FUNC_1(VAR_17, VAR_12) - VAR_7 * VAR_15->fs_bsize) <= 0)
  return;
 for (VAR_19 = 0; VAR_19 < VAR_8; VAR_19++) {
  FUNC_6(VAR_17, VAR_18, FUNC_1(VAR_17, VAR_10[VAR_19]), VAR_19, &VAR_23);
  if (VAR_23 <= 0)
   return;
 }
}
