
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {long tv_nsec; void* tv_sec; } ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long VAR_4 ;
 long VAR_5 ;
 void* VAR_6 ;
 int FUNC_0 (struct timespec const*,struct timespec*,int) ;
 int FUNC_1 (struct timespec*) ;

__attribute__((used)) static int
FUNC_2(const struct timespec *VAR_7, enum uio_seg VAR_8,
    struct timespec *VAR_9, int *VAR_10)
{
 struct timespec VAR_11;
 int VAR_12;

 FUNC_1(&VAR_11);
 *VAR_10 = 0;
 if (VAR_7 == ((void*)0)) {
  VAR_9[0] = VAR_11;
  VAR_9[1] = VAR_11;
  *VAR_10 |= VAR_3;
  return (0);
 }
 if (VAR_8 == VAR_1) {
  VAR_9[0] = VAR_7[0];
  VAR_9[1] = VAR_7[1];
 } else if ((VAR_12 = FUNC_0(VAR_7, VAR_9, sizeof(*VAR_9) * 2)) != 0)
  return (VAR_12);
 if (VAR_9[0].tv_nsec == VAR_5 && VAR_9[1].tv_nsec == VAR_5)
  *VAR_10 |= VAR_2;
 if (VAR_9[0].tv_nsec == VAR_4 && VAR_9[1].tv_nsec == VAR_4)
  *VAR_10 |= VAR_3;
 if (VAR_9[0].tv_nsec == VAR_5)
  VAR_9[0].tv_sec = VAR_6;
 else if (VAR_9[0].tv_nsec == VAR_4)
  VAR_9[0] = VAR_11;
 else if (VAR_9[0].tv_nsec < 0 || VAR_9[0].tv_nsec >= 1000000000L)
  return (VAR_0);
 if (VAR_9[1].tv_nsec == VAR_5)
  VAR_9[1].tv_sec = VAR_6;
 else if (VAR_9[1].tv_nsec == VAR_4)
  VAR_9[1] = VAR_11;
 else if (VAR_9[1].tv_nsec < 0 || VAR_9[1].tv_nsec >= 1000000000L)
  return (VAR_0);

 return (0);
}
