
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sockaddr_un {scalar_t__ sun_family; int sun_path; } ;
struct sockaddr {int dummy; } ;
struct TYPE_2__ {int sun_path; } ;
struct l2_packet_data {int rx_callback_ctx; int (* rx_callback ) (int ,int *,int *,int) ;TYPE_1__ priv_addr; } ;
typedef int socklen_t ;
typedef int from ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sockaddr_un*,int ,int) ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int,int *,int,int ,struct sockaddr*,int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,int *,int) ;
 int FUNC_5 (int ,char*,...) ;

__attribute__((used)) static void FUNC_6(int VAR_5, void *VAR_6, void *VAR_7)
{
 struct l2_packet_data *VAR_8 = VAR_6;
 u8 VAR_9[2300];
 int VAR_10;
 struct sockaddr_un VAR_11;
 socklen_t VAR_12 = sizeof(VAR_11);

 FUNC_0(&VAR_11, 0, sizeof(VAR_11));
 VAR_10 = FUNC_2(VAR_5, VAR_9, sizeof(VAR_9), 0, (struct sockaddr *) &VAR_11,
         &VAR_12);
 if (VAR_10 < 0) {
  FUNC_5(VAR_3, "l2_packet_receive - recvfrom: %s",
      FUNC_3(VAR_4));
  return;
 }
 if (VAR_10 < VAR_1) {
  FUNC_5(VAR_2, "L2: Too show packet received");
  return;
 }

 if (VAR_11.sun_family != VAR_0 ||
     FUNC_1(VAR_11.sun_path, VAR_8->priv_addr.sun_path,
         sizeof(VAR_11.sun_path)) != 0) {
  FUNC_5(VAR_2, "L2: Received message from unexpected "
      "source");
  return;
 }

 VAR_8->rx_callback(VAR_8->rx_callback_ctx, VAR_9, VAR_9 + VAR_1,
   VAR_10 - VAR_1);
}
