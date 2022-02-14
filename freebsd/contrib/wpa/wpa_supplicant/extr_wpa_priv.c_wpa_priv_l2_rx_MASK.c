
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_priv_l2 {size_t idx; struct wpa_priv_interface* parent; } ;
struct wpa_priv_interface {int fd; int * l2_addr_len; int * l2_addr; } ;
struct msghdr {int msg_iovlen; int msg_namelen; int * msg_name; struct iovec* msg_iov; } ;
struct iovec {size_t iov_len; int * iov_base; } ;
typedef int msg ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct msghdr*,int ,int) ;
 scalar_t__ FUNC_1 (int ,struct msghdr*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_4(void *VAR_3, const u8 *VAR_4, const u8 *VAR_5,
      size_t VAR_6)
{
 struct wpa_priv_l2 *VAR_7 = VAR_3;
 struct wpa_priv_interface *VAR_8 = VAR_7->parent;
 struct msghdr VAR_9;
 struct iovec VAR_10[2];

 VAR_10[0].iov_base = (u8 *) VAR_4;
 VAR_10[0].iov_len = VAR_0;
 VAR_10[1].iov_base = (u8 *) VAR_5;
 VAR_10[1].iov_len = VAR_6;

 FUNC_0(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.msg_iov = VAR_10;
 VAR_9.msg_iovlen = 2;
 VAR_9.msg_name = &VAR_8->l2_addr[VAR_7->idx];
 VAR_9.msg_namelen = VAR_8->l2_addr_len[VAR_7->idx];

 if (FUNC_1(VAR_8->fd, &VAR_9, 0) < 0) {
  FUNC_3(VAR_1, "sendmsg(l2 rx): %s", FUNC_2(VAR_2));
 }
}
