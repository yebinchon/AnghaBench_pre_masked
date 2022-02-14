
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_driver_privsep_data {scalar_t__ cmd_socket; int priv_addr; } ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct msghdr {int msg_iovlen; int msg_namelen; int * msg_name; struct iovec* msg_iov; } ;
struct iovec {int* iov_base; int iov_len; } ;
typedef int msg ;
typedef int fd_set ;
typedef int cmd ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (struct msghdr*,int ,int) ;
 int FUNC_4 (scalar_t__,void*,size_t,int ) ;
 int FUNC_5 (scalar_t__,int *,int *,int *,struct timeval*) ;
 scalar_t__ FUNC_6 (scalar_t__,struct msghdr*,int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ,char*,int) ;

__attribute__((used)) static int FUNC_9(struct wpa_driver_privsep_data *VAR_4, int VAR_5,
   const void *VAR_6, size_t VAR_7,
   void *VAR_8, size_t *VAR_9)
{
 struct msghdr VAR_10;
 struct iovec VAR_11[2];

 VAR_11[0].iov_base = &VAR_5;
 VAR_11[0].iov_len = sizeof(VAR_5);
 VAR_11[1].iov_base = (u8 *) VAR_6;
 VAR_11[1].iov_len = VAR_7;

 FUNC_3(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.msg_iov = VAR_11;
 VAR_10.msg_iovlen = VAR_6 ? 2 : 1;
 VAR_10.msg_name = &VAR_4->priv_addr;
 VAR_10.msg_namelen = sizeof(VAR_4->priv_addr);

 if (FUNC_6(VAR_4->cmd_socket, &VAR_10, 0) < 0) {
  FUNC_8(VAR_2, "sendmsg(cmd_socket): %s",
      FUNC_7(VAR_3));
  return -1;
 }

 if (VAR_8) {
  fd_set VAR_12;
  struct timeval VAR_13;
  int VAR_14;

  FUNC_2(&VAR_12);
  FUNC_1(VAR_4->cmd_socket, &VAR_12);
  VAR_13.tv_sec = 5;
  VAR_13.tv_usec = 0;
  VAR_14 = FUNC_5(VAR_4->cmd_socket + 1, &VAR_12, ((void*)0), ((void*)0), &VAR_13);
  if (VAR_14 < 0 && VAR_3 != VAR_0) {
   FUNC_8(VAR_2, "select: %s", FUNC_7(VAR_3));
   return -1;
  }

  if (FUNC_0(VAR_4->cmd_socket, &VAR_12)) {
   VAR_14 = FUNC_4(VAR_4->cmd_socket, VAR_8, *VAR_9, 0);
   if (VAR_14 < 0) {
    FUNC_8(VAR_2, "recv: %s",
        FUNC_7(VAR_3));
    return -1;
   }
   *VAR_9 = VAR_14;
  } else {
   FUNC_8(VAR_1, "PRIVSEP: Timeout while waiting "
       "for reply (cmd=%d)", VAR_5);
   return -1;
  }
 }

 return 0;
}
