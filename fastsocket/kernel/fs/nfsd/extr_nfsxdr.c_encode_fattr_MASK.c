
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;
struct svc_rqst {int dummy; } ;
struct svc_fh {TYPE_1__* fh_export; struct dentry* fh_dentry; } ;
struct TYPE_6__ {int tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_5__ {int tv_nsec; scalar_t__ tv_sec; } ;
struct kstat {int mode; scalar_t__ size; TYPE_3__ ctime; TYPE_2__ atime; scalar_t__ ino; int dev; scalar_t__ blocks; int rdev; scalar_t__ blksize; int gid; int uid; scalar_t__ nlink; } ;
struct dentry {int d_inode; } ;
typedef int __be32 ;
struct TYPE_4__ {scalar_t__ ex_uuid; scalar_t__ ex_fsid; } ;





 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct svc_fh*) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int ,struct timespec*) ;
 int FUNC_6 (int ) ;
 int* VAR_2 ;
 scalar_t__ FUNC_7 (struct svc_rqst*,int ) ;
 scalar_t__ FUNC_8 (struct svc_rqst*,int ) ;

__attribute__((used)) static __be32 *
FUNC_9(struct svc_rqst *VAR_3, __be32 *VAR_4, struct svc_fh *VAR_5,
      struct kstat *VAR_6)
{
 struct dentry *VAR_7 = VAR_5->fh_dentry;
 int VAR_8;
 struct timespec VAR_9;
 u32 VAR_10;

 VAR_8 = (VAR_6->mode & VAR_1);

 *VAR_4++ = FUNC_4(VAR_2[VAR_8 >> 12]);
 *VAR_4++ = FUNC_4((u32) VAR_6->mode);
 *VAR_4++ = FUNC_4((u32) VAR_6->nlink);
 *VAR_4++ = FUNC_4((u32) FUNC_8(VAR_3, VAR_6->uid));
 *VAR_4++ = FUNC_4((u32) FUNC_7(VAR_3, VAR_6->gid));

 if (FUNC_2(VAR_8) && VAR_6->size > VAR_0) {
  *VAR_4++ = FUNC_4(VAR_0);
 } else {
  *VAR_4++ = FUNC_4((u32) VAR_6->size);
 }
 *VAR_4++ = FUNC_4((u32) VAR_6->blksize);
 if (FUNC_1(VAR_8) || FUNC_0(VAR_8))
  *VAR_4++ = FUNC_4(FUNC_6(VAR_6->rdev));
 else
  *VAR_4++ = FUNC_4(0xffffffff);
 *VAR_4++ = FUNC_4((u32) VAR_6->blocks);
 switch (FUNC_3(VAR_5)) {
 default:
 case 130:
  *VAR_4++ = FUNC_4(FUNC_6(VAR_6->dev));
  break;
 case 129:
  *VAR_4++ = FUNC_4((u32) VAR_5->fh_export->ex_fsid);
  break;
 case 128:
  VAR_10 = ((u32*)VAR_5->fh_export->ex_uuid)[0];
  VAR_10 ^= ((u32*)VAR_5->fh_export->ex_uuid)[1];
  VAR_10 ^= ((u32*)VAR_5->fh_export->ex_uuid)[2];
  VAR_10 ^= ((u32*)VAR_5->fh_export->ex_uuid)[3];
  *VAR_4++ = FUNC_4(VAR_10);
  break;
 }
 *VAR_4++ = FUNC_4((u32) VAR_6->ino);
 *VAR_4++ = FUNC_4((u32) VAR_6->atime.tv_sec);
 *VAR_4++ = FUNC_4(VAR_6->atime.tv_nsec ? VAR_6->atime.tv_nsec / 1000 : 0);
 FUNC_5(VAR_7->d_inode, &VAR_9);
 *VAR_4++ = FUNC_4((u32) VAR_9.tv_sec);
 *VAR_4++ = FUNC_4(VAR_9.tv_nsec ? VAR_9.tv_nsec / 1000 : 0);
 *VAR_4++ = FUNC_4((u32) VAR_6->ctime.tv_sec);
 *VAR_4++ = FUNC_4(VAR_6->ctime.tv_nsec ? VAR_6->ctime.tv_nsec / 1000 : 0);

 return VAR_4;
}
