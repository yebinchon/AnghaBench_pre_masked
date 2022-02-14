
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ u_int64_t ;
typedef int u_int ;
typedef scalar_t__ time_t ;
struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
struct ssh {int dummy; } ;
typedef int fd_set ;
struct TYPE_2__ {scalar_t__ client_alive_interval; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (struct ssh*,int **,int **,int*,int*,scalar_t__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (struct ssh*) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int *,int ,int) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 TYPE_1__ VAR_3 ;
 scalar_t__ FUNC_11 () ;
 scalar_t__ FUNC_12 () ;
 int FUNC_13 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_14 (scalar_t__) ;

__attribute__((used)) static void
FUNC_15(struct ssh *VAR_4,
    int VAR_5, int VAR_6,
    fd_set **VAR_7, fd_set **VAR_8, int *VAR_9,
    u_int *VAR_10, u_int64_t VAR_11)
{
 struct timeval VAR_12, *VAR_13;
 int VAR_14;
 time_t VAR_15 = 0;
 int VAR_16 = 0;
 static time_t VAR_17;


 FUNC_4(VAR_4, VAR_7, VAR_8, VAR_9,
     VAR_10, &VAR_15);


 if (VAR_15 != 0)
  VAR_11 = FUNC_2(VAR_11, (u_int)VAR_15 * 1000);
 if (VAR_3.client_alive_interval) {
  uint64_t VAR_18 =
      (uint64_t)VAR_3.client_alive_interval * 1000;

  VAR_16 = 1;
  if (VAR_11 == 0 || VAR_11 > VAR_18)
   VAR_11 = VAR_18;
 }





 FUNC_1(VAR_5, *VAR_7);
 FUNC_10(*VAR_7);





 if (FUNC_11())
  FUNC_1(VAR_6, *VAR_8);





 if (VAR_1 && FUNC_12())
  if (VAR_11 == 0 || VAR_16)
   VAR_11 = 100;

 if (VAR_11 == 0)
  VAR_13 = ((void*)0);
 else {
  VAR_12.tv_sec = VAR_11 / 1000;
  VAR_12.tv_usec = 1000 * (VAR_11 % 1000);
  VAR_13 = &VAR_12;
 }


 VAR_14 = FUNC_13((*VAR_9)+1, *VAR_7, *VAR_8, ((void*)0), VAR_13);

 if (VAR_14 == -1) {
  FUNC_7(*VAR_7, 0, *VAR_10);
  FUNC_7(*VAR_8, 0, *VAR_10);
  if (VAR_2 != VAR_0)
   FUNC_6("select: %.100s", FUNC_14(VAR_2));
 } else if (VAR_16) {
  time_t VAR_19 = FUNC_8();

  if (VAR_14 == 0) {
   FUNC_5(VAR_4);
  } else if (FUNC_0(VAR_5, *VAR_7)) {
   VAR_17 = VAR_19;
  } else if (VAR_17 != 0 && VAR_17 +
      VAR_3.client_alive_interval <= VAR_19) {
   FUNC_5(VAR_4);
   VAR_17 = VAR_19;
  }
 }

 FUNC_9(*VAR_7);
}
