
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct timeval {int tv_sec; int tv_usec; } ;
struct timespec {int tv_sec; int tv_nsec; } ;
struct dvpoll {int dp_timeout; int dp_nfds; int dp_fds; } ;
struct TYPE_6__ {int nevents; int writeset; int readset; scalar_t__ maxfd; } ;
typedef TYPE_1__ isc_socketwait_t ;
typedef int isc_socketmgr_t ;
struct TYPE_7__ {scalar_t__ maxfd; int write_fds_copy; int read_fds_copy; int fd_bufsize; int write_fds; int read_fds; int devpoll_fd; int nevents; int events; int epoll_fd; int kqueue_fd; } ;
typedef TYPE_2__ isc__socketmgr_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int ,int ,struct dvpoll*) ;
 int FUNC_3 (int ,int *,int ,int ,int ,struct timespec*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (scalar_t__,int ,int ,int *,struct timeval*) ;
 TYPE_2__* VAR_1 ;
 TYPE_1__ VAR_2 ;

int
FUNC_6(isc_socketmgr_t *VAR_3, struct timeval *VAR_4,
     isc_socketwait_t **VAR_5)
{
 isc__socketmgr_t *VAR_6 = (isc__socketmgr_t *)VAR_3;


 int VAR_7;
 FUNC_0(VAR_5 != ((void*)0) && *VAR_5 == ((void*)0));





 if (VAR_6 == ((void*)0))
  return (0);
 *VAR_5 = &VAR_2;
 return (VAR_7);
}
