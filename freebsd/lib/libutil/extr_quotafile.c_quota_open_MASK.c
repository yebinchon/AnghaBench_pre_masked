
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_dev; } ;
struct quotafile {int fd; int quotatype; int wordsize; int accmode; int qfname; int fsname; int dev; } ;
struct group {int gr_gid; } ;
struct fstab {int fs_vfstype; int fs_file; } ;
struct dqhdr64 {void* dqh_reclen; void* dqh_hdrlen; void* dqh_version; int dqh_magic; } ;
struct dqblk64 {int dummy; } ;
typedef int dqh ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int) ;
 int VAR_7 ;
 char* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (void*) ;
 struct quotafile* FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 int VAR_11 ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int ,int ) ;
 int FUNC_6 (struct quotafile*) ;
 struct group* FUNC_7 (int ) ;
 int FUNC_8 (struct fstab*,int,int ,int) ;
 void* FUNC_9 (int) ;
 int FUNC_10 (int ,char*,int) ;
 int FUNC_11 (struct dqhdr64*,int ,int) ;
 void* FUNC_12 (int ,int,...) ;
 scalar_t__ FUNC_13 (int ,int,int ,int*) ;
 int FUNC_14 (int,struct dqhdr64*,int) ;
 scalar_t__ FUNC_15 (int ,struct stat*) ;
 scalar_t__ FUNC_16 (int ,char*) ;
 int FUNC_17 (int ,int ,int) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int,struct dqhdr64*,int) ;

struct quotafile *
FUNC_20(struct fstab *VAR_12, int VAR_13, int VAR_14)
{
 struct quotafile *VAR_15;
 struct dqhdr64 VAR_16;
 struct group *VAR_17;
 struct stat VAR_18;
 int VAR_19, VAR_20 = 0;
 int VAR_21;

 if ((VAR_15 = FUNC_2(1, sizeof(*VAR_15))) == ((void*)0))
  return (((void*)0));
 VAR_15->fd = -1;
 VAR_15->quotatype = VAR_13;
 FUNC_17(VAR_15->fsname, VAR_12->fs_file, sizeof(VAR_15->fsname));
 if (FUNC_15(VAR_15->fsname, &VAR_18) != 0)
  goto error;
 VAR_15->dev = VAR_18.st_dev;
 VAR_19 = FUNC_0(VAR_10, VAR_13);
 VAR_21 = FUNC_16(VAR_12->fs_vfstype, "ufs") == 0;




 if (VAR_21) {
  VAR_20 = FUNC_8(VAR_12, VAR_13, VAR_15->qfname,
      sizeof(VAR_15->qfname));
 }
 if (FUNC_13(VAR_15->fsname, VAR_19, 0, &VAR_15->wordsize) == 0)
  return (VAR_15);
 if (!VAR_21) {
  VAR_11 = 0;
  goto error;
 } else if (VAR_20 == 0) {
  VAR_11 = VAR_1;
  goto error;
 }
 VAR_15->accmode = VAR_14 & VAR_2;
 if ((VAR_15->fd = FUNC_12(VAR_15->qfname, VAR_15->accmode|VAR_3)) < 0 &&
     (VAR_14 & VAR_4) != VAR_4)
  goto error;

 if (VAR_15->fd != -1) {
  VAR_15->wordsize = 32;
  switch (FUNC_14(VAR_15->fd, &VAR_16, sizeof(VAR_16))) {
  case -1:
   goto error;
  case sizeof(VAR_16):
   if (FUNC_16(VAR_16.dqh_magic, VAR_8) != 0) {

    VAR_15->wordsize = 32;
    return (VAR_15);
   }
   if (FUNC_1(VAR_16.dqh_version) != VAR_9 ||
       FUNC_1(VAR_16.dqh_hdrlen) != sizeof(struct dqhdr64) ||
       FUNC_1(VAR_16.dqh_reclen) != sizeof(struct dqblk64)) {

    VAR_11 = VAR_0;
    goto error;
   }
   VAR_15->wordsize = 64;
   return (VAR_15);
  default:
   VAR_15->wordsize = 32;
   return (VAR_15);
  }

 }

 if ((VAR_15->fd = FUNC_12(VAR_15->qfname, VAR_5|VAR_4|VAR_6|VAR_3, 0)) <
     0)
  goto error;
 VAR_15->wordsize = 64;
 FUNC_11(&VAR_16, 0, sizeof(VAR_16));
 FUNC_10(VAR_16.dqh_magic, VAR_8, sizeof(VAR_16.dqh_magic));
 VAR_16.dqh_version = FUNC_9(VAR_9);
 VAR_16.dqh_hdrlen = FUNC_9(sizeof(struct dqhdr64));
 VAR_16.dqh_reclen = FUNC_9(sizeof(struct dqblk64));
 if (FUNC_19(VAR_15->fd, &VAR_16, sizeof(VAR_16)) != sizeof(VAR_16)) {

  FUNC_18(VAR_15->qfname);
  goto error;
 }
 VAR_17 = FUNC_7(VAR_7);
 FUNC_5(VAR_15->fd, 0, VAR_17 ? VAR_17->gr_gid : 0);
 FUNC_4(VAR_15->fd, 0640);
 return (VAR_15);
error:
 VAR_20 = VAR_11;

 if (VAR_15->fd != -1)
  FUNC_3(VAR_15->fd);
 FUNC_6(VAR_15);
 VAR_11 = VAR_20;
 return (((void*)0));
}
