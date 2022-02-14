
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;
struct timespec {int tv_sec; scalar_t__ tv_nsec; } ;
struct mtx {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (void*,struct mtx*,int,char const*,int) ;

int
FUNC_1(void *VAR_1, void *VAR_2, int VAR_3, const char *VAR_4,
    struct timespec *VAR_5)
{
 u_int64_t VAR_6;
 int VAR_7, VAR_8;

 if (VAR_5) {
  VAR_8 = VAR_0 * VAR_5->tv_sec;
  VAR_6 = (u_int64_t)VAR_5->tv_nsec;
  VAR_6 = ((VAR_6 * ((u_int64_t)VAR_0)) + 500000000) /
      1000000000;
  VAR_8 += (int)VAR_6;
 } else {
  VAR_8 = 0;
 }
 VAR_7 = FUNC_0(VAR_1, (struct mtx *)VAR_2, VAR_3, VAR_4, VAR_8);
 return (VAR_7);
}
