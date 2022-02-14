
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* time_t ;
struct utimbuf {void* modtime; void* actime; } ;
struct timeval {long tv_usec; void* tv_sec; } ;
struct timespec {long tv_nsec; void* tv_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,struct timespec*) ;
 int FUNC_2 (int,struct timeval*) ;
 int FUNC_3 (char const*,struct timeval*) ;
 int FUNC_4 (char const*,struct utimbuf*) ;
 int FUNC_5 (int ,char const*,struct timespec*,int ) ;
 int FUNC_6 (char const*,struct timeval*) ;

__attribute__((used)) static int
FUNC_7(int VAR_4, int VAR_5, const char *VAR_6,
    time_t VAR_7, long VAR_8,
    time_t VAR_9, long VAR_10)
{
 (void)VAR_4;
 (void)VAR_5;
 (void)VAR_6;
 (void)VAR_8;
 (void)VAR_10;
 return (VAR_1);

}
