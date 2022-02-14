
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct timeval {long tv_sec; long tv_usec; } ;
struct TYPE_8__ {long tv_nsec; } ;
struct TYPE_7__ {long tv_nsec; } ;
struct stat {long st_mtime; long st_atime; TYPE_2__ st_atimespec; TYPE_1__ st_mtimespec; } ;
struct TYPE_9__ {int HighPart; int LowPart; void* QuadPart; } ;
typedef TYPE_3__ ULARGE_INTEGER ;
struct TYPE_10__ {int dwHighDateTime; int dwLowDateTime; } ;
typedef scalar_t__ HANDLE ;
typedef TYPE_4__ FILETIME ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char const*,int,int,int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (scalar_t__,int *,TYPE_4__*,TYPE_4__*) ;
 void* FUNC_3 (long,long) ;
 int FUNC_4 (char const*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char const*,int,char*,char const*) ;
 int FUNC_7 (char const*,struct stat*) ;
 int FUNC_8 (char const*,struct timeval*) ;
 int FUNC_9 (char const*,struct timeval*) ;

int
FUNC_10(const char *VAR_7, int VAR_8,
    const char *VAR_9, long VAR_10, long VAR_11, long VAR_12, long VAR_13)
{
 int VAR_14;
 struct stat VAR_15;
 struct timeval VAR_16[2];


 VAR_13 = VAR_11 = 0;

 if (VAR_12 == 0 && VAR_13 == 0 && VAR_10 == 0 && VAR_11 == 0)
  return (1);

 VAR_14 = FUNC_7(VAR_9, &VAR_15);
 if (VAR_14 < 0) {
  FUNC_6(VAR_7, VAR_8, "Can't stat %s\n", VAR_9);
  FUNC_5(((void*)0));
  return (0);
 }

 if (VAR_12 == 0 && VAR_13 == 0) {
  VAR_12 = VAR_15.st_mtime;





 }
 if (VAR_10 == 0 && VAR_11 == 0) {
  VAR_10 = VAR_15.st_atime;





 }

 VAR_16[1].tv_sec = VAR_12;
 VAR_16[1].tv_usec = VAR_13 / 1000;

 VAR_16[0].tv_sec = VAR_10;
 VAR_16[0].tv_usec = VAR_11 / 1000;




 VAR_14 = FUNC_9(VAR_9, VAR_16);

 if (VAR_14 < 0) {
  FUNC_6(VAR_7, VAR_8, "Can't utimes %s\n", VAR_9);
  FUNC_5(((void*)0));
  return (0);
 }
 return (1);

}
