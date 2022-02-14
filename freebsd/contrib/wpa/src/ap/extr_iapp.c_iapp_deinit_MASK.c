
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct ip_mreqn {scalar_t__ imr_ifindex; TYPE_1__ imr_address; int imr_multiaddr; } ;
struct iapp_data {scalar_t__ udp_sock; scalar_t__ packet_sock; int multicast; } ;
typedef int mreq ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_2 (struct iapp_data*) ;
 int FUNC_3 (struct ip_mreqn*,int ,int) ;
 scalar_t__ FUNC_4 (scalar_t__,int ,int ,struct ip_mreqn*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int ) ;

void FUNC_7(struct iapp_data *VAR_5)
{
 struct ip_mreqn VAR_6;

 if (VAR_5 == ((void*)0))
  return;

 if (VAR_5->udp_sock >= 0) {
  FUNC_3(&VAR_6, 0, sizeof(VAR_6));
  VAR_6.imr_multiaddr = VAR_5->multicast;
  VAR_6.imr_address.s_addr = VAR_0;
  VAR_6.imr_ifindex = 0;
  if (FUNC_4(VAR_5->udp_sock, VAR_3, VAR_1,
          &VAR_6, sizeof(VAR_6)) < 0) {
   FUNC_6(VAR_2, "iapp_deinit - setsockopt[UDP,IP_DEL_MEMBERSHIP]: %s",
       FUNC_5(VAR_4));
  }

  FUNC_1(VAR_5->udp_sock);
  FUNC_0(VAR_5->udp_sock);
 }
 if (VAR_5->packet_sock >= 0) {
  FUNC_1(VAR_5->packet_sock);
  FUNC_0(VAR_5->packet_sock);
 }
 FUNC_2(VAR_5);
}
