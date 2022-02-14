
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {scalar_t__ sa_family; } ;
struct pollfd {int events; int fd; } ;
struct TYPE_4__ {void* re_status; void* re_errno; } ;
struct TYPE_3__ {int tv_sec; int tv_usec; } ;
struct ct_data {TYPE_2__ ct_error; int ct_fd; TYPE_1__ ct_wait; } ;
typedef int socklen_t ;
typedef int sa ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (int ,void*,size_t) ;
 scalar_t__ FUNC_1 (int ,struct sockaddr*,int*) ;
 int FUNC_2 (struct pollfd*,int,int) ;
 int FUNC_3 (int ,void*,size_t) ;
 void* VAR_6 ;

__attribute__((used)) static int
FUNC_4(void *VAR_7, void *VAR_8, int VAR_9)
{
 struct sockaddr VAR_10;
 socklen_t VAR_11;
 struct ct_data *VAR_12 = (struct ct_data *)VAR_7;
 struct pollfd VAR_13;
 int VAR_14 = (int)((VAR_12->ct_wait.tv_sec * 1000) +
     (VAR_12->ct_wait.tv_usec / 1000));

 if (VAR_9 == 0)
  return (0);
 VAR_13.fd = VAR_12->ct_fd;
 VAR_13.events = VAR_3;
 for (;;) {
  switch (FUNC_2(&VAR_13, 1, VAR_14)) {
  case 0:
   VAR_12->ct_error.re_status = VAR_5;
   return (-1);

  case -1:
   if (VAR_6 == VAR_2)
    continue;
   VAR_12->ct_error.re_status = VAR_4;
   VAR_12->ct_error.re_errno = VAR_6;
   return (-1);
  }
  break;
 }

 VAR_11 = sizeof(VAR_10);
 if ((FUNC_1(VAR_12->ct_fd, &VAR_10, &VAR_11) == 0) &&
     (VAR_10.sa_family == VAR_0)) {
  VAR_9 = FUNC_0(VAR_12->ct_fd, VAR_8, (size_t)VAR_9);
 } else {
  VAR_9 = FUNC_3(VAR_12->ct_fd, VAR_8, (size_t)VAR_9);
 }

 switch (VAR_9) {
 case 0:

  VAR_12->ct_error.re_errno = VAR_1;
  VAR_12->ct_error.re_status = VAR_4;
  VAR_9 = -1;
  break;

 case -1:
  VAR_12->ct_error.re_errno = VAR_6;
  VAR_12->ct_error.re_status = VAR_4;
  break;
 }
 return (VAR_9);
}
