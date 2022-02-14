
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uufsd {int d_bsize; int d_fd; char const* d_name; int d_mine; int * d_sbcsum; int * d_error; scalar_t__ d_ufs; scalar_t__ d_lcg; scalar_t__ d_inomax; scalar_t__ d_inomin; int * d_inoblock; scalar_t__ d_ccg; } ;
struct statfs {int f_mntfromname; } ;
struct stat {int st_mode; } ;
struct fstab {char* fs_spec; } ;
typedef int dev ;


 int FUNC_0 (struct uufsd*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 char* VAR_3 ;
 struct fstab* FUNC_4 (char const*) ;
 int FUNC_5 (char const*,int ) ;
 int FUNC_6 (char*,int,char*,char*,char const*) ;
 int FUNC_7 (char const*,struct stat*) ;
 scalar_t__ FUNC_8 (char const*,struct statfs*) ;
 char* FUNC_9 (char const*) ;
 int FUNC_10 (char*,int ,int) ;

int
FUNC_11(struct uufsd *VAR_4, const char *VAR_5)
{
 struct stat VAR_6;
 struct fstab *VAR_7;
 struct statfs VAR_8;
 const char *VAR_9;
 char VAR_10[VAR_0];
 int VAR_11, VAR_12;

 FUNC_0(VAR_4, ((void*)0));

 VAR_9 = VAR_5;
again: if ((VAR_12 = FUNC_7(VAR_5, &VAR_6)) < 0) {
  if (*VAR_5 != '/') {
   FUNC_6(VAR_10, sizeof(VAR_10), "%s%s", VAR_3, VAR_5);
   VAR_5 = VAR_10;
   goto again;
  }





  VAR_5 = VAR_9;
 }
 if (VAR_12 >= 0 && FUNC_3(VAR_6.st_mode)) {

  ;
 } else if (VAR_12 >= 0 && FUNC_1(VAR_6.st_mode)) {

  ;
 } else if ((VAR_7 = FUNC_4(VAR_5)) != ((void*)0)) {
  VAR_5 = VAR_7->fs_spec;
 } else if (VAR_12 >= 0 && FUNC_2(VAR_6.st_mode)) {




  if (FUNC_8(VAR_5, &VAR_8) < 0) {
   FUNC_0(VAR_4, "could not find special device");
   return (-1);
  }
  FUNC_10(VAR_10, VAR_8.f_mntfromname, sizeof(VAR_10));
  VAR_5 = VAR_10;
 } else {
  FUNC_0(VAR_4, "could not find special device");
  return (-1);
 }
 VAR_11 = FUNC_5(VAR_5, VAR_2);
 if (VAR_11 == -1) {
  FUNC_0(VAR_4, "could not open special device");
  return (-1);
 }

 VAR_4->d_bsize = 1;
 VAR_4->d_ccg = 0;
 VAR_4->d_fd = VAR_11;
 VAR_4->d_inoblock = ((void*)0);
 VAR_4->d_inomin = 0;
 VAR_4->d_inomax = 0;
 VAR_4->d_lcg = 0;
 VAR_4->d_mine = 0;
 VAR_4->d_ufs = 0;
 VAR_4->d_error = ((void*)0);
 VAR_4->d_sbcsum = ((void*)0);

 if (VAR_9 != VAR_5) {
  VAR_5 = FUNC_9(VAR_5);
  if (VAR_5 == ((void*)0)) {
   FUNC_0(VAR_4, "could not allocate memory for disk name");
   return (-1);
  }
  VAR_4->d_mine |= VAR_1;
 }
 VAR_4->d_name = VAR_5;

 return (0);
}
