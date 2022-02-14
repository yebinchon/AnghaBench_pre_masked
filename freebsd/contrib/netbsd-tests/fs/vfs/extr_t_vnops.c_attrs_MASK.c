
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct timeval {int tv_sec; int tv_usec; } ;
struct TYPE_6__ {int tv_sec; int tv_nsec; } ;
struct TYPE_5__ {int tv_sec; int tv_nsec; } ;
struct stat {int st_uid; int st_gid; int st_mode; TYPE_2__ st_mtimespec; TYPE_1__ st_atimespec; } ;
typedef int atf_tc_t ;
struct TYPE_8__ {int tv_nsec; int tv_sec; } ;
struct TYPE_7__ {int tv_nsec; int tv_sec; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int const*) ;
 scalar_t__ FUNC_4 (int const*) ;
 scalar_t__ FUNC_5 (int const*) ;
 scalar_t__ FUNC_6 (int const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (int) ;
 int VAR_3 ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,int,int) ;
 int FUNC_12 (int ,struct stat*) ;
 int FUNC_13 (int ,struct timeval*) ;
 TYPE_4__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__ VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_14(const atf_tc_t *VAR_9, const char *VAR_10)
{
 struct stat VAR_11, VAR_12;
 struct timeval VAR_13[2];
 int VAR_14;

 FUNC_1();
 FUNC_7(VAR_14 = FUNC_11(VAR_3, VAR_2 | VAR_1, 0755));
 FUNC_7(FUNC_10(VAR_14));
 FUNC_7(FUNC_12(VAR_3, &VAR_11));
 if (!(FUNC_4(VAR_9) || FUNC_5(VAR_9))) {
  FUNC_7(FUNC_9(VAR_3, 1, 2));
  VAR_11.st_uid = 1;
  VAR_11.st_gid = 2;
  FUNC_7(FUNC_8(VAR_3, 0123));
  VAR_11.st_mode = (VAR_11.st_mode & ~VAR_0) | 0123;
 }

 VAR_13[0].tv_sec = 1000000000;
 VAR_13[0].tv_usec = 1;
 VAR_13[1].tv_sec = 1000000002;
 VAR_13[1].tv_usec = 3;
 FUNC_7(FUNC_13(VAR_3, VAR_13));
 FUNC_7(FUNC_13(VAR_3, VAR_13));
 VAR_11.st_atimespec.tv_sec = 1000000000;
 VAR_11.st_atimespec.tv_nsec = 1000;
 VAR_11.st_mtimespec.tv_sec = 1000000002;
 VAR_11.st_mtimespec.tv_nsec = 3000;

 FUNC_7(FUNC_12(VAR_3, &VAR_12));

 if (!(FUNC_4(VAR_9) || FUNC_5(VAR_9))) {
  FUNC_0(VAR_11.st_uid, VAR_12);
  FUNC_0(VAR_11.st_gid, VAR_12);
  FUNC_0(VAR_11.st_mode, VAR_12);
 }
 if (!FUNC_4(VAR_9)) {

  FUNC_0(VAR_11.st_atimespec.tv_sec, VAR_12);
 }
 FUNC_0(VAR_11.st_mtimespec.tv_sec, VAR_12);
 if (!(FUNC_3(VAR_9) || FUNC_4(VAR_9) ||
       FUNC_5(VAR_9) || FUNC_6(VAR_9))) {
  FUNC_0(VAR_11.st_atimespec.tv_nsec, VAR_12);
  FUNC_0(VAR_11.st_mtimespec.tv_nsec, VAR_12);
 }


 FUNC_2();
}
