
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tv ;
struct timeval {int tv_usec; } ;
struct timespec {int dummy; } ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;


 int VAR_0 ;
 int FUNC_0 (struct timeval const*,struct timespec*) ;
 int VAR_1 ;
 int FUNC_1 (struct timeval const*,struct timeval*,int) ;
 int FUNC_2 (struct timespec*) ;

__attribute__((used)) static int
FUNC_3(const struct timeval *VAR_2, enum uio_seg VAR_3,
    struct timespec *VAR_4)
{
 struct timeval VAR_5[2];
 const struct timeval *VAR_6;
 int VAR_7;

 if (VAR_2 == ((void*)0)) {
  FUNC_2(&VAR_4[0]);
  VAR_4[1] = VAR_4[0];
 } else {
  if (VAR_3 == VAR_1) {
   VAR_6 = VAR_2;
  } else {
   if ((VAR_7 = FUNC_1(VAR_2, VAR_5, sizeof(VAR_5))) != 0)
    return (VAR_7);
   VAR_6 = VAR_5;
  }

  if (VAR_6[0].tv_usec < 0 || VAR_6[0].tv_usec >= 1000000 ||
      VAR_6[1].tv_usec < 0 || VAR_6[1].tv_usec >= 1000000)
   return (VAR_0);
  FUNC_0(&VAR_6[0], &VAR_4[0]);
  FUNC_0(&VAR_6[1], &VAR_4[1]);
 }
 return (0);
}
