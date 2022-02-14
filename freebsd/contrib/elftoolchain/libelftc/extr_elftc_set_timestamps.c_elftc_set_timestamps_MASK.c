
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct utimbuf {int modtime; int actime; } ;
struct timeval {int tv_usec; int tv_sec; } ;
struct TYPE_4__ {int tv_nsec; int tv_sec; } ;
struct TYPE_3__ {int tv_nsec; int tv_sec; } ;
struct stat {int st_mtime; int st_atime; TYPE_2__ MTIME; TYPE_1__ ATIME; } ;


 int FUNC_0 (char const*,struct utimbuf*) ;
 int FUNC_1 (char const*,struct timeval*) ;

int
FUNC_2(const char *VAR_0, struct stat *VAR_1)
{
 struct utimbuf VAR_2;

 VAR_2.actime = VAR_1->st_atime;
 VAR_2.modtime = VAR_1->st_mtime;
 return (FUNC_0(VAR_0, &VAR_2));

}
