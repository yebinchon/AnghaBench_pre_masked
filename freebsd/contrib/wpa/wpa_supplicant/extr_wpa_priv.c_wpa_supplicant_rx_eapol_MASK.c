
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
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct msghdr*,int ,int) ;
 scalar_t__ FUNC_1 (int ,struct msghdr*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;

void FUNC_4(void *VAR_5, const u8 *VAR_6,
        const u8 *VAR_7, size_t VAR_8)
{
 struct wpa_priv_interface *VAR_9 = VAR_5;
 struct msghdr VAR_10;
 struct iovec VAR_11[3];
 int VAR_12 = VAR_3;

 FUNC_3(VAR_1, "RX EAPOL from driver");
 VAR_11[0].iov_base = &VAR_12;
 VAR_11[0].iov_len = sizeof(VAR_12);
 VAR_11[1].iov_base = (u8 *) VAR_6;
 VAR_11[1].iov_len = VAR_0;
 VAR_11[2].iov_base = (u8 *) VAR_7;
 VAR_11[2].iov_len = VAR_8;

 FUNC_0(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.msg_iov = VAR_11;
 VAR_10.msg_iovlen = 3;
 VAR_10.msg_name = &VAR_9->drv_addr;
 VAR_10.msg_namelen = VAR_9->drv_addr_len;

 if (FUNC_1(VAR_9->fd, &VAR_10, 0) < 0)
  FUNC_3(VAR_2, "sendmsg(wpas_socket): %s",
      FUNC_2(VAR_4));
}
