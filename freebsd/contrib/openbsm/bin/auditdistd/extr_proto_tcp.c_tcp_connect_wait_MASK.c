
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct tcp_ctx {scalar_t__ tc_magic; scalar_t__ tc_side; int tc_wait_called; scalar_t__ tc_fd; } ;
typedef int socklen_t ;
typedef int fd_set ;
typedef int error ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (scalar_t__,int ,...) ;
 int FUNC_5 (scalar_t__,int ,int ,int*,int*) ;
 int FUNC_6 (int ,int,int,char*) ;
 int FUNC_7 (scalar_t__,int *,int *,int *,struct timeval*) ;

__attribute__((used)) static int
FUNC_8(void *VAR_11, int VAR_12)
{
 struct tcp_ctx *VAR_13 = VAR_11;
 struct timeval VAR_14;
 fd_set VAR_15;
 socklen_t VAR_16;
 int VAR_17, VAR_18, VAR_19;

 FUNC_3(VAR_13 != ((void*)0));
 FUNC_3(VAR_13->tc_magic == VAR_8);
 FUNC_3(VAR_13->tc_side == VAR_9);
 FUNC_3(!VAR_13->tc_wait_called);
 FUNC_3(VAR_13->tc_fd >= 0);
 FUNC_3(VAR_12 >= 0);

 VAR_14.tv_sec = VAR_12;
 VAR_14.tv_usec = 0;
again:
 FUNC_2(&VAR_15);
 FUNC_1(VAR_13->tc_fd, &VAR_15);
 VAR_19 = FUNC_7(VAR_13->tc_fd + 1, ((void*)0), &VAR_15, ((void*)0), &VAR_14);
 if (VAR_19 == 0) {
  VAR_17 = VAR_1;
  goto done;
 } else if (VAR_19 == -1) {
  if (VAR_10 == VAR_0)
   goto again;
  VAR_17 = VAR_10;
  FUNC_6(VAR_4, 1, VAR_10, "select() failed");
  goto done;
 }
 FUNC_3(VAR_19 > 0);
 FUNC_3(FUNC_0(VAR_13->tc_fd, &VAR_15));
 VAR_16 = sizeof(VAR_17);
 if (FUNC_5(VAR_13->tc_fd, VAR_6, VAR_7, &VAR_17,
     &VAR_16) == -1) {
  VAR_17 = VAR_10;
  FUNC_6(VAR_4, 1, VAR_10,
      "getsockopt(SO_ERROR) failed");
  goto done;
 }
 if (VAR_17 != 0) {
  FUNC_6(VAR_4, 1, VAR_17,
      "getsockopt(SO_ERROR) returned error");
  goto done;
 }
 VAR_17 = 0;
 VAR_13->tc_wait_called = 1;
done:
 VAR_18 = FUNC_4(VAR_13->tc_fd, VAR_2);
 if (VAR_18 == -1) {
  if (VAR_17 == 0)
   VAR_17 = VAR_10;
  FUNC_6(VAR_4, 1, VAR_10, "fcntl(F_GETFL) failed");
  return (VAR_17);
 }
 VAR_18 &= ~VAR_5;
 if (FUNC_4(VAR_13->tc_fd, VAR_3, VAR_18) == -1) {
  if (VAR_17 == 0)
   VAR_17 = VAR_10;
  FUNC_6(VAR_4, 1, VAR_10,
      "fcntl(F_SETFL, ~O_NONBLOCK) failed");
 }
 return (VAR_17);
}
