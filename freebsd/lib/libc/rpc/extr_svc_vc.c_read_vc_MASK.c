
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pollfd {int revents; int fd; int events; } ;
struct cf_conn {int strm_stat; int last_recv_time; scalar_t__ nonblock; } ;
struct TYPE_2__ {int xp_fd; scalar_t__ xp_p1; } ;
typedef TYPE_1__ SVCXPRT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pollfd*,int,int) ;
 int FUNC_1 (int,void*,size_t) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int
FUNC_4(void *VAR_5, void *VAR_6, int VAR_7)
{
 SVCXPRT *VAR_8;
 int VAR_9;
 int VAR_10 = 35 * 1000;
 struct pollfd VAR_11;
 struct cf_conn *VAR_12;

 VAR_8 = (SVCXPRT *)VAR_5;
 FUNC_2(VAR_8 != ((void*)0));

 VAR_9 = VAR_8->xp_fd;

 VAR_12 = (struct cf_conn *)VAR_8->xp_p1;

 if (VAR_12->nonblock) {
  VAR_7 = FUNC_1(VAR_9, VAR_6, (size_t)VAR_7);
  if (VAR_7 < 0) {
   if (VAR_4 == VAR_0)
    VAR_7 = 0;
   else
    goto fatal_err;
  }
  if (VAR_7 != 0)
   FUNC_3(&VAR_12->last_recv_time, ((void*)0));
  return VAR_7;
 }

 do {
  VAR_11.fd = VAR_9;
  VAR_11.events = VAR_2;
  VAR_11.revents = 0;
  switch (FUNC_0(&VAR_11, 1, VAR_10)) {
  case -1:
   if (VAR_4 == VAR_1)
    continue;

  case 0:
   goto fatal_err;

  default:
   break;
  }
 } while ((VAR_11.revents & VAR_2) == 0);

 if ((VAR_7 = FUNC_1(VAR_9, VAR_6, (size_t)VAR_7)) > 0) {
  FUNC_3(&VAR_12->last_recv_time, ((void*)0));
  return (VAR_7);
 }

fatal_err:
 ((struct cf_conn *)(VAR_8->xp_p1))->strm_stat = VAR_3;
 return (-1);
}
