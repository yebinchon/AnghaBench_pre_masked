
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pollfd {int ident; int fd; scalar_t__ revents; int events; int flags; int filter; } ;
struct kevent {int ident; int fd; scalar_t__ revents; int events; int flags; int filter; } ;
struct epoll_event {struct pollfd data; int events; } ;
typedef int pfd ;
typedef int isc_result_t ;
struct TYPE_5__ {int lock; int write_fds; int read_fds; int * fdlock; TYPE_1__* fdpollinfo; int devpoll_fd; int epoll_fd; int kqueue_fd; } ;
typedef TYPE_2__ isc__socketmgr_t ;
typedef int evchange ;
struct TYPE_4__ {int want_read; int want_write; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int,struct epoll_event*) ;
 scalar_t__ VAR_12 ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ,struct pollfd*,int,int *,int ,int *) ;
 int FUNC_7 (struct pollfd*,int ,int) ;
 int FUNC_8 (int ,struct pollfd*,int) ;

__attribute__((used)) static inline isc_result_t
FUNC_9(isc__socketmgr_t *VAR_13, int VAR_14, int VAR_15) {
 isc_result_t VAR_16 = VAR_7;
}
