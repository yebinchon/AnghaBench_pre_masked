
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct vattr {int va_bytes; } ;
struct statfs {int f_bavail; int f_bsize; } ;
struct TYPE_6__ {int blocksize; } ;
struct ctl_be_block_lun {TYPE_2__* vn; TYPE_1__ cbe_lun; } ;
struct TYPE_8__ {int td_ucred; } ;
struct TYPE_7__ {int v_iflag; int v_mount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct statfs*) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,struct vattr*,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 TYPE_3__* VAR_4 ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int FUNC_4 (TYPE_2__*,int) ;

__attribute__((used)) static uint64_t
FUNC_5(struct ctl_be_block_lun *VAR_5, const char *VAR_6)
{
 struct vattr VAR_7;
 struct statfs VAR_8;
 uint64_t VAR_9;
 int VAR_10;

 VAR_9 = VAR_2;
 if (VAR_5->vn == ((void*)0))
  return (VAR_9);
 FUNC_4(VAR_5->vn, VAR_1 | VAR_0);
 if (FUNC_3(VAR_6, "blocksused") == 0) {
  VAR_10 = FUNC_1(VAR_5->vn, &VAR_7, VAR_4->td_ucred);
  if (VAR_10 == 0)
   VAR_9 = VAR_7.va_bytes / VAR_5->cbe_lun.blocksize;
 }
 if (FUNC_3(VAR_6, "blocksavail") == 0 &&
     (VAR_5->vn->v_iflag & VAR_3) == 0) {
  VAR_10 = FUNC_0(VAR_5->vn->v_mount, &VAR_8);
  if (VAR_10 == 0)
   VAR_9 = VAR_8.f_bavail * VAR_8.f_bsize /
       VAR_5->cbe_lun.blocksize;
 }
 FUNC_2(VAR_5->vn, 0);
 return (VAR_9);
}
