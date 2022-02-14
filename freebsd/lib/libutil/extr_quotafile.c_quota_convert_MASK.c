
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quotafile {int accmode; int fd; int wordsize; char* qfname; } ;
struct group {int gr_gid; } ;
struct dqhdr64 {void* dqh_reclen; void* dqh_hdrlen; void* dqh_version; int dqh_magic; } ;
struct dqblk64 {int dummy; } ;
struct dqblk {int dummy; } ;
typedef int dqh ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct quotafile* FUNC_0 (int,int) ;
 int VAR_11 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (struct quotafile*) ;
 struct group* FUNC_4 (int ) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (struct dqhdr64*,int ,int) ;
 int FUNC_8 (char*,int,int ) ;
 int FUNC_9 (struct quotafile*) ;
 int FUNC_10 (struct quotafile*) ;
 scalar_t__ FUNC_11 (struct quotafile*,struct dqblk*,int) ;
 int FUNC_12 (struct quotafile*,struct dqblk*,int) ;
 int FUNC_13 (struct quotafile*,struct dqblk*,int) ;
 scalar_t__ FUNC_14 (char*,char*) ;
 int FUNC_15 (char*,scalar_t__,char*,char*,int) ;
 int FUNC_16 (int,struct dqhdr64*,int) ;

int
FUNC_17(struct quotafile *VAR_12, int VAR_13)
{
 struct quotafile *VAR_14;
 struct dqhdr64 VAR_15;
 struct dqblk VAR_16;
 struct group *VAR_17;
 int VAR_18, VAR_19, VAR_20, VAR_21;





 if ((VAR_12->accmode & VAR_6) != VAR_6 || VAR_12->fd == -1) {
  VAR_11 = VAR_0;
  return (-1);
 }
 if ((VAR_13 != 32 && VAR_13 != 64) ||
      VAR_13 == VAR_12->wordsize) {
  VAR_11 = VAR_1;
  return (-1);
 }
 VAR_19 = FUNC_10(VAR_12);
 if ((VAR_14 = FUNC_0(1, sizeof(*VAR_12))) == ((void*)0)) {
  VAR_11 = VAR_2;
  return (-1);
 }
 *VAR_14 = *VAR_12;
 FUNC_15(VAR_14->qfname, VAR_3 + 1, "%s_%d.orig", VAR_12->qfname,
     VAR_12->wordsize);
 if (FUNC_14(VAR_12->qfname, VAR_14->qfname) < 0) {
  FUNC_3(VAR_14);
  return (-1);
 }
 if ((VAR_14->fd = FUNC_8(VAR_12->qfname, VAR_6|VAR_5|VAR_7|VAR_4,
     0)) < 0) {
  VAR_18 = VAR_11;
  goto error;
 }
 VAR_14->wordsize = VAR_13;
 if (VAR_13 == 64) {
  FUNC_7(&VAR_15, 0, sizeof(VAR_15));
  FUNC_6(VAR_15.dqh_magic, VAR_9, sizeof(VAR_15.dqh_magic));
  VAR_15.dqh_version = FUNC_5(VAR_10);
  VAR_15.dqh_hdrlen = FUNC_5(sizeof(struct dqhdr64));
  VAR_15.dqh_reclen = FUNC_5(sizeof(struct dqblk64));
  if (FUNC_16(VAR_14->fd, &VAR_15, sizeof(VAR_15)) != sizeof(VAR_15)) {
   VAR_18 = VAR_11;
   goto error;
  }
 }
 VAR_17 = FUNC_4(VAR_8);
 FUNC_2(VAR_14->fd, 0, VAR_17 ? VAR_17->gr_gid : 0);
 FUNC_1(VAR_14->fd, 0640);
 for (VAR_20 = 0; VAR_20 <= VAR_19; VAR_20++) {
  if ((FUNC_11(VAR_12, &VAR_16, VAR_20)) < 0)
   break;
  switch (VAR_14->wordsize) {
  case 32:
   if ((FUNC_12(VAR_14, &VAR_16, VAR_20)) < 0)
    break;
   continue;
  case 64:
   if ((FUNC_13(VAR_14, &VAR_16, VAR_20)) < 0)
    break;
   continue;
  default:
   VAR_11 = VAR_1;
   break;
  }
 }
 if (VAR_20 < VAR_19) {
  VAR_18 = VAR_11;
  goto error;
 }




 VAR_21 = VAR_12->fd;
 VAR_12->fd = VAR_14->fd;
 VAR_14->fd = VAR_21;
 VAR_12->wordsize = VAR_14->wordsize;
 FUNC_9(VAR_14);
 return (0);
error:

 (void) FUNC_14(VAR_14->qfname, VAR_12->qfname);
 FUNC_9(VAR_14);
 VAR_11 = VAR_18;
 return (-1);
}
