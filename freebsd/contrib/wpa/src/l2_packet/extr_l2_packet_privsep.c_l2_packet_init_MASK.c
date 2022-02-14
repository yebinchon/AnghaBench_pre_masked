
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct sockaddr_un {int sun_path; void* sun_family; } ;
struct sockaddr {int dummy; } ;
struct TYPE_2__ {int sun_path; void* sun_family; } ;
struct l2_packet_data {void (* rx_callback ) (void*,int const*,int const*,size_t) ;int fd; struct l2_packet_data* own_socket_path; int own_addr; TYPE_1__ priv_addr; void* rx_callback_ctx; } ;
typedef int reply ;
typedef int reg_cmd ;
typedef int fd_set ;
typedef int addr ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (int,struct sockaddr*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int ,struct l2_packet_data*,int *) ;
 scalar_t__ VAR_8 ;
 int FUNC_6 () ;
 int VAR_9 ;
 int FUNC_7 (struct l2_packet_data*) ;
 struct l2_packet_data* FUNC_8 (size_t) ;
 int FUNC_9 (int ,int *,int) ;
 int FUNC_10 (struct sockaddr_un*,int ,int) ;
 int FUNC_11 (struct l2_packet_data*,int,char*,char*,char const*,...) ;
 int FUNC_12 (int ,struct l2_packet_data*,int) ;
 int FUNC_13 (char*) ;
 struct l2_packet_data* FUNC_14 (int) ;
 int FUNC_15 (int,int *,int,int ) ;
 int FUNC_16 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_17 (int ,int ,int ) ;
 int FUNC_18 (scalar_t__) ;
 int FUNC_19 (struct l2_packet_data*) ;
 int FUNC_20 (int ,char*,...) ;
 scalar_t__ FUNC_21 (struct l2_packet_data*,int ,int*,int) ;

struct l2_packet_data * FUNC_22(
 const char *VAR_10, const u8 *VAR_11, unsigned short VAR_12,
 void (*VAR_13)(void *VAR_14, const u8 *VAR_15,
       const u8 *VAR_16, size_t VAR_17),
 void *VAR_18, int VAR_19)
{
 struct l2_packet_data *VAR_20;
 char *VAR_21 = "/tmp";
 char *VAR_22 = "/var/run/wpa_priv";
 size_t VAR_23;
 static unsigned int VAR_24 = 0;
 struct sockaddr_un VAR_25;
 fd_set VAR_26;
 struct timeval VAR_27;
 int VAR_28;
 u8 VAR_29[VAR_2 + 1];
 int VAR_30[2];

 VAR_20 = FUNC_14(sizeof(struct l2_packet_data));
 if (VAR_20 == ((void*)0))
  return ((void*)0);
 VAR_20->rx_callback = VAR_13;
 VAR_20->rx_callback_ctx = VAR_18;

 VAR_23 = FUNC_13(VAR_21) + 50;
 VAR_20->own_socket_path = FUNC_8(VAR_23);
 if (VAR_20->own_socket_path == ((void*)0)) {
  FUNC_7(VAR_20);
  return ((void*)0);
 }
 FUNC_11(VAR_20->own_socket_path, VAR_23, "%s/wpa_privsep-l2-%d-%d",
      VAR_21, FUNC_6(), VAR_24++);

 VAR_20->priv_addr.sun_family = VAR_0;
 FUNC_11(VAR_20->priv_addr.sun_path, sizeof(VAR_20->priv_addr.sun_path),
      "%s/%s", VAR_22, VAR_10);

 VAR_20->fd = FUNC_17(VAR_5, VAR_7, 0);
 if (VAR_20->fd < 0) {
  FUNC_20(VAR_4, "socket(PF_UNIX): %s", FUNC_18(VAR_8));
  FUNC_7(VAR_20->own_socket_path);
  VAR_20->own_socket_path = ((void*)0);
  FUNC_7(VAR_20);
  return ((void*)0);
 }

 FUNC_10(&VAR_25, 0, sizeof(VAR_25));
 VAR_25.sun_family = VAR_0;
 FUNC_12(VAR_25.sun_path, VAR_20->own_socket_path, sizeof(VAR_25.sun_path));
 if (FUNC_3(VAR_20->fd, (struct sockaddr *) &VAR_25, sizeof(VAR_25)) < 0) {
  FUNC_20(VAR_4, "l2-pkt-privsep: bind(PF_UNIX): %s",
      FUNC_18(VAR_8));
  goto fail;
 }

 VAR_30[0] = VAR_12;
 VAR_30[1] = VAR_19;
 if (FUNC_21(VAR_20, VAR_6, VAR_30, sizeof(VAR_30))
     < 0) {
  FUNC_20(VAR_4, "L2: Failed to register with wpa_priv");
  goto fail;
 }

 FUNC_2(&VAR_26);
 FUNC_1(VAR_20->fd, &VAR_26);
 VAR_27.tv_sec = 5;
 VAR_27.tv_usec = 0;
 VAR_28 = FUNC_16(VAR_20->fd + 1, &VAR_26, ((void*)0), ((void*)0), &VAR_27);
 if (VAR_28 < 0 && VAR_8 != VAR_1) {
  FUNC_20(VAR_4, "select: %s", FUNC_18(VAR_8));
  goto fail;
 }

 if (FUNC_0(VAR_20->fd, &VAR_26)) {
  VAR_28 = FUNC_15(VAR_20->fd, VAR_29, sizeof(VAR_29), 0);
  if (VAR_28 < 0) {
   FUNC_20(VAR_4, "recv: %s", FUNC_18(VAR_8));
   goto fail;
  }
 } else {
  FUNC_20(VAR_3, "L2: Timeout while waiting for "
      "registration reply");
  goto fail;
 }

 if (VAR_28 != VAR_2) {
  FUNC_20(VAR_3, "L2: Unexpected registration reply "
      "(len=%d)", VAR_28);
 }
 FUNC_9(VAR_20->own_addr, VAR_29, VAR_2);

 FUNC_5(VAR_20->fd, VAR_9, VAR_20, ((void*)0));

 return VAR_20;

fail:
 FUNC_4(VAR_20->fd);
 VAR_20->fd = -1;
 FUNC_19(VAR_20->own_socket_path);
 FUNC_7(VAR_20->own_socket_path);
 VAR_20->own_socket_path = ((void*)0);
 FUNC_7(VAR_20);
 return ((void*)0);
}
