
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct timeval {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
typedef int fd_set ;
typedef int fd_mask ;
struct TYPE_6__ {int c_fd; struct timeval c_tv; } ;
typedef TYPE_1__ con ;
struct TYPE_7__ {int c_name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int,int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int ) ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (char*,int ) ;
 TYPE_2__* VAR_5 ;
 int FUNC_7 (int *) ;
 int VAR_6 ;
 int FUNC_8 (int *,int ,int) ;
 int FUNC_9 (struct timeval*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_11 (struct timeval*) ;
 int VAR_9 ;
 int * FUNC_12 (int,int) ;

__attribute__((used)) static void
FUNC_13(void)
{
 struct timeval VAR_10, VAR_11;
 fd_set *VAR_12, *VAR_13;
 con *VAR_14;
 int VAR_15;

 FUNC_9(&VAR_11);
 VAR_14 = FUNC_1(&VAR_9);

 if (VAR_14 && (VAR_14->c_tv.tv_sec > VAR_11.tv_sec ||
     (VAR_14->c_tv.tv_sec == VAR_11.tv_sec && VAR_14->c_tv.tv_usec > VAR_11.tv_usec))) {
  VAR_10 = VAR_14->c_tv;
  VAR_10.tv_sec -= VAR_11.tv_sec;
  VAR_10.tv_usec -= VAR_11.tv_usec;
  if (VAR_10.tv_usec < 0) {
   VAR_10.tv_usec += 1000000;
   VAR_10.tv_sec--;
  }
 } else
  FUNC_11(&VAR_10);

 VAR_12 = FUNC_12(VAR_8, sizeof(fd_mask));
 VAR_13 = FUNC_12(VAR_8, sizeof(fd_mask));
 FUNC_8(VAR_12, VAR_7, VAR_8 * sizeof(fd_mask));
 FUNC_8(VAR_13, VAR_7, VAR_8 * sizeof(fd_mask));

 while (FUNC_10(VAR_6, VAR_12, ((void*)0), VAR_13, &VAR_10) == -1 &&
     (VAR_4 == VAR_0 || VAR_4 == VAR_1 || VAR_4 == VAR_2))
  ;

 for (VAR_15 = 0; VAR_15 < VAR_6; VAR_15++) {
  if (FUNC_0(VAR_15, VAR_13)) {
   FUNC_6("%s: exception!", VAR_5[VAR_15].c_name);
   FUNC_3(VAR_15);
  } else if (FUNC_0(VAR_15, VAR_12))
   FUNC_4(VAR_15);
 }
 FUNC_7(VAR_12);
 FUNC_7(VAR_13);

 VAR_14 = FUNC_1(&VAR_9);
 while (VAR_14 && (VAR_14->c_tv.tv_sec < VAR_11.tv_sec ||
     (VAR_14->c_tv.tv_sec == VAR_11.tv_sec && VAR_14->c_tv.tv_usec < VAR_11.tv_usec))) {
  int VAR_16 = VAR_14->c_fd;

  VAR_14 = FUNC_2(VAR_14, VAR_3);
  FUNC_5(VAR_16);
 }
}
