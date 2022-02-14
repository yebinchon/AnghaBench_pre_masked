
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ s_addr; } ;
struct sockaddr_in {TYPE_2__ sin_addr; } ;
struct sockaddr {int dummy; } ;
struct iapp_hdr {int version; int command; int identifier; int length; } ;
struct TYPE_3__ {scalar_t__ s_addr; } ;
struct iapp_data {int hapd; TYPE_1__ own; int udp_sock; } ;
typedef int socklen_t ;
typedef int from ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,int *,int ,int ,char*,int,int,...) ;
 int FUNC_2 (struct iapp_data*,struct sockaddr_in*,struct iapp_hdr*,int) ;
 int FUNC_3 (TYPE_2__) ;
 int FUNC_4 (int ,unsigned char*,int,int ,struct sockaddr*,int*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int,...) ;

__attribute__((used)) static void FUNC_7(int VAR_5, void *VAR_6, void *VAR_7)
{
 struct iapp_data *VAR_8 = VAR_6;
 int VAR_9, VAR_10;
 unsigned char VAR_11[128];
 struct sockaddr_in VAR_12;
 socklen_t VAR_13;
 struct iapp_hdr *VAR_14;



 VAR_13 = sizeof(VAR_12);
 VAR_9 = FUNC_4(VAR_8->udp_sock, VAR_11, sizeof(VAR_11), 0,
         (struct sockaddr *) &VAR_12, &VAR_13);
 if (VAR_9 < 0) {
  FUNC_6(VAR_3, "iapp_receive_udp - recvfrom: %s",
      FUNC_5(VAR_4));
  return;
 }

 if (VAR_12.sin_addr.s_addr == VAR_8->own.s_addr)
  return;

 FUNC_1(VAR_8->hapd, ((void*)0), VAR_1,
         VAR_0,
         "Received %d byte IAPP frame from %s%s\n",
         VAR_9, FUNC_3(VAR_12.sin_addr),
         VAR_9 < (int) sizeof(*VAR_14) ? " (too short)" : "");

 if (VAR_9 < (int) sizeof(*VAR_14))
  return;

 VAR_14 = (struct iapp_hdr *) VAR_11;
 VAR_10 = FUNC_0(VAR_14->length);
 FUNC_1(VAR_8->hapd, ((void*)0), VAR_1,
         VAR_0,
         "RX: version=%d command=%d id=%d len=%d\n",
         VAR_14->version, VAR_14->command,
         FUNC_0(VAR_14->identifier), VAR_10);
 if (VAR_14->version != VAR_2) {
  FUNC_6(VAR_3, "Dropping IAPP frame with unknown version %d",
      VAR_14->version);
  return;
 }
 if (VAR_10 > VAR_9) {
  FUNC_6(VAR_3, "Underflow IAPP frame (hlen=%d len=%d)",
      VAR_10, VAR_9);
  return;
 }
 if (VAR_10 < VAR_9) {
  FUNC_6(VAR_3, "Ignoring %d extra bytes from IAPP frame",
      VAR_9 - VAR_10);
  VAR_9 = VAR_10;
 }

 switch (VAR_14->command) {
 case 129:
  FUNC_2(VAR_8, &VAR_12, VAR_14, VAR_9 - sizeof(*VAR_14));
  break;
 case 128:





  break;
 default:
  FUNC_6(VAR_3, "Unknown IAPP command %d", VAR_14->command);
  break;
 }
}
