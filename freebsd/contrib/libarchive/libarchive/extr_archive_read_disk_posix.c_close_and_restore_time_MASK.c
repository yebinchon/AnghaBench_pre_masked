
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree {int flags; } ;
struct timeval {int tv_usec; int tv_sec; } ;
struct timespec {int tv_nsec; int tv_sec; } ;
struct restore_time {int mtime_nsec; int atime_nsec; scalar_t__ filetype; int name; int atime; int mtime; scalar_t__ noatime; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,struct timespec*) ;
 scalar_t__ FUNC_2 (int,struct timeval*) ;
 scalar_t__ FUNC_3 (int ,int ,struct timeval*) ;
 scalar_t__ FUNC_4 (int ,struct timeval*) ;
 int VAR_1 ;
 int FUNC_5 (struct tree*) ;
 scalar_t__ FUNC_6 (int ,struct timeval*) ;

__attribute__((used)) static int
FUNC_7(int VAR_2, struct tree *VAR_3, struct restore_time *VAR_4)
{

 (void)VAR_3;
 (void)VAR_4;
 return (FUNC_0(VAR_2));
 return (0);
}
