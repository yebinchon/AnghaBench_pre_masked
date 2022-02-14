
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct timeval {scalar_t__ tv_sec; } ;
struct stat {int st_mode; int st_nlink; int st_blksize; scalar_t__ st_ctime; scalar_t__ st_mtime; scalar_t__ st_atime; scalar_t__ st_blocks; scalar_t__ st_size; scalar_t__ st_rdev; int st_gid; int st_uid; } ;
struct fio_stat {int fst_dev; } ;
typedef scalar_t__ LONGEST ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,struct stat*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct timeval*,int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (char**,long*) ;
 scalar_t__ FUNC_6 (char**,scalar_t__*) ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct stat*,struct fio_stat*) ;
 int FUNC_12 (int,int ) ;
 int FUNC_13 (scalar_t__,char*,int) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_14 (char *VAR_7)
{
  CORE_ADDR VAR_8;
  int VAR_9, VAR_10, VAR_11;
  long VAR_12;
  LONGEST VAR_13;
  struct stat VAR_14;
  struct fio_stat VAR_15;
  struct timeval VAR_16;


  if (FUNC_5 (&VAR_7, &VAR_12))
    {
      FUNC_7 ();
      return;
    }
  VAR_9 = FUNC_8 ((int) VAR_12);
  if (VAR_9 == VAR_2)
    {
      FUNC_4 ();
      return;
    }

  if (FUNC_6 (&VAR_7, &VAR_13))
    {
      FUNC_7 ();
      return;
    }
  VAR_8 = (CORE_ADDR) VAR_13;

  VAR_6 = 1;
  if (VAR_9 == VAR_0 || VAR_9 == VAR_1)
    {
      FUNC_12 (1, VAR_15.fst_dev);
      VAR_14.st_mode = VAR_3 | (VAR_9 == VAR_0 ? VAR_4 : VAR_5);
      VAR_14.st_nlink = 1;
      VAR_14.st_uid = FUNC_3 ();
      VAR_14.st_gid = FUNC_1 ();
      VAR_14.st_rdev = 0;
      VAR_14.st_size = 0;
      VAR_14.st_blksize = 512;



      if (!FUNC_2 (&VAR_16, ((void*)0)))
 VAR_14.st_atime = VAR_14.st_mtime = VAR_14.st_ctime = VAR_16.tv_sec;
      else
        VAR_14.st_atime = VAR_14.st_mtime = VAR_14.st_ctime = (time_t) 0;
      VAR_10 = 0;
    }
  else
    VAR_10 = FUNC_0 (VAR_9, &VAR_14);

  if (VAR_10 == -1)
    {
      FUNC_9 (-1);
      return;
    }
  if (VAR_8)
    {
      FUNC_11 (&VAR_14, &VAR_15);

      VAR_11 = FUNC_13 (VAR_8, (char *) &VAR_15, sizeof VAR_15);
      if (VAR_11 != sizeof VAR_15)
 {
   FUNC_9 (-1);
   return;
 }
    }
  FUNC_10 (VAR_10);
}
