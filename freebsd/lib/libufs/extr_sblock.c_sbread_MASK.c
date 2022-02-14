
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs {scalar_t__ fs_magic; int fs_fsize; int fs_sblockloc; int fs_csp; int fs_sbsize; } ;
struct uufsd {int d_ufs; int d_bsize; int d_sblock; int d_sbcsum; struct fs d_fs; int d_fd; } ;






 int FUNC_0 (struct uufsd*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct fs*) ;
 int FUNC_2 (struct fs*,int) ;
 int FUNC_3 (struct fs*,struct fs*,int ) ;
 int FUNC_4 (int ,struct fs**,int ) ;

int
FUNC_5(struct uufsd *VAR_4)
{
 struct fs *VAR_5;

 FUNC_0(VAR_4, ((void*)0));

 if ((VAR_3 = FUNC_4(VAR_4->d_fd, &VAR_5, VAR_2)) != 0) {
  switch (VAR_3) {
  case 130:
   FUNC_0(VAR_4, "non-existent or truncated superblock");
   break;
  case 129:
   FUNC_0(VAR_4, "no usable known superblock found");
   break;
  case 128:
   FUNC_0(VAR_4, "failed to allocate space for superblock "
       "information");
   break;
  case 131:
   FUNC_0(VAR_4, "The previous newfs operation on this "
       "volume did not complete.\nYou must complete "
       "newfs before using this volume.");
   break;
  default:
   FUNC_0(VAR_4, "unknown superblock read error");
   VAR_3 = 130;
   break;
  }
  VAR_4->d_ufs = 0;
  return (-1);
 }
 FUNC_3(&VAR_4->d_fs, VAR_5, VAR_5->fs_sbsize);
 FUNC_1(VAR_5);
 VAR_5 = &VAR_4->d_fs;
 if (VAR_5->fs_magic == VAR_0)
  VAR_4->d_ufs = 1;
 if (VAR_5->fs_magic == VAR_1)
  VAR_4->d_ufs = 2;
 VAR_4->d_bsize = VAR_5->fs_fsize / FUNC_2(VAR_5, 1);
 VAR_4->d_sblock = VAR_5->fs_sblockloc / VAR_4->d_bsize;
 VAR_4->d_sbcsum = VAR_5->fs_csp;
 return (0);
}
