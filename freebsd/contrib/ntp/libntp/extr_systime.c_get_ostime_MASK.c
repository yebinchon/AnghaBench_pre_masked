
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; int tv_sec; } ;
struct timespec {int tv_nsec; int tv_sec; } ;


 int VAR_0 ;
 int FUNC_0 (struct timeval*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,struct timespec*) ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,struct timespec*) ;
 int FUNC_4 (int ,char*,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static inline void
FUNC_5(
 struct timespec * VAR_6
 )
{
 int VAR_7;
 long VAR_8;






 struct timeval VAR_9;

 VAR_7 = FUNC_0(&VAR_9, ((void*)0));
 VAR_6->tv_sec = VAR_9.tv_sec;
 VAR_6->tv_nsec = VAR_9.tv_usec * 1000;

 if (VAR_7 < 0) {
  FUNC_4(VAR_1, "read system clock failed: %m (%d)",
   VAR_3);
  FUNC_2(1);
 }

 if (VAR_5) {
  VAR_8 = (long)((VAR_6->tv_nsec * 1e-9) / VAR_4);
  VAR_6->tv_nsec = (long)(VAR_8 * 1e9 * VAR_4);
 }
}
