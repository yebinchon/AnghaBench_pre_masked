
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef int u_short ;
struct tftphdr {void* th_block; void* th_opcode; } ;
struct sockaddr {int dummy; } ;
typedef int buf ;
struct TYPE_2__ {int ss_len; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (int ) ;
 TYPE_1__ VAR_7 ;
 int FUNC_2 (int,char*,int,int ,struct sockaddr*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,scalar_t__) ;

int
FUNC_5(int VAR_8, uint16_t VAR_9)
{
 struct tftphdr *VAR_10;
 int VAR_11;
 char VAR_12[VAR_4];

 if (VAR_5&VAR_1)
  FUNC_4(VAR_2, "Sending ACK for block %d", VAR_9);

 FUNC_0("send_ack", 0);

 VAR_10 = (struct tftphdr *)VAR_12;
 VAR_11 = sizeof(VAR_12) - 2;
 VAR_10->th_opcode = FUNC_1((u_short)VAR_0);
 VAR_10->th_block = FUNC_1((u_short)VAR_9);
 VAR_11 = 4;

 if (FUNC_2(VAR_8, VAR_12, VAR_11, 0,
     (struct sockaddr *)&VAR_7, VAR_7.ss_len) != VAR_11) {
  FUNC_4(VAR_3, "send_ack: %s", FUNC_3(VAR_6));
  return (1);
 }

 return (0);
}
