
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs {int fs_ncg; } ;
struct uufsd {int d_fd; struct fs d_fs; } ;



 int FUNC_0 (struct uufsd*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct fs*,int ) ;
 int FUNC_2 (struct uufsd*) ;

int
FUNC_3(struct uufsd *VAR_1, int VAR_2)
{
 struct fs *VAR_3;
 int VAR_4;

 FUNC_0(VAR_1, ((void*)0));

 VAR_4 = FUNC_2(VAR_1);
 if (VAR_4 == -1) {
  FUNC_0(VAR_1, "failed to open disk for writing");
  return (-1);
 }

 VAR_3 = &VAR_1->d_fs;
 if ((VAR_0 = FUNC_1(VAR_1->d_fd, VAR_3, VAR_2 ? VAR_3->fs_ncg : 0)) != 0) {
  switch (VAR_0) {
  case 128:
   FUNC_0(VAR_1, "failed to write superblock");
   break;
  default:
   FUNC_0(VAR_1, "unknown superblock write error");
   VAR_0 = 128;
   break;
  }
  return (-1);
 }
 return (0);
}
