
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_11__ {long long tv_nsec; } ;
struct TYPE_10__ {long long tv_nsec; } ;
struct TYPE_9__ {long long tv_nsec; } ;
struct stat {long long st_atime; long long st_mtime; long long st_birthtime; TYPE_3__ st_mtimespec; TYPE_2__ st_birthtimespec; TYPE_1__ st_atimespec; } ;
struct TYPE_12__ {int QuadPart; scalar_t__ HighPart; scalar_t__ LowPart; } ;
typedef TYPE_4__ ULARGE_INTEGER ;
struct TYPE_13__ {scalar_t__ dwHighDateTime; scalar_t__ dwLowDateTime; } ;
typedef scalar_t__ HANDLE ;
typedef TYPE_5__ FILETIME ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char const*,int ,int ,int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__,TYPE_5__*,TYPE_5__*,TYPE_5__*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char const*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char const*,int,char*,char const*,...) ;
 int FUNC_7 (int ,char*,char) ;
 int FUNC_8 (char const*,struct stat*) ;
 int VAR_5 ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10(const char *VAR_6, int VAR_7,
    const char *VAR_8, long VAR_9, long VAR_10, char VAR_11, int VAR_12)
{
 long long VAR_13, VAR_14;
 int VAR_15;
 struct stat VAR_16;

 FUNC_3(VAR_6, VAR_7);
 VAR_15 = FUNC_8(VAR_8, &VAR_16);
 if (VAR_15 != 0) {
  FUNC_6(VAR_6, VAR_7, "Can't stat %s\n", VAR_8);
  FUNC_5(((void*)0));
  return (0);
 }
 switch (VAR_11) {
 case 'a': VAR_13 = VAR_16.st_atime; break;
 case 'm': VAR_13 = VAR_16.st_mtime; break;
 case 'b': VAR_13 = 0; break;
 default: FUNC_7(VAR_5, "INTERNAL: Bad type %c for file time", VAR_11);
  FUNC_4(1);
 }
 VAR_14 = VAR_10 = 0;
 if (VAR_11 == 'b') return (1);





 if (VAR_12) {

  time_t VAR_17 = FUNC_9(((void*)0));
  if (VAR_13 < VAR_17 - 10 || VAR_13 > VAR_17 + 1) {
   FUNC_6(VAR_6, VAR_7,
       "File %s has %ctime %lld, %lld seconds ago\n",
       VAR_8, VAR_11, VAR_13, VAR_17 - VAR_13);
   FUNC_5(((void*)0));
   return (0);
  }
 } else if (VAR_13 != VAR_9 || VAR_14 != VAR_10) {
  FUNC_6(VAR_6, VAR_7,
      "File %s has %ctime %lld.%09lld, expected %lld.%09lld",
      VAR_8, VAR_11, VAR_13, VAR_14, VAR_9, VAR_10);
  FUNC_5(((void*)0));
  return (0);
 }
 return (1);
}
