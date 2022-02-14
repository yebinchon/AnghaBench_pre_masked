
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct unionfs_mount {TYPE_2__* um_uppervp; TYPE_1__* um_lowervp; } ;
struct statfs {int f_blocks; int f_bsize; int f_ffree; scalar_t__ f_files; int f_bavail; int f_bfree; int f_iosize; int f_flags; int f_type; } ;
struct mount {int dummy; } ;
typedef int off_t ;
struct TYPE_4__ {int v_mount; } ;
struct TYPE_3__ {int v_mount; } ;


 struct unionfs_mount* FUNC_0 (struct mount*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,void*,void*,void*) ;
 int FUNC_2 (int ,struct statfs*) ;
 int FUNC_3 (struct statfs*,int ) ;
 struct statfs* FUNC_4 (int,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct mount *VAR_3, struct statfs *VAR_4)
{
 struct unionfs_mount *VAR_5;
 int VAR_6;
 struct statfs *VAR_7;
 uint64_t VAR_8;

 VAR_5 = FUNC_0(VAR_3);

 FUNC_1("unionfs_statfs(mp = %p, lvp = %p, uvp = %p)\n",
     (void *)VAR_3, (void *)VAR_5->um_lowervp, (void *)VAR_5->um_uppervp);

 VAR_7 = FUNC_4(sizeof(struct statfs), VAR_0, VAR_1 | VAR_2);

 VAR_6 = FUNC_2(VAR_5->um_lowervp->v_mount, VAR_7);
 if (VAR_6) {
  FUNC_3(VAR_7, VAR_0);
  return (VAR_6);
 }


 VAR_4->f_blocks = VAR_7->f_blocks;
 VAR_4->f_files = VAR_7->f_files;

 VAR_8 = VAR_7->f_bsize;

 VAR_6 = FUNC_2(VAR_5->um_uppervp->v_mount, VAR_7);
 if (VAR_6) {
  FUNC_3(VAR_7, VAR_0);
  return (VAR_6);
 }






 VAR_4->f_type = VAR_7->f_type;
 VAR_4->f_flags = VAR_7->f_flags;
 VAR_4->f_bsize = VAR_7->f_bsize;
 VAR_4->f_iosize = VAR_7->f_iosize;

 if (VAR_7->f_bsize != VAR_8)
  VAR_4->f_blocks = ((off_t)VAR_4->f_blocks * VAR_8) /
      VAR_7->f_bsize;

 VAR_4->f_blocks += VAR_7->f_blocks;
 VAR_4->f_bfree = VAR_7->f_bfree;
 VAR_4->f_bavail = VAR_7->f_bavail;
 VAR_4->f_files += VAR_7->f_files;
 VAR_4->f_ffree = VAR_7->f_ffree;

 FUNC_3(VAR_7, VAR_0);
 return (0);
}
