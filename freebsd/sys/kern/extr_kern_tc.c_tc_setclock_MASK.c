
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;
struct bintime {int dummy; } ;
typedef int intmax_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct bintime*,struct bintime*) ;
 int FUNC_2 (struct bintime*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct timespec*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_8 (int ) ;
 int VAR_3 ;
 int FUNC_9 (struct bintime*) ;
 int FUNC_10 (struct timespec*,struct bintime*) ;
 scalar_t__ VAR_4 ;

void
FUNC_11(struct timespec *VAR_5)
{
 struct timespec VAR_6, VAR_7;
 struct bintime VAR_8, VAR_9;

 FUNC_10(VAR_5, &VAR_8);
 FUNC_7(&VAR_6);
 FUNC_5(&VAR_3);
 FUNC_3(1);
 FUNC_2(&VAR_9);
 FUNC_1(&VAR_8, &VAR_9);


 FUNC_9(&VAR_8);
 FUNC_6(&VAR_3);


 FUNC_0(&VAR_1, 2);
 FUNC_8(VAR_2);
 if (VAR_4) {
  FUNC_7(&VAR_7);
  FUNC_4(VAR_0,
      "Time stepped from %jd.%09ld to %jd.%09ld (%jd.%09ld)\n",
      (intmax_t)VAR_6.tv_sec, VAR_6.tv_nsec,
      (intmax_t)VAR_7.tv_sec, VAR_7.tv_nsec,
      (intmax_t)VAR_5->tv_sec, VAR_5->tv_nsec);
 }
}
