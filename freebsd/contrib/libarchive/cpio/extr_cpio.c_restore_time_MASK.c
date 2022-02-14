
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; int tv_sec; } ;
struct cpio {int option_atime_restore; } ;
struct archive_entry {int dummy; } ;
struct __timeval {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*) ;
 scalar_t__ FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (struct archive_entry*) ;
 int FUNC_4 (struct archive_entry*) ;
 int FUNC_5 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (int,struct timeval*) ;
 int FUNC_7 (int ,char*,...) ;
 scalar_t__ FUNC_8 (char const*,struct timeval*) ;
 scalar_t__ FUNC_9 (char const*,struct timeval*) ;

__attribute__((used)) static int
FUNC_10(struct cpio *VAR_2, struct archive_entry *VAR_3,
    const char *VAR_4, int VAR_5)
{

 static int VAR_6 = 0;

 (void)VAR_2;
 (void)VAR_3;
 (void)VAR_4;

 if (!VAR_6)
  FUNC_7(0, "Can't restore access times on this platform");
 VAR_6 = 1;
 return (VAR_5);
 return (VAR_5);
}
