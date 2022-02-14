
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_priv_interface {int fd; int drv_addr_len; int drv_addr; } ;
struct msghdr {int msg_iovlen; int msg_namelen; int * msg_name; struct iovec* msg_iov; } ;
struct iovec {int* iov_base; int iov_len; } ;
typedef int msg ;
typedef int event ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct msghdr*,int ,int) ;
 scalar_t__ FUNC_1 (int ,struct msghdr*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_4(struct wpa_priv_interface *VAR_2, int VAR_3,
          const void *VAR_4, size_t VAR_5)
{
 struct msghdr VAR_6;
 struct iovec VAR_7[2];

 VAR_7[0].iov_base = &VAR_3;
 VAR_7[0].iov_len = sizeof(VAR_3);
 VAR_7[1].iov_base = (u8 *) VAR_4;
 VAR_7[1].iov_len = VAR_5;

 FUNC_0(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.msg_iov = VAR_7;
 VAR_6.msg_iovlen = VAR_4 ? 2 : 1;
 VAR_6.msg_name = &VAR_2->drv_addr;
 VAR_6.msg_namelen = VAR_2->drv_addr_len;

 if (FUNC_1(VAR_2->fd, &VAR_6, 0) < 0) {
  FUNC_3(VAR_0, "sendmsg(wpas_socket): %s",
      FUNC_2(VAR_1));
  return -1;
 }

 return 0;
}
