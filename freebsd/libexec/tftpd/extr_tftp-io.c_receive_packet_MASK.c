
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
struct tftphdr {scalar_t__ th_opcode; scalar_t__ th_code; int th_msg; void* th_block; } ;
struct sockaddr_storage {int dummy; } ;
struct TYPE_2__ {scalar_t__ s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int) ;
 int VAR_14 ;
 int VAR_15 ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_4 (int,char*,int,int ,struct sockaddr*,int*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,...) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

int
FUNC_9(int VAR_21, char *VAR_22, int VAR_23, struct sockaddr_storage *VAR_24,
    int VAR_25)
{
 struct tftphdr *VAR_26;
 struct sockaddr_storage VAR_27;
 struct sockaddr_storage *VAR_28;
 socklen_t VAR_29;
 int VAR_30;
 static int VAR_31;

 if (VAR_14&VAR_2)
  FUNC_8(VAR_5,
      "Waiting %d seconds for packet", VAR_20);

 VAR_26 = (struct tftphdr *)VAR_22;

 FUNC_6(VAR_13, VAR_18);
 VAR_31 = FUNC_5(VAR_19);
 FUNC_1(VAR_25);

 if (VAR_31 != 0) {
  FUNC_8(VAR_6, "receive_packet: timeout");
  FUNC_1(0);
  return (VAR_9);
 }

 VAR_28 = (VAR_24 == ((void*)0)) ? &VAR_27 : VAR_24;
 VAR_29 = sizeof(*VAR_28);
 VAR_30 = FUNC_4(VAR_21, VAR_22, VAR_23, 0, (struct sockaddr *)VAR_28, &VAR_29);

 FUNC_1(0);

 FUNC_0("receive_packet", VAR_9);

 if (VAR_30 < 0) {
  FUNC_8(VAR_6, "receive_packet: timeout");
  return (VAR_9);
 }

 if (VAR_30 < 0) {

  FUNC_8(VAR_6, "receive_packet: %s", FUNC_7(VAR_15));
  return (VAR_8);
 }
 if (VAR_30 < 4) {
  FUNC_8(VAR_6,
      "receive_packet: packet too small (%d bytes)", VAR_30);
  return (VAR_11);
 }

 VAR_26->th_opcode = FUNC_2((u_short)VAR_26->th_opcode);
 if (VAR_26->th_opcode == VAR_1 ||
     VAR_26->th_opcode == VAR_0)
  VAR_26->th_block = FUNC_2((u_short)VAR_26->th_block);

 if (VAR_26->th_opcode == VAR_1 && VAR_30 > VAR_17) {
  FUNC_8(VAR_6, "receive_packet: packet too big");
  return (VAR_10);
 }

 if (((struct sockaddr_in *)(VAR_28))->sin_addr.s_addr !=
     ((struct sockaddr_in *)(&VAR_16))->sin_addr.s_addr) {
  FUNC_8(VAR_6,
   "receive_packet: received packet from wrong source");
  return (VAR_12);
 }

 if (VAR_26->th_opcode == VAR_3) {
  FUNC_8(VAR_26->th_code == VAR_4 ? VAR_5 : VAR_6,
      "Got ERROR packet: %s", VAR_26->th_msg);
  return (VAR_7);
 }

 if (VAR_14&VAR_2)
  FUNC_8(VAR_5, "Received %d bytes in a %s packet",
   VAR_30, FUNC_3(VAR_26->th_opcode));

 return VAR_30 - 4;
}
